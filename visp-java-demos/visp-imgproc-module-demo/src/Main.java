import org.visp.core.VpImageRGBa;
import org.visp.gui.VpDisplay;
import org.visp.imgproc.VpImgproc;
import org.visp.imgproc.VpDirection;
import org.visp.imgproc.VpContour;
import org.visp.io.VpImageIo;

public class Main {
	static {
		System.loadLibrary("visp_java320");
	}
	
	public static void main(String args[]) {
		
		// Simple contour demo
		VpDirection direction = new VpDirection();
		System.out.println(direction.clockwise().mDirectionType);
		
		VpContour contour = new VpContour(VpContour.VpContourType.CONTOUR_HOLE);
		VpContour parent = new VpContour();
		contour.setParent(parent);
		
		// Simple imgproc demo
		VpImageRGBa image = new VpImageRGBa();
		VpImageRGBa image_adjust = new VpImageRGBa();
		VpImageIo.read(image, "monkey.png");
		
		double alpha = 1.5, beta = -10.0;
		VpImgproc.adjust(image, image_adjust, alpha, beta);
		
		VpDisplay display = new VpDisplay();
		display.display(image);
		display.flush();
		display.getClick();

		VpDisplay display2 = new VpDisplay();
		display2.display(image_adjust);
		display2.flush();
		display2.getClick();
	}
}
