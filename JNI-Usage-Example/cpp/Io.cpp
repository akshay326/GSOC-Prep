//
// This file is auto-generated. Please don't modify it!
//

#undef LOG_TAG
#ifdef HAVE_VISP_IO

#include <string>
#include<visp3/io/vpImageIo.h>
#include<visp3/io/vpParseArgv.h>

#define LOG_TAG "org.visp.io"
#include "Io.h"

using namespace vp;

/// throw java exception
#undef throwJavaException
#define throwJavaException throwJavaException_io
static void throwJavaException(JNIEnv *env, const std::exception *e, const char *method) {
  std::string what = "unknown exception";
  jclass je = 0;

  if(e) {
    std::string exception_type = "std::exception";

    if(dynamic_cast<const vp::Exception*>(e)) {
      exception_type = "vp::Exception";
      je = env->FindClass("org/visp/core/VpException");
    }

    what = exception_type + ": " + e->what();
  }

  if(!je) je = env->FindClass("java/lang/Exception");
  env->ThrowNew(je, what.c_str());

  LOGE("%s caught %s", method, what.c_str());
  (void)method;        // avoid "unused" warning
}

extern "C" {


//
// static void read(vpImage_char I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_read_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_read_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::read_10()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::read( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void read(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_read_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_read_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::read_11()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::read( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void readJPEG(vpImage_char I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readJPEG_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readJPEG_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::readJPEG_10()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::readJPEG( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void readJPEG(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readJPEG_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readJPEG_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::readJPEG_11()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::readJPEG( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void readPGM(vpImage_char I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPGM_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPGM_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::readPGM_10()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::readPGM( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void readPGM(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPGM_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPGM_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::readPGM_11()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::readPGM( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void readPNG(vpImage_char I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPNG_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPNG_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::readPNG_10()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::readPNG( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void readPNG(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPNG_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPNG_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::readPNG_11()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::readPNG( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void readPPM(vpImage_char I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPPM_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPPM_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::readPPM_10()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::readPPM( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void readPPM(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPPM_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_readPPM_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::readPPM_11()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::readPPM( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void write(vpImage_char I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_write_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_write_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::write_10()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::write( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void write(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_write_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_write_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::write_11()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::write( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void writeJPEG(vpImage_char I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writeJPEG_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writeJPEG_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::writeJPEG_10()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::writeJPEG( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void writeJPEG(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writeJPEG_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writeJPEG_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::writeJPEG_11()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::writeJPEG( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void writePGM(vpImage_char I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePGM_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePGM_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::writePGM_10()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::writePGM( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void writePGM(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePGM_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePGM_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::writePGM_11()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::writePGM( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void writePNG(vpImage_char I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePNG_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePNG_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::writePNG_10()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::writePNG( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void writePNG(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePNG_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePNG_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::writePNG_11()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::writePNG( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void writePPM(vpImage_char I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePPM_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePPM_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::writePPM_10()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::writePPM( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void writePPM(vpImage_vpRGBa I, string filename)
//



JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePPM_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_writePPM_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jstring filename)
{
    static const char method_name[] = "io::writePPM_11()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        VpImageIo::writePPM( I, n_filename );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  native support for java finalize()
//  static void ::VpImageIo::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_io_VpImageIo_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (::VpImageIo*) self;
}


//
//  native support for java finalize()
//  static void ::VpParseArgv::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_visp_io_VpParseArgv_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_io_VpParseArgv_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (::VpParseArgv*) self;
}



} // extern "C"

#endif // HAVE_VISP_IO
