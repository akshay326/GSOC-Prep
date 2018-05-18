# Remove some files if they exist
declare -a arr=("MyClass.class" "MyClass.h" "native.h")
for i in "${arr[@]}"
do
   [ -e "$i" ] && rm "$i"
done

javac MyClass.java
javah -jni MyClass
mv MyClass.h native.h   # rename the Native header file. Just for readability
g++ -fPIC -I/usr/java/jdk1.8.0_111/include -I/usr/java/jdk1.8.0_111/include/linux -shared -o libMyLib.so native.c
java -Djava.library.path=. MyClass
