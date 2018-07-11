#!/bin/bash
clear
rm -r build
mkdir build
cd build

cmake -DCMAKE_TOOLCHAIN_FILE=../android.toolchain.cmake \
   -DANDROID_TOOLCHAIN_NAME=x86_64-4.9 \
   -DCMAKE_BUILD_TYPE=Release \
	 -DANDROID_PLATFORM=android-24 \
   -DANDROID_ABI="x86" \
   -DBUILD_TESTS=false \
   -DBUILD_DEMOS=false \
   -DBUILD_JAVA=true \
   -DBUILD_EXAMPLES=false \
   -DBUILD_TUTORIALS=false \
   -DUSE_PTHREAD=false \
   -DANDROID_CPP_FEATURES="rtti exceptions" \
   -DANDROID_STL=gnustl_static \
   ../../../Visp-WS/visp/
    
    # Possible toolchains
    # -DANDROID_TOOLCHAIN_NAME=arm-linux-androideabi-4.9 \
    # the cpp features are important
    # w/o lapack 3rd party. Remove by -DWITH_LAPACK=false \
    # no tests,demos, etc b4 install
    # Try only after android-24. Previous revisions will produce a lot of error

make -j4 visp_java
