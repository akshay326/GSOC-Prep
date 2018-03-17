#!/bin/bash
clear
rm -r build
mkdir build
cd build
cmake -DCMAKE_TOOLCHAIN_FILE=../android.toolchain.cmake \
    -DANDROID_TOOLCHAIN_NAME=x86_64-4.9 \
    -DANDROID_NDK=$NDK \
    -DCMAKE_BUILD_TYPE=Debug \
    -DANDROID_ABI="x86_64" \
    -DBUILD_TESTS=false \
    -DBUILD_DEMOS=false \
    -DBUILD_EXAMPLES=false \
    -DBUILD_TUTORIALS=false \
    -DANDROID_CPP_FEATURES="rtti exceptions" \
    -DANDROID_STL=gnustl_static ../../../Visp-WS/visp/

    # the cpp features are important
    # w/ lapack 3rd party. Remove by -DWITH_LAPACK=false \
    # no tests,demos, etc b4 install

make -j4 visp_core # trying to build only core
# cmake --build .
# cmake . -GNinja -- VERBOSE=1
#cmake -GNinja -DCMAKE_TOOLCHAIN_FILE=../android.toolchain.cmake -DANDROID_NDK=$NDK -DCMAKE_BUILD_TYPE=Debug -DANDROID_ABI="x86_64"  -DANDROID_STL=c++_shared ../../SampleCPackage
#ninja

