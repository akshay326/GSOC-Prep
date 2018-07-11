import org.visp.core.VpImageRGBa;
import org.visp.io.VpImageIo;

public class Main {
	 
	static {
		System.loadLibrary("visp_java320");
	}
	
	public static int fromBytes(byte b) {
		return b >=0 ?b:b+256;
	}

	public static void main(String[] args) {
		VpImageRGBa image = new VpImageRGBa();
		VpImageIo.read(image, "image.png");
		
		System.out.println(image.cols() + " x " + image.rows());
		System.out.println(image.getPixel(1,1));
		
		byte arr[] = image.getPixels();
		for (int i = 0; i < arr.length/40; i += 10)
			System.out.println(fromBytes(arr[4*i]) + "," + fromBytes(arr[4*i + 1]) + "," + fromBytes(arr[4*i + 2]) + "," + fromBytes(arr[4*i + 3]));
		
		VpImageIo.writePNG(image, "image2.png");
	}
}
