import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import javax.swing.*;

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
		JFrame f = new JFrame();

		f.addKeyListener(new KeyListener() {

			@Override
			public void keyTyped(KeyEvent arg0) {
				if (arg0.getKeyChar() == 'q' || arg0.getKeyChar() == 27) // escape or q
					System.exit(0);
			}
			@Override
			public void keyReleased(KeyEvent arg0) {}
			@Override
			public void keyPressed(KeyEvent arg0) {}
		});
		
		ImageIcon image = new ImageIcon("/home/akshay/Projects/Visp-WS/mosaic.png");
		JLabel imageLabel = new JLabel(image); 
		f.add(imageLabel);
		f.pack(); // pack screen size to fit content
		f.setVisible(true);
		f.setFocusable(true);
	}
}