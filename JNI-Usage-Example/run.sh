# This is a sample script that'll generate a jar file and .so executable for visp

## Legacy. Not needed now
# Remove some files if they exist
#declare -a arr=("MyClass.class")
#for i in "${arr[@]}"
#do
#   [ -e "$i" ] && rm "$i"
#done


# Generating native header files
# For Java versions 1.8 or version 52
# javac org/visp/core/*.java MyClass.java
# javah -jni org/visp/core/*

# For java versions 1.10 or version 54
# javac -cp . org/visp/core/*.java MyClass.java -h ./cpp
javac -cp . org/visp/core/*.java -h ./cpp
javac -cp . org/visp/gui/*.java -h ./cpp
javac -cp . org/visp/imgproc/*.java -h ./cpp
javac -cp . org/visp/io/*.java -h ./cpp

# rename the Native header file. Just for readability. Replace substring org_visp_core by ' ' 
cd cpp
rename.ul 'org_visp_core_' '' *.h
rename.ul 'org_visp_gui_' '' *.h
rename.ul 'org_visp_io_' '' *.h
rename.ul 'org_visp_imgproc_' '' *.h
cd ..


# Generating .so file. NOTE that original C++ code and native JNI code will hv their separate .so files
rm -r build
mkdir build
cd build
cmake ..
make -j4
cd ..

# Initially I wrote the script for executing a java program. The code below demonstrate how to do it
# If u're interested in generating jar and .so files, skip this part
# Execute
# cd ..
# java -Djava.library.path=./build MyClass

# Generate jar
jar cf visp_java320.jar ./org
# For verbose, use below
#jar cvf visp_java320.jar ./org

# move .so file out of `build` folder
cp ./build/libvisp_java320.so .

