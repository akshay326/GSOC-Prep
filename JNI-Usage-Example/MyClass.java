public class MyClass {

    static {
        System.loadLibrary("MyLib"); // => libMyLib.so
    }

    public static void main(String[] args) {

		int row = 3,col =5;
		double val=1.3; 
        printVpMatrix(row,col,val);

    }

    public static native void printVpMatrix(int r,int c,double val);
}
