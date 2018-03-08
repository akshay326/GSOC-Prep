#!/bin/bash
clear
rm -r build/*
cd build
cmake -DCMAKE_TOOLCHAIN_FILE=../android.toolchain.cmake -DANDROID_NDK=$NDK -DCMAKE_BUILD_TYPE=Debug -DANDROID_ABI="x86_64"  -DANDROID_STL=c++_shared ../../SampleCPackage
cmake -GNinja . -- VERBOSE=1 -j4
