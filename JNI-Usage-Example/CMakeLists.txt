cmake_minimum_required(VERSION 3.9)
project(visp_java320)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)   # Equivalent to -fPIC in cmd
set(CMAKE_CXX_STANDARD 11)

# Create a collection of all .cpp files to be added dynamically. Not need to hardcode files to be added
file(GLOB_RECURSE SRC_FILES "*.cpp")
list(REMOVE_AT SRC_FILES 0) # Remove a Cmake file
#foreach(m ${SRC_FILES})
#		message(${m})
#endforeach()
add_library(visp_java320 SHARED ${SRC_FILES})

# Read paths from calling command line
set(VISP_SRC_DIR "" CACHE STRING "ViSP Source Directory Absolute Path")
set(VISP_BUILD_DIR "" CACHE STRING "ViSP Build Directory Absolute Path")

# Add library
find_package(JNI REQUIRED)

if (JNI_FOUND)
 	target_link_libraries(visp_java320 ${JNI_LIBRARIES})
    include_directories(${JNI_INCLUDE_DIRS})
else()
	message("Fatal error: JNI not found")
endif()

# Include Headers for ViSP
include_directories(${VISP_SRC_DIR}/modules/core/include)
include_directories(${VISP_SRC_DIR}/modules/gui/include)
include_directories(${VISP_SRC_DIR}/modules/io/include)
include_directories(${VISP_SRC_DIR}/modules/imgproc/include)
include_directories(${VISP_SRC_DIR}/modules/detection/include)
include_directories(${VISP_BUILD_DIR}/include)   # For core/vpConfig.h

# VISP
# -----------------------------
set(VISP_LIB_DIR ${VISP_BUILD_DIR}/lib)

add_library(visp_detection SHARED IMPORTED )
set_target_properties(visp_detection PROPERTIES IMPORTED_LOCATION ${VISP_LIB_DIR}/libvisp_detection.so)

add_library(visp_core SHARED IMPORTED )
set_target_properties(visp_core PROPERTIES IMPORTED_LOCATION ${VISP_LIB_DIR}/libvisp_core.so)

add_library(visp_imgproc SHARED IMPORTED )
set_target_properties(visp_imgproc PROPERTIES IMPORTED_LOCATION ${VISP_LIB_DIR}/libvisp_imgproc.so)

add_library(visp_io SHARED IMPORTED )
set_target_properties(visp_io PROPERTIES IMPORTED_LOCATION ${VISP_LIB_DIR}/libvisp_io.so)

add_library(visp_gui SHARED IMPORTED )
set_target_properties(visp_gui PROPERTIES IMPORTED_LOCATION ${VISP_LIB_DIR}/libvisp_gui.so)

add_library(visp_vision SHARED IMPORTED )
set_target_properties(visp_vision PROPERTIES IMPORTED_LOCATION ${VISP_LIB_DIR}/libvisp_vision.so)

add_library(visp_me SHARED IMPORTED )
set_target_properties(visp_me PROPERTIES IMPORTED_LOCATION ${VISP_LIB_DIR}/libvisp_me.so)

# VISP
# ------------------------------

target_link_libraries(visp_java320 visp_gui visp_detection visp_core visp_io visp_vision visp_me visp_imgproc)
