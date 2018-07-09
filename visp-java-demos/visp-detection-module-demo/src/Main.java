import org.visp.core.VpCameraParameters;
import org.visp.core.VpHomogeneousMatrix;
import org.visp.core.VpImageUChar;
import org.visp.detection.VpDetectorAprilTag;
import org.visp.io.VpImageIo;

import java.util.List;

public class Main {
	static {
		System.loadLibrary("visp_java320");
	}
	
	public static void main(String[] args) {
		VpImageUChar imageUChar = new VpImageUChar();	
		VpImageIo.read(imageUChar, "tagsampler.png");
		
		System.out.println(imageUChar.cols() + "x" + imageUChar.rows());
		
		// just detect whether image contains apriltag 
		VpDetectorAprilTag detectorAprilTag = new VpDetectorAprilTag();
		boolean res = detectorAprilTag.detect(imageUChar);
		System.out.println("Result was: "+res);
		
//		// Bogus detection
//		VpImageIo.read(imageUChar, "monkey.png");
//		res = detectorAprilTag.detect(imageUChar);
//		System.out.println("Result was: "+res);
		
		// Detecting and get Projections
		VpCameraParameters cam = new VpCameraParameters();
		cam.initPersProjWithoutDistortion(615.1674805, 615.1675415, 312.1889954, 243.4373779);
		List<VpHomogeneousMatrix> list =  detectorAprilTag.detect(imageUChar, 0.053, cam);
		System.out.println("Size of list: "+list.size());
		
	}
}
