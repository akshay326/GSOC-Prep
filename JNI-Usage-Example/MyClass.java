import org.visp.core.VpMatrix;

public class MyClass {

    static {
        System.loadLibrary("MyLib");
    }

    public static void main(String[] args) {

	VpMatrix vp = new VpMatrix(2,3);
	System.out.println(vp.cols());
	System.out.println(vp.rows());

    }
}
