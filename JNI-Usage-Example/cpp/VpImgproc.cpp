//
// This file is auto-generated. Please don't modify it!
//

#undef LOG_TAG
#ifdef HAVE_VISP_IMGPROC

#include <string>
#include<visp3/imgproc/vpImgproc.h>

#define LOG_TAG "org.visp.imgproc"
#include "VpImgproc.h"

using namespace cv;

/// throw java exception
#undef throwJavaException
#define throwJavaException throwJavaException_imgproc
static void throwJavaException(JNIEnv *env, const std::exception *e, const char *method) {
  std::string what = "unknown exception";
  jclass je = 0;

  if(e) {
    std::string exception_type = "std::exception";

    if(dynamic_cast<const cv::Exception*>(e)) {
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
//  void adjust(vpImage_char I1, vpImage_char I2, double alpha, double beta)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_adjust_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_adjust_10
  (JNIEnv* env, jclass , jlong I1_nativeObj, jlong I2_nativeObj, jdouble alpha, jdouble beta)
{
    static const char method_name[] = "imgproc::adjust_10()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I1 = *((vpImage<uchar>*)I1_nativeObj);
        vpImage<uchar>& I2 = *((vpImage<uchar>*)I2_nativeObj);
        vp::adjust( I1, I2, (double)alpha, (double)beta );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void adjust(vpImage_char I, double alpha, double beta)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_adjust_11 (JNIEnv*, jclass, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_adjust_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jdouble alpha, jdouble beta)
{
    static const char method_name[] = "imgproc::adjust_11()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        vp::adjust( I, (double)alpha, (double)beta );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void adjust(vpImage_vpRGBa I1, vpImage_vpRGBa I2, double alpha, double beta)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_adjust_12 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_adjust_12
  (JNIEnv* env, jclass , jlong I1_nativeObj, jlong I2_nativeObj, jdouble alpha, jdouble beta)
{
    static const char method_name[] = "imgproc::adjust_12()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I1 = *((vpImage<vpRGBa>*)I1_nativeObj);
        vpImage<vpRGBa>& I2 = *((vpImage<vpRGBa>*)I2_nativeObj);
        vp::adjust( I1, I2, (double)alpha, (double)beta );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void adjust(vpImage_vpRGBa I, double alpha, double beta)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_adjust_13 (JNIEnv*, jclass, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_adjust_13
  (JNIEnv* env, jclass , jlong I_nativeObj, jdouble alpha, jdouble beta)
{
    static const char method_name[] = "imgproc::adjust_13()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        vp::adjust( I, (double)alpha, (double)beta );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void clahe(vpImage_char I1, vpImage_char I2, int blockRadius = 150, int bins = 256, float slope = 3.0f, bool fast = true)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_clahe_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jfloat, jboolean);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_clahe_10
  (JNIEnv* env, jclass , jlong I1_nativeObj, jlong I2_nativeObj, jint blockRadius, jint bins, jfloat slope, jboolean fast)
{
    static const char method_name[] = "imgproc::clahe_10()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I1 = *((vpImage<uchar>*)I1_nativeObj);
        vpImage<uchar>& I2 = *((vpImage<uchar>*)I2_nativeObj);
        vp::clahe( I1, I2, (int)blockRadius, (int)bins, (float)slope, (bool)fast );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_clahe_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_clahe_11
  (JNIEnv* env, jclass , jlong I1_nativeObj, jlong I2_nativeObj)
{
    static const char method_name[] = "imgproc::clahe_11()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I1 = *((vpImage<uchar>*)I1_nativeObj);
        vpImage<uchar>& I2 = *((vpImage<uchar>*)I2_nativeObj);
        vp::clahe( I1, I2 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void clahe(vpImage_vpRGBa I1, vpImage_vpRGBa I2, int blockRadius = 150, int bins = 256, float slope = 3.0f, bool fast = true)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_clahe_12 (JNIEnv*, jclass, jlong, jlong, jint, jint, jfloat, jboolean);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_clahe_12
  (JNIEnv* env, jclass , jlong I1_nativeObj, jlong I2_nativeObj, jint blockRadius, jint bins, jfloat slope, jboolean fast)
{
    static const char method_name[] = "imgproc::clahe_12()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I1 = *((vpImage<vpRGBa>*)I1_nativeObj);
        vpImage<vpRGBa>& I2 = *((vpImage<vpRGBa>*)I2_nativeObj);
        vp::clahe( I1, I2, (int)blockRadius, (int)bins, (float)slope, (bool)fast );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_clahe_13 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_clahe_13
  (JNIEnv* env, jclass , jlong I1_nativeObj, jlong I2_nativeObj)
{
    static const char method_name[] = "imgproc::clahe_13()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I1 = *((vpImage<vpRGBa>*)I1_nativeObj);
        vpImage<vpRGBa>& I2 = *((vpImage<vpRGBa>*)I2_nativeObj);
        vp::clahe( I1, I2 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void equalizeHistogram(vpImage_char I1, vpImage_char I2)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_equalizeHistogram_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_equalizeHistogram_10
  (JNIEnv* env, jclass , jlong I1_nativeObj, jlong I2_nativeObj)
{
    static const char method_name[] = "imgproc::equalizeHistogram_10()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I1 = *((vpImage<uchar>*)I1_nativeObj);
        vpImage<uchar>& I2 = *((vpImage<uchar>*)I2_nativeObj);
        vp::equalizeHistogram( I1, I2 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void equalizeHistogram(vpImage_char I)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_equalizeHistogram_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_equalizeHistogram_11
  (JNIEnv* env, jclass , jlong I_nativeObj)
{
    static const char method_name[] = "imgproc::equalizeHistogram_11()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        vp::equalizeHistogram( I );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void equalizeHistogram(vpImage_vpRGBa I1, vpImage_vpRGBa I2, bool useHSV = false)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_equalizeHistogram_12 (JNIEnv*, jclass, jlong, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_equalizeHistogram_12
  (JNIEnv* env, jclass , jlong I1_nativeObj, jlong I2_nativeObj, jboolean useHSV)
{
    static const char method_name[] = "imgproc::equalizeHistogram_12()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I1 = *((vpImage<vpRGBa>*)I1_nativeObj);
        vpImage<vpRGBa>& I2 = *((vpImage<vpRGBa>*)I2_nativeObj);
        vp::equalizeHistogram( I1, I2, (bool)useHSV );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_equalizeHistogram_13 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_equalizeHistogram_13
  (JNIEnv* env, jclass , jlong I1_nativeObj, jlong I2_nativeObj)
{
    static const char method_name[] = "imgproc::equalizeHistogram_13()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I1 = *((vpImage<vpRGBa>*)I1_nativeObj);
        vpImage<vpRGBa>& I2 = *((vpImage<vpRGBa>*)I2_nativeObj);
        vp::equalizeHistogram( I1, I2 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void equalizeHistogram(vpImage_vpRGBa I, bool useHSV = false)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_equalizeHistogram_14 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_equalizeHistogram_14
  (JNIEnv* env, jclass , jlong I_nativeObj, jboolean useHSV)
{
    static const char method_name[] = "imgproc::equalizeHistogram_14()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        vp::equalizeHistogram( I, (bool)useHSV );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_equalizeHistogram_15 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_equalizeHistogram_15
  (JNIEnv* env, jclass , jlong I_nativeObj)
{
    static const char method_name[] = "imgproc::equalizeHistogram_15()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        vp::equalizeHistogram( I );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void fillHoles(vpImage_char I, vpImageMorphology_vpConnexityType connexity = vpImageMorphology::CONNEXITY_4)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_fillHoles_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_fillHoles_10
  (JNIEnv* env, jclass , jlong I_nativeObj)
{
    static const char method_name[] = "imgproc::fillHoles_10()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        vp::fillHoles( I, vpImageMorphology::CONNEXITY_4 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_fillHoles_12 (JNIEnv*, jclass);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_fillHoles_12
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "imgproc::fillHoles_12()";
    try {
        LOGD("%s", method_name);
        
        vp::fillHoles(  );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void gammaCorrection(vpImage_char I1, vpImage_char I2, double gamma)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_gammaCorrection_10 (JNIEnv*, jclass, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_gammaCorrection_10
  (JNIEnv* env, jclass , jlong I1_nativeObj, jlong I2_nativeObj, jdouble gamma)
{
    static const char method_name[] = "imgproc::gammaCorrection_10()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I1 = *((vpImage<uchar>*)I1_nativeObj);
        vpImage<uchar>& I2 = *((vpImage<uchar>*)I2_nativeObj);
        vp::gammaCorrection( I1, I2, (double)gamma );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void gammaCorrection(vpImage_char I, double gamma)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_gammaCorrection_11 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_gammaCorrection_11
  (JNIEnv* env, jclass , jlong I_nativeObj, jdouble gamma)
{
    static const char method_name[] = "imgproc::gammaCorrection_11()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        vp::gammaCorrection( I, (double)gamma );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void gammaCorrection(vpImage_vpRGBa I1, vpImage_vpRGBa I2, double gamma)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_gammaCorrection_12 (JNIEnv*, jclass, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_gammaCorrection_12
  (JNIEnv* env, jclass , jlong I1_nativeObj, jlong I2_nativeObj, jdouble gamma)
{
    static const char method_name[] = "imgproc::gammaCorrection_12()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I1 = *((vpImage<vpRGBa>*)I1_nativeObj);
        vpImage<vpRGBa>& I2 = *((vpImage<vpRGBa>*)I2_nativeObj);
        vp::gammaCorrection( I1, I2, (double)gamma );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void gammaCorrection(vpImage_vpRGBa I, double gamma)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_gammaCorrection_13 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_gammaCorrection_13
  (JNIEnv* env, jclass , jlong I_nativeObj, jdouble gamma)
{
    static const char method_name[] = "imgproc::gammaCorrection_13()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        vp::gammaCorrection( I, (double)gamma );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void reconstruct(vpImage_char marker, vpImage_char mask, vpImage_char I, vpImageMorphology_vpConnexityType connexity = vpImageMorphology::CONNEXITY_4)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_reconstruct_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_reconstruct_10
  (JNIEnv* env, jclass , jlong marker_nativeObj, jlong mask_nativeObj, jlong I_nativeObj)
{
    static const char method_name[] = "imgproc::reconstruct_10()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& marker = *((vpImage<uchar>*)marker_nativeObj);
        vpImage<uchar>& mask = *((vpImage<uchar>*)mask_nativeObj);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        vp::reconstruct( marker, mask, I, vpImageMorphology::CONNEXITY_4 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_reconstruct_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_reconstruct_12
  (JNIEnv* env, jclass , jlong marker_nativeObj, jlong mask_nativeObj)
{
    static const char method_name[] = "imgproc::reconstruct_12()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& marker = *((vpImage<uchar>*)marker_nativeObj);
        vpImage<uchar>& mask = *((vpImage<uchar>*)mask_nativeObj);
        vp::reconstruct( marker, mask );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void retinex(vpImage_vpRGBa I1, vpImage_vpRGBa I2, int scale = 240, int scaleDiv = 3, int level = RETINEX_UNIFORM, double dynamic = 1.2, int kernelSize = -1)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_retinex_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint, jdouble, jint);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_retinex_10
  (JNIEnv* env, jclass , jlong I1_nativeObj, jlong I2_nativeObj, jint scale, jint scaleDiv, jint level, jdouble dynamic, jint kernelSize)
{
    static const char method_name[] = "imgproc::retinex_10()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I1 = *((vpImage<vpRGBa>*)I1_nativeObj);
        vpImage<vpRGBa>& I2 = *((vpImage<vpRGBa>*)I2_nativeObj);
        vp::retinex( I1, I2, (int)scale, (int)scaleDiv, (int)level, (double)dynamic, (int)kernelSize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_retinex_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_retinex_11
  (JNIEnv* env, jclass , jlong I1_nativeObj, jlong I2_nativeObj)
{
    static const char method_name[] = "imgproc::retinex_11()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I1 = *((vpImage<vpRGBa>*)I1_nativeObj);
        vpImage<vpRGBa>& I2 = *((vpImage<vpRGBa>*)I2_nativeObj);
        vp::retinex( I1, I2 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void retinex(vpImage_vpRGBa I, int scale = 240, int scaleDiv = 3, int level = RETINEX_UNIFORM, double dynamic = 1.2, int kernelSize = -1)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_retinex_12 (JNIEnv*, jclass, jlong, jint, jint, jint, jdouble, jint);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_retinex_12
  (JNIEnv* env, jclass , jlong I_nativeObj, jint scale, jint scaleDiv, jint level, jdouble dynamic, jint kernelSize)
{
    static const char method_name[] = "imgproc::retinex_12()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        vp::retinex( I, (int)scale, (int)scaleDiv, (int)level, (double)dynamic, (int)kernelSize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_retinex_13 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_retinex_13
  (JNIEnv* env, jclass , jlong I_nativeObj)
{
    static const char method_name[] = "imgproc::retinex_13()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        vp::retinex( I );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void stretchContrast(vpImage_char I1, vpImage_char I2)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_stretchContrast_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_stretchContrast_10
  (JNIEnv* env, jclass , jlong I1_nativeObj, jlong I2_nativeObj)
{
    static const char method_name[] = "imgproc::stretchContrast_10()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I1 = *((vpImage<uchar>*)I1_nativeObj);
        vpImage<uchar>& I2 = *((vpImage<uchar>*)I2_nativeObj);
        vp::stretchContrast( I1, I2 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void stretchContrast(vpImage_char I)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_stretchContrast_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_stretchContrast_11
  (JNIEnv* env, jclass , jlong I_nativeObj)
{
    static const char method_name[] = "imgproc::stretchContrast_11()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        vp::stretchContrast( I );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void stretchContrast(vpImage_vpRGBa I1, vpImage_vpRGBa I2)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_stretchContrast_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_stretchContrast_12
  (JNIEnv* env, jclass , jlong I1_nativeObj, jlong I2_nativeObj)
{
    static const char method_name[] = "imgproc::stretchContrast_12()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I1 = *((vpImage<vpRGBa>*)I1_nativeObj);
        vpImage<vpRGBa>& I2 = *((vpImage<vpRGBa>*)I2_nativeObj);
        vp::stretchContrast( I1, I2 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void stretchContrast(vpImage_vpRGBa I)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_stretchContrast_13 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_stretchContrast_13
  (JNIEnv* env, jclass , jlong I_nativeObj)
{
    static const char method_name[] = "imgproc::stretchContrast_13()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        vp::stretchContrast( I );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void stretchContrastHSV(vpImage_vpRGBa I1, vpImage_vpRGBa I2)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_stretchContrastHSV_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_stretchContrastHSV_10
  (JNIEnv* env, jclass , jlong I1_nativeObj, jlong I2_nativeObj)
{
    static const char method_name[] = "imgproc::stretchContrastHSV_10()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I1 = *((vpImage<vpRGBa>*)I1_nativeObj);
        vpImage<vpRGBa>& I2 = *((vpImage<vpRGBa>*)I2_nativeObj);
        vp::stretchContrastHSV( I1, I2 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void stretchContrastHSV(vpImage_vpRGBa I)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_stretchContrastHSV_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_stretchContrastHSV_11
  (JNIEnv* env, jclass , jlong I_nativeObj)
{
    static const char method_name[] = "imgproc::stretchContrastHSV_11()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        vp::stretchContrastHSV( I );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void unsharpMask(vpImage_char I, int size = 7, double weight = 0.6)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_unsharpMask_10 (JNIEnv*, jclass, jlong, jint, jdouble);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_unsharpMask_10
  (JNIEnv* env, jclass , jlong I_nativeObj, jint size, jdouble weight)
{
    static const char method_name[] = "imgproc::unsharpMask_10()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        vp::unsharpMask( I, (int)size, (double)weight );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_unsharpMask_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_unsharpMask_11
  (JNIEnv* env, jclass , jlong I_nativeObj)
{
    static const char method_name[] = "imgproc::unsharpMask_11()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        vp::unsharpMask( I );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void unsharpMask(vpImage_char I, vpImage_char Ires, int size = 7, double weight = 0.6)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_unsharpMask_12 (JNIEnv*, jclass, jlong, jlong, jint, jdouble);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_unsharpMask_12
  (JNIEnv* env, jclass , jlong I_nativeObj, jlong Ires_nativeObj, jint size, jdouble weight)
{
    static const char method_name[] = "imgproc::unsharpMask_12()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        vpImage<uchar>& Ires = *((vpImage<uchar>*)Ires_nativeObj);
        vp::unsharpMask( I, Ires, (int)size, (double)weight );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_unsharpMask_13 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_unsharpMask_13
  (JNIEnv* env, jclass , jlong I_nativeObj, jlong Ires_nativeObj)
{
    static const char method_name[] = "imgproc::unsharpMask_13()";
    try {
        LOGD("%s", method_name);
        vpImage<uchar>& I = *((vpImage<uchar>*)I_nativeObj);
        vpImage<uchar>& Ires = *((vpImage<uchar>*)Ires_nativeObj);
        vp::unsharpMask( I, Ires );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void unsharpMask(vpImage_vpRGBa I, int size = 7, double weight = 0.6)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_unsharpMask_14 (JNIEnv*, jclass, jlong, jint, jdouble);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_unsharpMask_14
  (JNIEnv* env, jclass , jlong I_nativeObj, jint size, jdouble weight)
{
    static const char method_name[] = "imgproc::unsharpMask_14()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        vp::unsharpMask( I, (int)size, (double)weight );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_unsharpMask_15 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_unsharpMask_15
  (JNIEnv* env, jclass , jlong I_nativeObj)
{
    static const char method_name[] = "imgproc::unsharpMask_15()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        vp::unsharpMask( I );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void unsharpMask(vpImage_vpRGBa I, vpImage_vpRGBa Ires, int size = 7, double weight = 0.6)
//



JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_unsharpMask_16 (JNIEnv*, jclass, jlong, jlong, jint, jdouble);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_unsharpMask_16
  (JNIEnv* env, jclass , jlong I_nativeObj, jlong Ires_nativeObj, jint size, jdouble weight)
{
    static const char method_name[] = "imgproc::unsharpMask_16()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        vpImage<vpRGBa>& Ires = *((vpImage<vpRGBa>*)Ires_nativeObj);
        vp::unsharpMask( I, Ires, (int)size, (double)weight );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_unsharpMask_17 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_Imgproc_unsharpMask_17
  (JNIEnv* env, jclass , jlong I_nativeObj, jlong Ires_nativeObj)
{
    static const char method_name[] = "imgproc::unsharpMask_17()";
    try {
        LOGD("%s", method_name);
        vpImage<vpRGBa>& I = *((vpImage<vpRGBa>*)I_nativeObj);
        vpImage<vpRGBa>& Ires = *((vpImage<vpRGBa>*)Ires_nativeObj);
        vp::unsharpMask( I, Ires );
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
//  static void ::VpImgproc::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_visp_imgproc_VpImgproc_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_imgproc_VpImgproc_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (::VpImgproc*) self;
}



} // extern "C"

#endif // HAVE_VISP_IMGPROC
