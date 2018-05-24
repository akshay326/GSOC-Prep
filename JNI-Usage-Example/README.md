## ViSP Java Development

+ I'm using CMake for compiling and generating the shared libraries(`.so` files)
+ Make sure you have the required C++ code in `native.cpp` for corresponding functions in `MyClass.java`
+ Just hit `./run.sh` to run the script. It'll compile the Java code, generate required header files, and integrate the native source code.
+ Beware of the Java versions! While Java version 1.10 uses `javac <filename> -h <o/p header file dir>`, Java 1.8 uses combination of `java` and `javah` to generate header files.
