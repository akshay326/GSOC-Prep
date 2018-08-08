//
// This file is auto-generated. Please don't modify it!
//

#undef LOG_TAG
#ifdef HAVE_VISP_GUI

#include <string>
#include<visp3/gui/vpDisplayOpenCV.h>
#define LOG_TAG "org.visp.gui"
#include "Gui.h"

using namespace vp;

/// throw java exception
#undef throwJavaException
#define throwJavaException throwJavaException_gui
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
//   vpDisplayOpenCV(int winx, int winy, string title = "")
//



JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_10 (JNIEnv*, jclass, jint, jint, jstring);

JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_10
  (JNIEnv* env, jclass , jint winx, jint winy, jstring title)
{
    static const char method_name[] = "gui::VpDisplayOpenCV_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_title = env->GetStringUTFChars(title, 0); String n_title( utf_title ? utf_title : "" ); env->ReleaseStringUTFChars(title, utf_title);
        VpDisplayOpenCV* _retval_ = new VpDisplayOpenCV( (int)winx, (int)winy, n_title );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_11 (JNIEnv*, jclass, jint, jint);

JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_11
  (JNIEnv* env, jclass , jint winx, jint winy)
{
    static const char method_name[] = "gui::VpDisplayOpenCV_11()";
    try {
        LOGD("%s", method_name);
        
        VpDisplayOpenCV* _retval_ = new VpDisplayOpenCV( (int)winx, (int)winy );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   vpDisplayOpenCV(vpImage_char I, int winx = -1, int winy = -1, string title = "", vpScaleType type = SCALE_DEFAULT)
//



JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_12 (JNIEnv*, jclass, jlong, jint, jint, jstring);

JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_12
  (JNIEnv* env, jclass , jlong I_nativeObj, jint winx, jint winy, jstring title)
{
    static const char method_name[] = "gui::VpDisplayOpenCV_12()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_title = env->GetStringUTFChars(title, 0); String n_title( utf_title ? utf_title : "" ); env->ReleaseStringUTFChars(title, utf_title);
        VpDisplayOpenCV* _retval_ = new VpDisplayOpenCV( I, (int)winx, (int)winy, n_title, SCALE_DEFAULT );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_13 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_13
  (JNIEnv* env, jclass , jlong I_nativeObj)
{
    static const char method_name[] = "gui::VpDisplayOpenCV_13()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        VpDisplayOpenCV* _retval_ = new VpDisplayOpenCV( I );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   vpDisplayOpenCV(vpImage_vpRGBa I, int winx = -1, int winy = -1, string title = "", vpScaleType type = SCALE_DEFAULT)
//



JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_14 (JNIEnv*, jclass, jlong, jint, jint, jstring);

JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_14
  (JNIEnv* env, jclass , jlong I_nativeObj, jint winx, jint winy, jstring title)
{
    static const char method_name[] = "gui::VpDisplayOpenCV_14()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_title = env->GetStringUTFChars(title, 0); String n_title( utf_title ? utf_title : "" ); env->ReleaseStringUTFChars(title, utf_title);
        VpDisplayOpenCV* _retval_ = new VpDisplayOpenCV( I, (int)winx, (int)winy, n_title, SCALE_DEFAULT );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_15 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_15
  (JNIEnv* env, jclass , jlong I_nativeObj)
{
    static const char method_name[] = "gui::VpDisplayOpenCV_15()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        VpDisplayOpenCV* _retval_ = new VpDisplayOpenCV( I );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   vpDisplayOpenCV()
//



JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_16 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_16
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "gui::VpDisplayOpenCV_16()";
    try {
        LOGD("%s", method_name);
        
        VpDisplayOpenCV* _retval_ = new VpDisplayOpenCV(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getScreenHeight()
//



JNIEXPORT jint JNICALL Java_org_visp_gui_VpDisplayOpenCV_getScreenHeight_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_visp_gui_VpDisplayOpenCV_getScreenHeight_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "gui::getScreenHeight_10()";
    try {
        LOGD("%s", method_name);
        VpDisplayOpenCV* me = (VpDisplayOpenCV*) self; //TODO: check for NULL
        int _retval_ = me->getScreenHeight(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getScreenWidth()
//



JNIEXPORT jint JNICALL Java_org_visp_gui_VpDisplayOpenCV_getScreenWidth_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_visp_gui_VpDisplayOpenCV_getScreenWidth_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "gui::getScreenWidth_10()";
    try {
        LOGD("%s", method_name);
        VpDisplayOpenCV* me = (VpDisplayOpenCV*) self; //TODO: check for NULL
        int _retval_ = me->getScreenWidth(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void getImage(vpImage_vpRGBa I)
//



JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_getImage_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_getImage_10
  (JNIEnv* env, jclass , jlong self, jlong I_nativeObj)
{
    static const char method_name[] = "gui::getImage_10()";
    try {
        LOGD("%s", method_name);
        VpDisplayOpenCV* me = (VpDisplayOpenCV*) self; //TODO: check for NULL
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        me->getImage( I );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void getScreenSize(int width, int height)
//



JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_getScreenSize_10 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_getScreenSize_10
  (JNIEnv* env, jclass , jlong self, jint width, jint height)
{
    static const char method_name[] = "gui::getScreenSize_10()";
    try {
        LOGD("%s", method_name);
        VpDisplayOpenCV* me = (VpDisplayOpenCV*) self; //TODO: check for NULL
        me->getScreenSize( (int)width, (int)height );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void init(int width, int height, int winx = -1, int winy = -1, string title = "")
//



JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_10 (JNIEnv*, jclass, jlong, jint, jint, jint, jint, jstring);

JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_10
  (JNIEnv* env, jclass , jlong self, jint width, jint height, jint winx, jint winy, jstring title)
{
    static const char method_name[] = "gui::init_10()";
    try {
        LOGD("%s", method_name);
        VpDisplayOpenCV* me = (VpDisplayOpenCV*) self; //TODO: check for NULL
        const char* utf_title = env->GetStringUTFChars(title, 0); String n_title( utf_title ? utf_title : "" ); env->ReleaseStringUTFChars(title, utf_title);
        me->init( (int)width, (int)height, (int)winx, (int)winy, n_title );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_11 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_11
  (JNIEnv* env, jclass , jlong self, jint width, jint height)
{
    static const char method_name[] = "gui::init_11()";
    try {
        LOGD("%s", method_name);
        VpDisplayOpenCV* me = (VpDisplayOpenCV*) self; //TODO: check for NULL
        me->init( (int)width, (int)height );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void init(vpImage_char I, int winx = -1, int winy = -1, string title = "")
//



JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_12 (JNIEnv*, jclass, jlong, jlong, jint, jint, jstring);

JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_12
  (JNIEnv* env, jclass , jlong self, jlong I_nativeObj, jint winx, jint winy, jstring title)
{
    static const char method_name[] = "gui::init_12()";
    try {
        LOGD("%s", method_name);
        VpDisplayOpenCV* me = (VpDisplayOpenCV*) self; //TODO: check for NULL
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_title = env->GetStringUTFChars(title, 0); String n_title( utf_title ? utf_title : "" ); env->ReleaseStringUTFChars(title, utf_title);
        me->init( I, (int)winx, (int)winy, n_title );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_13 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_13
  (JNIEnv* env, jclass , jlong self, jlong I_nativeObj)
{
    static const char method_name[] = "gui::init_13()";
    try {
        LOGD("%s", method_name);
        VpDisplayOpenCV* me = (VpDisplayOpenCV*) self; //TODO: check for NULL
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        me->init( I );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void init(vpImage_vpRGBa I, int winx = -1, int winy = -1, string title = "")
//



JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_14 (JNIEnv*, jclass, jlong, jlong, jint, jint, jstring);

JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_14
  (JNIEnv* env, jclass , jlong self, jlong I_nativeObj, jint winx, jint winy, jstring title)
{
    static const char method_name[] = "gui::init_14()";
    try {
        LOGD("%s", method_name);
        VpDisplayOpenCV* me = (VpDisplayOpenCV*) self; //TODO: check for NULL
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_title = env->GetStringUTFChars(title, 0); String n_title( utf_title ? utf_title : "" ); env->ReleaseStringUTFChars(title, utf_title);
        me->init( I, (int)winx, (int)winy, n_title );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_15 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_15
  (JNIEnv* env, jclass , jlong self, jlong I_nativeObj)
{
    static const char method_name[] = "gui::init_15()";
    try {
        LOGD("%s", method_name);
        VpDisplayOpenCV* me = (VpDisplayOpenCV*) self; //TODO: check for NULL
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        me->init( I );
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
//  static void ::VpDisplayOpenCV::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (::VpDisplayOpenCV*) self;
}



} // extern "C"

#endif // HAVE_VISP_GUI
