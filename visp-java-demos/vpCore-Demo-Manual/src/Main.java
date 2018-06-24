import org.visp.core.VpCameraParameters;
import org.visp.core.VpColVector;
import org.visp.core.VpImageRGBa;
import org.visp.core.VpImageUChar;
import org.visp.core.VpMatrix;
import org.visp.core.VpRGBa;

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

	public static void main(String[] args) {
		// VpMatrix
		VpMatrix vp = new VpMatrix(2,3,1.5);
		print(vp.transpose().dump());
		print(vp.cols() + "" + vp.rows());
		
		// VpColVector
		VpColVector vpColVector = new VpColVector(10,1.5);
		print(vpColVector.infinityNorm());
		
		// VpImageUChar
		VpImageUChar imageUChar = new VpImageUChar(2, 4, (byte)220);
		print(imageUChar.dump());
		
		// VpImageRGBa
		VpImageRGBa colorImage = new VpImageRGBa(3, 5, new VpRGBa((char)255,(char)0,(char)0,(char)255));
		print(colorImage.dump());
		
		// VpCameraParameters
		VpCameraParameters vpCameraParameters = new VpCameraParameters(1.0, 1.0, 1.0, 1.0);
		print(vpCameraParameters.get_K().dump());
	}
}
