#include <string>
#include <visp3/gui/vpDisplayOpenCV.h>
#include "VpDisplayOpenCV.h"

using namespace std;

//
//   vpDisplayOpenCV(int winx, int winy, string title = "")
//



JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_10 (JNIEnv*, jclass, jint, jint, jstring);

JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_10
  (JNIEnv* env, jclass , jint winx, jint winy, jstring title)
{

        const char* utf_title = env->GetStringUTFChars(title, 0); string n_title( utf_title ? utf_title : "" ); env->ReleaseStringUTFChars(title, utf_title);
        vpDisplayOpenCV* _retval_ = new vpDisplayOpenCV( (int)winx, (int)winy, n_title );
        return (jlong) _retval_;
}





JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_11 (JNIEnv*, jclass, jint, jint);

JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_11
  (JNIEnv* env, jclass , jint winx, jint winy)
{

        
        vpDisplayOpenCV* _retval_ = new vpDisplayOpenCV( (int)winx, (int)winy );
        return (jlong) _retval_;
}



//
//   vpDisplayOpenCV(vpImage_char I, int winx = -1, int winy = -1, string title = "", vpScaleType type = vpDisplay::SCALE_DEFAULT)
//



JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_12 (JNIEnv*, jclass, jlong, jint, jint, jstring);

JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_12
  (JNIEnv* env, jclass , jlong I_nativeObj, jint winx, jint winy, jstring title)
{

        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_title = env->GetStringUTFChars(title, 0); string n_title( utf_title ? utf_title : "" ); env->ReleaseStringUTFChars(title, utf_title);
        vpDisplayOpenCV* _retval_ = new vpDisplayOpenCV( I, (int)winx, (int)winy, n_title, vpDisplay::SCALE_DEFAULT );
        return (jlong) _retval_;
}





JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_13 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_13
  (JNIEnv* env, jclass , jlong I_nativeObj)
{

        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        vpDisplayOpenCV* _retval_ = new vpDisplayOpenCV( I );
        return (jlong) _retval_;
}



//
//   vpDisplayOpenCV(vpImage_vpRGBa I, int winx = -1, int winy = -1, string title = "", vpScaleType type = vpDisplay::SCALE_DEFAULT)
//



JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_14 (JNIEnv*, jclass, jlong, jint, jint, jstring);

JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_14
  (JNIEnv* env, jclass , jlong I_nativeObj, jint winx, jint winy, jstring title)
{

        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_title = env->GetStringUTFChars(title, 0); string n_title( utf_title ? utf_title : "" ); env->ReleaseStringUTFChars(title, utf_title);
        vpDisplayOpenCV* _retval_ = new vpDisplayOpenCV( I, (int)winx, (int)winy, n_title, vpDisplay::SCALE_DEFAULT );
        return (jlong) _retval_;
}





JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_15 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_15
  (JNIEnv* env, jclass , jlong I_nativeObj)
{

        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        vpDisplayOpenCV* _retval_ = new vpDisplayOpenCV( I );
        return (jlong) _retval_;
}



//
//   vpDisplayOpenCV()
//



JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_16 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_visp_gui_VpDisplayOpenCV_VpDisplayOpenCV_16
  (JNIEnv* env, jclass )
{

        
        vpDisplayOpenCV* _retval_ = new vpDisplayOpenCV(  );
        return (jlong) _retval_;
}



//
//  int getScreenHeight()
//



JNIEXPORT jint JNICALL Java_org_visp_gui_VpDisplayOpenCV_getScreenHeight_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_visp_gui_VpDisplayOpenCV_getScreenHeight_10
  (JNIEnv* env, jclass , jlong self)
{

        vpDisplayOpenCV* me = (vpDisplayOpenCV*) self; //TODO: check for NULL
        int _retval_ = me->getScreenHeight(  );
        return _retval_;
}



//
//  int getScreenWidth()
//



JNIEXPORT jint JNICALL Java_org_visp_gui_VpDisplayOpenCV_getScreenWidth_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_visp_gui_VpDisplayOpenCV_getScreenWidth_10
  (JNIEnv* env, jclass , jlong self)
{

        vpDisplayOpenCV* me = (vpDisplayOpenCV*) self; //TODO: check for NULL
        int _retval_ = me->getScreenWidth(  );
        return _retval_;
}



//
//  void getImage(vpImage_vpRGBa I)
//



JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_getImage_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_getImage_10
  (JNIEnv* env, jclass , jlong self, jlong I_nativeObj)
{

        vpDisplayOpenCV* me = (vpDisplayOpenCV*) self; //TODO: check for NULL
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        me->getImage( I );
        return;
}



//
//  void init(int width, int height, int winx = -1, int winy = -1, string title = "")
//



JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_10 (JNIEnv*, jclass, jlong, jint, jint, jint, jint, jstring);

JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_10
  (JNIEnv* env, jclass , jlong self, jint width, jint height, jint winx, jint winy, jstring title)
{

        vpDisplayOpenCV* me = (vpDisplayOpenCV*) self; //TODO: check for NULL
        const char* utf_title = env->GetStringUTFChars(title, 0); string n_title( utf_title ? utf_title : "" ); env->ReleaseStringUTFChars(title, utf_title);
        me->init( (int)width, (int)height, (int)winx, (int)winy, n_title );
        return;
}





JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_11 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_11
  (JNIEnv* env, jclass , jlong self, jint width, jint height)
{

        vpDisplayOpenCV* me = (vpDisplayOpenCV*) self; //TODO: check for NULL
        me->init( (int)width, (int)height );
        return;
}



//
//  void init(vpImage_char I, int winx = -1, int winy = -1, string title = "")
//



JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_12 (JNIEnv*, jclass, jlong, jlong, jint, jint, jstring);

JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_12
  (JNIEnv* env, jclass , jlong self, jlong I_nativeObj, jint winx, jint winy, jstring title)
{

        vpDisplayOpenCV* me = (vpDisplayOpenCV*) self; //TODO: check for NULL
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        const char* utf_title = env->GetStringUTFChars(title, 0); string n_title( utf_title ? utf_title : "" ); env->ReleaseStringUTFChars(title, utf_title);
        me->init( I, (int)winx, (int)winy, n_title );
        return;
}





JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_13 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_13
  (JNIEnv* env, jclass , jlong self, jlong I_nativeObj)
{

        vpDisplayOpenCV* me = (vpDisplayOpenCV*) self; //TODO: check for NULL
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        me->init( I );
        return;
}



//
//  void init(vpImage_vpRGBa I, int winx = -1, int winy = -1, string title = "")
//



JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_14 (JNIEnv*, jclass, jlong, jlong, jint, jint, jstring);

JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_14
  (JNIEnv* env, jclass , jlong self, jlong I_nativeObj, jint winx, jint winy, jstring title)
{

        vpDisplayOpenCV* me = (vpDisplayOpenCV*) self; //TODO: check for NULL
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        const char* utf_title = env->GetStringUTFChars(title, 0); string n_title( utf_title ? utf_title : "" ); env->ReleaseStringUTFChars(title, utf_title);
        me->init( I, (int)winx, (int)winy, n_title );
        return;
}





JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_15 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_gui_VpDisplayOpenCV_init_15
  (JNIEnv* env, jclass , jlong self, jlong I_nativeObj)
{

        vpDisplayOpenCV* me = (vpDisplayOpenCV*) self; //TODO: check for NULL
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        me->init( I );
        return;
}
