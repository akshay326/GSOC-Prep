cmake_minimum_required(VERSION 3.9)
project(SampleC__LibUsage)

set(CMAKE_CXX_STANDARD 11)
add_executable(SampleC__LibUsage main.cpp)

# Add library
list(APPEND CMAKE_MODULE_PATH "/home/akshay/Projects/GSOC/SampleCPackage/build/")
find_package(Foo REQUIRED)

if (Foo_FOUND)
    target_link_libraries(SampleC__LibUsage ${FOO_LIBRARIES})
    include_directories(${FOO_INCLUDE_DIRS})
	message(${Foo_DIR})
else()
    message("Fatal error: Foo not found")
endif()
