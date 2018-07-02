import org.visp.core.VpImageRGBa;
import org.visp.core.VpImageUChar;
import org.visp.gui.VpDisplay;
import org.visp.io.VpImageIo;

public class Main {

	static {
		System.loadLibrary("visp_java320");
	}

	public static void main(String[] args) {
		VpImageRGBa imageRGBa = new VpImageRGBa();
		VpImageIo.read(imageRGBa, "monkey.png");

		VpDisplay vpDisplay = new VpDisplay();
		vpDisplay.display(imageRGBa);
		vpDisplay.displayLine(imageRGBa,0,0,imageRGBa.cols(),imageRGBa.rows());
		vpDisplay.getClick();
		
		VpImageUChar imageUChar = new VpImageUChar();
		VpImageIo.read(imageUChar, "monkey.png");

		VpDisplay vpDisplay2 = new VpDisplay();
		vpDisplay2.display(imageUChar);
		vpDisplay2.getClick();
	}
}