cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_STANDARD 11)
project(Foo)

set(Foo_MAJOR_VERSION 0)
set(Foo_MINOR_VERSION 1)
set(Foo_PATCH_VERSION 0)
set(Foo_VERSION
        ${Foo_MAJOR_VERSION}.${Foo_MINOR_VERSION}.${Foo_PATCH_VERSION})

# Offer the user the choice of overriding the installation directories
set(INSTALL_LIB_DIR lib CACHE PATH "Installation directory for libraries")
set(INSTALL_BIN_DIR bin CACHE PATH "Installation directory for executables")
set(INSTALL_INCLUDE_DIR include CACHE PATH "Installation directory for header files")
set(DEF_INSTALL_CMAKE_DIR lib/CMake/Foo)
set(INSTALL_CMAKE_DIR ${DEF_INSTALL_CMAKE_DIR} CACHE PATH
        "Installation directory for CMake files")

# Make relative paths absolute (needed later on)
foreach(p LIB BIN INCLUDE CMAKE)
    set(var INSTALL_${p}_DIR)
    if(NOT IS_ABSOLUTE "${${var}}")
        set(${var} "${CMAKE_INSTALL_PREFIX}/${${var}}")
    endif()
endforeach()

if (ANDROID)
    message(STATUS "Hello from Android build!")
endif()

# set up include-directories
include_directories(
        "${PROJECT_SOURCE_DIR}"   # to find Foo/hello.h
        "${PROJECT_BINARY_DIR}")  # to find Foo/config.h

# Add sub-directories
add_subdirectory(Foo)

# The interesting stuff goes here
##########################################
# Add all targets to the build-tree export set
export(TARGETS Foo FILE "${PROJECT_BINARY_DIR}/FooTargets.cmake")

# Export the package for use from the build-tree
# (this registers the build-tree with a global CMake-registry)
export(PACKAGE Foo)

# Create the FooConfig.cmake and FooConfigVersion files
file(RELATIVE_PATH REL_INCLUDE_DIR "${INSTALL_CMAKE_DIR}"
        "${INSTALL_INCLUDE_DIR}")
# ... for the build tree
set(CONF_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}" "${PROJECT_BINARY_DIR}")
configure_file(FooConfig.cmake.in
        "${PROJECT_BINARY_DIR}/FooConfig.cmake" @ONLY)
# ... for the install tree
set(CONF_INCLUDE_DIRS "\${Foo_CMAKE_DIR}/${REL_INCLUDE_DIR}")
configure_file(FooConfig.cmake.in
        "${PROJECT_BINARY_DIR}${CMAKE_FILES_DIRECTORY}/FooConfig.cmake" @ONLY)
# ... for both
configure_file(FooConfigVersion.cmake.in
        "${PROJECT_BINARY_DIR}/FooConfigVersion.cmake" @ONLY)

# Install the FooConfig.cmake and FooConfigVersion.cmake
install(FILES
        "${PROJECT_BINARY_DIR}${CMAKE_FILES_DIRECTORY}/FooConfig.cmake"
        "${PROJECT_BINARY_DIR}/FooConfigVersion.cmake"
        DESTINATION "${INSTALL_CMAKE_DIR}" COMPONENT dev)

# Install the export set for use with the install-tree
install(EXPORT FooTargets DESTINATION
        "${INSTALL_CMAKE_DIR}" COMPONENT dev)
