import org.visp.core.VpMatrix;
import org.visp.core.VpArray2D;
import org.visp.core.VpImage;

public class MyClass {

    static {
        System.loadLibrary("MyLib");
    }

    public static void main(String[] args) {

	VpMatrix vp = new VpMatrix(2,3);
	System.out.println(vp.cols());
	System.out.println(vp.rows());
	
	VpArray2D<Double> a = new VpArray2D<Double>(Double.class, 3, 3);
	System.out.println(a.cols());
	System.out.println(a.rows());

	byte[] arr = new byte[]{1,2,3,4,5,6,7,8,9,10,11,12};
        VpImage<Byte> img = new VpImage<Byte>(Byte.class,arr,3,4,true);
	System.out.println(img.dump());
    }
}
