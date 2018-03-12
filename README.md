# My scratchpad for GSOC

The repo includes basic examples like creating a package and importing it. Using the ```android.toolchain.cmake``` file from the official Android repository(using NDK16) one can import existing C++ source code to android platform(generating some shared libraries and associated header files). I'm willing to do the same for [ViSP](https://github.com/lagadic/visp).

## Building libraries in Android
Begin from the example in ```AndroidCMake``` directory. It imports a simple package called **Foo** for android.
 
Later you can try building OpenCV for android - I'm currently trying to edit some cmake files to exclude some third party libraries for OpenCV.

## Building ViSP for Android
I haven't started neither the java nor the ```build_sdk.py``` part yet. Currently I'm adding build flags to cmake files for android platform.
