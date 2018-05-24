# Remove some files if they exist
declare -a arr=("MyClass.class" "native.h")
for i in "${arr[@]}"
do
   [ -e "$i" ] && rm "$i"
done

# Generating native header files

# For Java versions 1.8 or version 52
# javac MyClass.java
# javah -jni MyClass

# For java versions 1.10 or version 54
javac MyClass.java -h .
mv MyClass.h native.h   # rename the Native header file. Just for readability

# Generating .so file. NOTE that original C++ code and native JNI code will hv their separate .so files
rm -r build
mkdir build
cd build
cmake ..
make -j4

# Execute
cd ..
java -Djava.library.path=./build MyClass
