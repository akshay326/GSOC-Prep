## ViSP Java Development

My aim is to generate a jar file and a .so c++ library that can be used later in editors like Eclipse
To compile the given scripts, make a few changes in `CMakeLists.txt` :
1. Change below line to ViSP's built libraries folder  
```set(VISP_LIB_DIR /home/akshay/Projects/Visp-WS/visp_build/lib)```
2. Change below line to include ViSP's header files  
```include_directories(/home/akshay/Projects/GSOC/for-android-demo/include)```

### Info
+ I'm using CMake for compiling and generating the shared libraries(`.so` files)
+ Make sure you have the required C++ code in `native.cpp` for corresponding functions in `MyClass.java`
+ Just hit `./run.sh` to run the script. It'll compile the Java code, generate required header files, and integrate the native source code.
+ Beware of the Java versions! While Java version 1.10 uses `javac <filename> -h <o/p header file dir>`, Java 1.8 uses combination of `java` and `javah` to generate header files.
