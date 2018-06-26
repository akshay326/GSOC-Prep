import org.visp.core.VpImageUChar;
import org.visp.gui.VpDisplay;
import org.visp.io.VpImageIo;

public class Main {

	static {
		System.loadLibrary("visp_java320");
	}

	// Helper function for printing
	public static void print(Object... objs) {
		for (Object o : objs)
			System.out.print(o + " ");
		System.out.println(' ');
	}

	public static void main(String[] args) {
		VpImageUChar imageUChar = new VpImageUChar();
		VpImageIo.read(imageUChar, "/home/akshay/Projects/Visp-WS/mosaic.png");

		VpDisplay vpDisplay = new VpDisplay();
		vpDisplay.display(imageUChar);
		vpDisplay.getClick();
	}
}