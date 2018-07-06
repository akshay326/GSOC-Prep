import org.visp.core.VpImageUChar;
import org.visp.detection.VpDetectorAprilTag;
import org.visp.io.VpImageIo;

public class Main {
	static {
		System.loadLibrary("visp_java320");
	}
	
	public static void main(String[] args) {
		VpImageUChar imageUChar = new VpImageUChar();
		VpImageIo.read(imageUChar, "tagsampler.png");
		
		System.out.println(imageUChar.cols() + "x" + imageUChar.rows());
		
		VpDetectorAprilTag detectorAprilTag = new VpDetectorAprilTag();
		boolean res = detectorAprilTag.detect(imageUChar);
		System.out.println("Result was: "+res);
		
		VpImageIo.read(imageUChar, "monkey.png");
		res = detectorAprilTag.detect(imageUChar);
		System.out.println("Result was: "+res);
	}
}
