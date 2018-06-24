import org.visp.core.VpImageRGBa;
import org.visp.io.VpImageIo;

public class Main {
	 
	static {
		System.loadLibrary("visp_java320");
	}
	
	// Helper function for printing
	public static void print(Object ... objs) {
		for(Object o:objs)
			System.out.print(o+" ");
		System.out.println('\n');
	}
	
	public static int fromBytes(byte b) {
		return b >=0 ?b:b+256;
	}

	public static void main(String[] args) {
		VpImageRGBa image = new VpImageRGBa();
		VpImageIo.read(image, "/home/akshay/temp2.png");
		
		print(image.cols() + " x " + image.rows());
		print(image.dump());
		
		print(image.getPixel(1,1));
		
		byte arr[] = image.getPixels();
		for (int i = 0; i < arr.length/4; i++)
			print(fromBytes(arr[4*i]) + "," + fromBytes(arr[4*i + 1]) + "," + fromBytes(arr[4*i + 2]) + "," + fromBytes(arr[4*i + 3]));
		
		VpImageIo.writePNG(image, "temp2.png");
	}
}
