package example.vispdemo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import org.visp.android.ViSPLoader;
import org.visp.core.VpMatrix;

public class MainActivity extends AppCompatActivity {

    public static final String TAG = "MainActivity";

    static {
        System.loadLibrary("visp_java3");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        VpMatrix vpMatrix = new VpMatrix(2,2,14);
        Log.d(TAG,vpMatrix.toString());
    }
}
