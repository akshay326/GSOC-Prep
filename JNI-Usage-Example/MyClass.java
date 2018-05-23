public class MyClass {

    static {
        System.loadLibrary("MyLib"); // => libMyLib.so
///home/akshay/Projects/GSOC/SampleCPackage/build/Foo
        System.loadLibrary("Foo");   // => original library
    }

    public static void main(String[] args) {

        sayHello();
        sayHello();

    }

    public static native void sayHello();
}
