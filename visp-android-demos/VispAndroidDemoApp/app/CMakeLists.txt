cmake_minimum_required(VERSION 3.4.1)

# Change this argument according to your desktop
# i've created a link to the .so files folder
set(VISP_LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/main/jniLibs/${ANDROID_ABI})

include_directories(/home/akshay/Projects/GSOC-Prep/for-android-demo/include)

# VISP
# -----------------------------
add_library(visp_detection SHARED IMPORTED )
set_target_properties(visp_detection PROPERTIES IMPORTED_LOCATION ${VISP_LIB_DIR}/libvisp_detection.a)

add_library(visp_core SHARED IMPORTED )
set_target_properties(visp_core PROPERTIES IMPORTED_LOCATION ${VISP_LIB_DIR}/libvisp_core.a)

add_library(visp_imgproc SHARED IMPORTED )
set_target_properties(visp_imgproc PROPERTIES IMPORTED_LOCATION ${VISP_LIB_DIR}/libvisp_imgproc.a)

add_library(visp_io SHARED IMPORTED )
set_target_properties(visp_io PROPERTIES IMPORTED_LOCATION ${VISP_LIB_DIR}/libvisp_io.a)

add_library(visp_vision SHARED IMPORTED )
set_target_properties(visp_vision PROPERTIES IMPORTED_LOCATION ${VISP_LIB_DIR}/libvisp_vision.a)

add_library(visp_me SHARED IMPORTED )
set_target_properties(visp_me PROPERTIES IMPORTED_LOCATION ${VISP_LIB_DIR}/libvisp_me.a)

# VISP
# ------------------------------

add_library(native-lib  SHARED  src/main/cpp/native-lib.cpp)

find_library(log-lib log)
target_link_libraries(native-lib ${log-lib} visp_detection visp_core visp_io visp_vision visp_me visp_imgproc)