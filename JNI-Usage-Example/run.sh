# Remove some files if they exist
declare -a arr=("MyClass.class" "native.h")
for i in "${arr[@]}"
do
   [ -e "$i" ] && rm "$i"
done

# Generating native header files
javac MyClass.java
javah -jni MyClass
mv MyClass.h native.h   # rename the Native header file. Just for readability

# Generating .so file. NOTE that original C++ code and native JNI code will hv their separate .so files
rm -r build
mkdir build
cd build
cmake ..
make -j4

# Execute
cd ..
java -Djava.library.path=./build:/home/akshay/Projects/GSOC/SampleCPackage/build/Foo MyClass
