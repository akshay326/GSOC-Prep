public class MyClass {

    static {
        System.loadLibrary("MyLib"); // => libMyLib.so
    }

    public static void main(String[] args) {

        sayHello();
        sayHello();

    }

    public static native void sayHello();
}
