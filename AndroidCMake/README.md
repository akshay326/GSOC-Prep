## Builiding C++ Libraries for Android Architectures

To leverage existing CMake build system, I'm using **android.toolchain.cmake** file.  
Note that [android-cmake](https://github.com/taka-no-me/android-cmake), which was used to build [OpenCV for android](https://opencv.org/platforms/android/) is no longer supported. 
So I'm using [the official file](https://android.googlesource.com/platform/ndk/+/master/build/cmake/android.toolchain.cmake) supported by Android team(also supports NDK16).


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
### A few lessons
+ Have the latest cmake. In my case the ubuntu repositories weren't enough.
+ On the [official developer pagge](https://developer.android.com/ndk/guides/cpp-support.html), it clearly mentioned that LLVM's libc++ or c++_static/shared should be prefered as a runtime. This will be the only STL supported in future for NDK.
+ Whats **#include_next** directive? Refer [this GNU doc](https://gcc.gnu.org/onlinedocs/cpp/Wrapper-Headers.html)
+ Dont include ```/usr/include``` or any other system header anywhere. This'll lead to an array of missing headers.  
  Rather include ```${ANDROID_NDK}/sysroot/usr/include```, almost same as system headers.
+ To resolve std::string::to_string errors, keep gnustl_static as runtime. Refer [this thread](https://stackoverflow.com/questions/22774009/android-ndk-stdto-string-support)
