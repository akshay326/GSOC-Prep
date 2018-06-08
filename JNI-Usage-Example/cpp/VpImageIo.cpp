#include <string>
#include <visp3/io/vpImageIo.h>
#include "VpImageIo.h"

//
// static void read(vpImage_char I, string filename)
//

using namespace std;

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_read_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_read_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::read( I, n_filename );
        return;
}



//
// static void read(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_read_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_read_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::read( I, n_filename );
        return;
}



//
// static void readJPEG(vpImage_char I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readJPEG_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readJPEG_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::readJPEG( I, n_filename );
        return;
}



//
// static void readJPEG(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readJPEG_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readJPEG_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::readJPEG( I, n_filename );
        return;
}



//
// static void readPGM(vpImage_char I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPGM_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPGM_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::readPGM( I, n_filename );
        return;
}



//
// static void readPGM(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPGM_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPGM_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::readPGM( I, n_filename );
        return;
}



//
// static void readPNG(vpImage_char I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPNG_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPNG_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::readPNG( I, n_filename );
        return;
}



//
// static void readPNG(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPNG_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPNG_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::readPNG( I, n_filename );
        return;
}



//
// static void readPPM(vpImage_char I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPPM_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPPM_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::readPPM( I, n_filename );
        return;
}



//
// static void readPPM(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPPM_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPPM_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::readPPM( I, n_filename );
        return;
}



//
// static void write(vpImage_char I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_write_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_write_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::write( I, n_filename );
        return;
}



//
// static void write(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_write_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_write_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::write( I, n_filename );
        return;
}



//
// static void writeJPEG(vpImage_char I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writeJPEG_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writeJPEG_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::writeJPEG( I, n_filename );
        return;
}



//
// static void writeJPEG(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writeJPEG_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writeJPEG_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::writeJPEG( I, n_filename );
        return;
}



//
// static void writePGM(vpImage_char I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePGM_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePGM_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::writePGM( I, n_filename );
        return;
}



//
// static void writePGM(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePGM_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePGM_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::writePGM( I, n_filename );
        return;
}



//
// static void writePNG(vpImage_char I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePNG_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePNG_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::writePNG( I, n_filename );
        return;
}



//
// static void writePNG(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePNG_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePNG_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::writePNG( I, n_filename );
        return;
}



//
// static void writePPM(vpImage_char I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePPM_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePPM_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::writePPM( I, n_filename );
        return;
}



//
// static void writePPM(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePPM_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePPM_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{

        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); string n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        vpImageIo::writePPM( I, n_filename );
        return;
}
