import org.visp.core.VpCameraParameters;
import org.visp.core.VpHomogeneousMatrix;
import org.visp.core.VpImageRGBa;
import org.visp.core.VpImageUChar;
import org.visp.detection.VpDetectorAprilTag;
import org.visp.gui.VpDisplay;
import org.visp.io.VpImageIo;

import java.util.List;

public class Main {
	static {
		System.loadLibrary("visp_java320");
	}
	
	public static void main(String[] args) {
		VpImageUChar imageUChar = new VpImageUChar();	
		VpImageIo.read(imageUChar, "AprilTag.pgm");
		VpImageRGBa colorImage = new VpImageRGBa();	
		VpImageIo.read(colorImage, "AprilTag.pgm");
		
		System.out.println(imageUChar.cols() + "x" + imageUChar.rows());
		
		// just detect whether image contains apriltag 
		VpDetectorAprilTag detectorAprilTag = new VpDetectorAprilTag();
		boolean res = detectorAprilTag.detect(imageUChar);
		System.out.println("Result was: "+res);
		
		// Detecting and get Projections
		VpCameraParameters cam = new VpCameraParameters();
		cam.initPersProjWithoutDistortion(615.1674805, 615.1675415, 312.1889954, 243.4373779);
		List<VpHomogeneousMatrix> list =  detectorAprilTag.detect(imageUChar, 0.053, cam);
		System.out.println("Size of list: "+list.size());
		
		VpDisplay display = new VpDisplay();
		display.display(colorImage);
		display.flush();
		display.getClick();
		
		VpDisplay display2 = new VpDisplay();
		display2.display(colorImage);
		for(VpHomogeneousMatrix mat:list)
			display2.displayFrame(mat, cam, 0.05, 3);
		display2.flush();
		display2.getClick();
	}
}
