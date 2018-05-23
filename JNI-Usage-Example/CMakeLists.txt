cmake_minimum_required(VERSION 3.9)
project(MyLib)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)   # Equivalent to -fPIC in cmd
set(CMAKE_CXX_STANDARD 11)

add_library(MyLib SHARED native.cpp)

# Add library
list(APPEND CMAKE_MODULE_PATH "/home/akshay/Projects/GSOC/SampleCPackage/build/")
find_package(Foo REQUIRED)

find_package(JNI REQUIRED)

if (JNI_FOUND)
 	target_link_libraries(MyLib ${JNI_LIBRARIES})
    include_directories(${JNI_INCLUDE_DIRS})
else()
	message("Fatal error: JNI not found")
endif()

if (Foo_FOUND)
    target_link_libraries(MyLib ${FOO_LIBRARIES})
    include_directories(${FOO_INCLUDE_DIRS})
else()
    message("Fatal error: Foo not found")
endif()
