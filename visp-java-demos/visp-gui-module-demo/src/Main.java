import java.awt.Color;

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
		int padding = 10;
		vpDisplay.displayArrow(padding,padding,imageRGBa.cols()-padding,imageRGBa.rows()-padding, Color.GREEN, 2*padding, 4*padding, 4);
		vpDisplay.displayText("This is a color image", 0, imageRGBa.rows() - padding);
		vpDisplay.flush();
		vpDisplay.getClick();
		
		VpImageUChar imageUChar = new VpImageUChar();
		VpImageIo.read(imageUChar, "monkey.png");

		VpDisplay vpDisplay2 = new VpDisplay();
		vpDisplay2.display(imageUChar);
		vpDisplay2.displayLine(0,0,imageUChar.cols(),imageUChar.rows(), Color.WHITE);
		vpDisplay2.flush();
		vpDisplay2.getClick();
	}
}