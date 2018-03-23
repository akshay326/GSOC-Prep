package example.vispapriltag;

import android.content.DialogInterface;
import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.ColorMatrix;
import android.graphics.ColorMatrixColorFilter;
import android.graphics.Paint;
import android.net.Uri;
import android.provider.MediaStore;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;

import java.io.IOException;

import static example.vispapriltag.Constants.*;

public class MainActivity extends AppCompatActivity {

    public static final String TAG = "VISP";

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("visp_core");
        System.loadLibrary("visp_detection");
        System.loadLibrary("visp_me");
        System.loadLibrary("visp_vision");
        System.loadLibrary("visp_io");
        System.loadLibrary("visp_imgproc");
        System.loadLibrary("native-lib");
    }

    ImageView imageView;

    public static native void processImage(Bitmap bitmap);

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Button button = findViewById(R.id.ButtonSelectImage);
        imageView = findViewById(R.id.ImageProcessed);

        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                takeImage();
            }
        });
    }

    public void takeImage() {
        final CharSequence[] items = {"Choose from Gallery", "Cancel"};
        android.app.AlertDialog.Builder builder = new android.app.AlertDialog.Builder(MainActivity.this);
        builder.setTitle("Add Photo!");
        builder.setCancelable(false);
        builder.setItems(items, new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int item) {

                if (items[item].equals(items[0])) {
                    Intent intent = new Intent(
                            Intent.ACTION_PICK,
                            MediaStore.Images.Media.EXTERNAL_CONTENT_URI);
                    startActivityForResult(intent, PICK_IMAGE_GALLERY);
                } else if (items[item].equals("Cancel")) {
                    dialog.dismiss();
                }
            }
        });
        builder.show();
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);

        switch (requestCode) {
            case PICK_IMAGE_GALLERY:
                if (resultCode == RESULT_OK && data != null && data.getData() != null)
                    saveImageCopy(data.getData());
                break;

        }
    }

    /**
     * Make copy of the image
     * Resize it so that h,w < 1400
     * Set the uri for future use
     *
     * @param uri URI of the selected image
     */
    private void saveImageCopy(Uri uri) {

        try {
            Bitmap bitmap = MediaStore.Images.Media.getBitmap(getContentResolver(), uri);

            int h1 = bitmap.getHeight();
            int w1 = bitmap.getWidth();

            // Shrink by 25% recursively
            while (h1 > MAX_IMG_DIMEN || w1 > MAX_IMG_DIMEN) {
                bitmap = Bitmap.createScaledBitmap(bitmap, w1 * 3 / 4, h1 * 3 / 4, false);
                h1 = bitmap.getHeight();
                w1 = bitmap.getWidth();
            }

            // turn it to grayscale here only
            // don't know why but there's some issue with locking of pixels
            bitmap = toGrayscale(bitmap);

            Log.d(TAG, bitmap.getConfig().toString());

            for(int i=0;i<bitmap.getHeight();++i)
                for(int j=0;j<bitmap.getWidth();++j) {
                    int color = bitmap.getPixel(i, j);
                    Log.d(TAG, color + "," + Color.alpha(color) + "," + Color.red(color)
                            + "," + Color.green(color) + "," + Color.blue(color));
                }

            // do the image processing
            processImage(bitmap);

            // rescale it. Only for 16x16 or smaller debug images
            if (bitmap.getWidth() < 30 || bitmap.getHeight() < 30)
                bitmap = Bitmap.createScaledBitmap(bitmap, bitmap.getWidth() * 10, bitmap.getHeight() * 10, false);

            imageView.setImageBitmap(bitmap);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public Bitmap toGrayscale(Bitmap bmpOriginal){
        int width, height;
        height = bmpOriginal.getHeight();
        width = bmpOriginal.getWidth();

//        Bitmap bmpGrayscale = Bitmap.createBitmap(width, height, Bitmap.Config.ALPHA_8);
//        for(int i=0;i<bmpOriginal.getWidth();++i)
//            for(int j=0;j<bmpOriginal.getHeight();++j) {
//                int color = bmpOriginal.getPixel(i, j);
//                // TODO optimize this
//                bmpGrayscale.setPixel(i,j,(Color.red(color) + Color.green(color) + Color.blue(color))/3);
//            }

        Bitmap bmpGrayscale = Bitmap.createBitmap(width, height, Bitmap.Config.ARGB_8888);
        Canvas c = new Canvas(bmpGrayscale);
        Paint paint = new Paint();
        ColorMatrix cm = new ColorMatrix();
        cm.setSaturation(0);
        ColorMatrixColorFilter f = new ColorMatrixColorFilter(cm);
        paint.setColorFilter(f);
        c.drawBitmap(bmpOriginal, 0, 0, paint);

        return bmpGrayscale;
    }
}
