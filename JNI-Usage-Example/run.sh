# Remove some files if they exist
declare -a arr=("MyClass.class")
for i in "${arr[@]}"
do
   [ -e "$i" ] && rm "$i"
done


# Generating native header files
# For Java versions 1.8 or version 52
# javac org/visp/core/*.java MyClass.java
# javah -jni org/visp/core/*

# For java versions 1.10 or version 54
javac -cp . org/visp/core/*.java MyClass.java -h ./cpp


# rename the Native header file. Just for readability
cd cpp
mv org_visp_core_VpMatrix.h VpMatrix.h
mv org_visp_core_VpArray2D.h VpArray2D.h
mv org_visp_core_VpImage.h VpImage.h 
cd ..


# Generating .so file. NOTE that original C++ code and native JNI code will hv their separate .so files
rm -r build
mkdir build
cd build
cmake ..
make -j4


# Execute
cd ..
java -Djava.library.path=./build MyClass
