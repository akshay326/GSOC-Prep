## Builiding C++ Libraries for Android Architectures

To leverage existing CMake build system, I'm using [android-cmake](https://github.com/taka-no-me/android-cmake), which was used to build [OpenCV for android](https://opencv.org/platforms/android/).  


### Demo Package Build
As an example, I'll use the ```SampleCPackage``` . Just hit terminal with
```
mkdir build
cd build/
cmake -DCMAKE_TOOLCHAIN_FILE=../android.toolchain.cmake \
      -DANDROID_NDK=<ndk_path>                       \
      -DANDROID_NATIVE_API_LEVEL=android-18          \
      -DCMAKE_BUILD_TYPE=Debug                     \
      -DANDROID_ABI="armeabi-v7a with NEON"          \
      <source_path>
cmake --build .
```  
Your directory structure should be like:
```
.. README.md
.. android.toolchain.cmake
.. build/
   .. CMakeLists.txt
   .. Makefile
   ..
```
### Few errors
+ Initially while building I got some api-level.h related error. There was some regex expression error(I guess the NDK files have changed since old revisions)
