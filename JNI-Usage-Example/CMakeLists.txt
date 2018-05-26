cmake_minimum_required(VERSION 3.9)
project(MyLib)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)   # Equivalent to -fPIC in cmd
set(CMAKE_CXX_STANDARD 11)

add_library(MyLib SHARED ../cpp/VpMatrix.cpp ../cpp/VpArray2D.cpp ../cpp/VpImage.cpp)

# Change this argument according to your desktop
# i've created a link to the .so files folder
set(VISP_LIB_DIR /home/akshay/Projects/Visp-WS/visp_build/lib)

# Add library
find_package(JNI REQUIRED)

if (JNI_FOUND)
 	target_link_libraries(MyLib ${JNI_LIBRARIES})
    include_directories(${JNI_INCLUDE_DIRS})
else()
	message("Fatal error: JNI not found")
endif()

include_directories(/home/akshay/Projects/GSOC/for-android-demo/include)

# VISP
# -----------------------------
add_library(visp_detection SHARED IMPORTED )
set_target_properties(visp_detection PROPERTIES IMPORTED_LOCATION ${VISP_LIB_DIR}/libvisp_detection.so)

add_library(visp_core SHARED IMPORTED )
set_target_properties(visp_core PROPERTIES IMPORTED_LOCATION ${VISP_LIB_DIR}/libvisp_core.so)

add_library(visp_imgproc SHARED IMPORTED )
set_target_properties(visp_imgproc PROPERTIES IMPORTED_LOCATION ${VISP_LIB_DIR}/libvisp_imgproc.so)

add_library(visp_io SHARED IMPORTED )
set_target_properties(visp_io PROPERTIES IMPORTED_LOCATION ${VISP_LIB_DIR}/libvisp_io.so)

add_library(visp_vision SHARED IMPORTED )
set_target_properties(visp_vision PROPERTIES IMPORTED_LOCATION ${VISP_LIB_DIR}/libvisp_vision.so)

add_library(visp_me SHARED IMPORTED )
set_target_properties(visp_me PROPERTIES IMPORTED_LOCATION ${VISP_LIB_DIR}/libvisp_me.so)

# VISP
# ------------------------------

target_link_libraries(MyLib visp_detection visp_core visp_io visp_vision visp_me visp_imgproc)
