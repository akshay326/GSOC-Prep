import org.visp.core.VpMatrix;
import org.visp.core.VpCameraParameters;
import org.visp.core.VpImageUChar;
import org.visp.io.VpImageIo;
import org.visp.gui.VpDisplayOpenCV;
import java.util.Scanner;

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
		Scanner sc=new Scanner(System.in);	
		
		print("Specify the relative path of the image you want to open:\n");
		String relPath = sc.nextLine();
		
		VpImageUChar imageUChar = new VpImageUChar(20,40);
		VpImageIo.read(imageUChar, relPath);
		
		print(imageUChar.cols() + " " + imageUChar.rows());
		
		VpDisplayOpenCV displayOpenCV = new VpDisplayOpenCV();
		displayOpenCV.init(imageUChar);
	}
}
