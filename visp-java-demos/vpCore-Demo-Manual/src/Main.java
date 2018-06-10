import org.visp.core.VpColVector;
import org.visp.core.VpImageUChar;
import org.visp.core.VpMatrix;

public class Main {
	static {
		System.loadLibrary("visp_java320");
	}
	
	// Helper function for printing
	public static void print(Object ... objs) {
		for(Object o:objs)
			System.out.print(o+" ");
		System.out.println(' ');
	}
	
	public static void main(String[] args) {
		// VpMatrix
		VpMatrix vp = new VpMatrix(2,3,1.5);
		print(vp.dump());
		print(vp.transpose().dump());
		
		print(vp.cols() + "" + vp.rows());
		
		VpColVector vpColVector = vp.column(1);
		print(vpColVector.infinityNorm());
		
		// VpImageUChar
		VpImageUChar imageUChar = new VpImageUChar(2, 4, (byte)120);
		print(imageUChar.dump());
	}
}
