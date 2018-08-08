//
// This file is auto-generated. Please don't modify it!
//

#undef LOG_TAG
#ifdef HAVE_VISP_CORE

#include <string>

#include "visp3/core.hpp"

#include <visp3/core/vpCameraParameters.h>

#define LOG_TAG "org.visp.core"
#include "VpCameraParameters.h"

using namespace vp;

/// throw java exception
#undef throwJavaException
#define throwJavaException throwJavaException_core
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
//   vpCameraParameters(double px, double py, double u0, double v0, double kud, double kdu)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpCameraParameters_VpCameraParameters_10 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpCameraParameters_VpCameraParameters_10
  (JNIEnv* env, jclass , jdouble px, jdouble py, jdouble u0, jdouble v0, jdouble kud, jdouble kdu)
{
    static const char method_name[] = "core::VpCameraParameters_10()";
    try {
        LOGD("%s", method_name);
        
        VpCameraParameters* _retval_ = new VpCameraParameters( (double)px, (double)py, (double)u0, (double)v0, (double)kud, (double)kdu );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   vpCameraParameters(double px, double py, double u0, double v0)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpCameraParameters_VpCameraParameters_11 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpCameraParameters_VpCameraParameters_11
  (JNIEnv* env, jclass , jdouble px, jdouble py, jdouble u0, jdouble v0)
{
    static const char method_name[] = "core::VpCameraParameters_11()";
    try {
        LOGD("%s", method_name);
        
        VpCameraParameters* _retval_ = new VpCameraParameters( (double)px, (double)py, (double)u0, (double)v0 );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   vpCameraParameters()
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpCameraParameters_VpCameraParameters_12 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpCameraParameters_VpCameraParameters_12
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "core::VpCameraParameters_12()";
    try {
        LOGD("%s", method_name);
        
        VpCameraParameters* _retval_ = new VpCameraParameters(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool isFovComputed()
//



JNIEXPORT jboolean JNICALL Java_org_visp_core_VpCameraParameters_isFovComputed_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_visp_core_VpCameraParameters_isFovComputed_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "core::isFovComputed_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        bool _retval_ = me->isFovComputed(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getHorizontalFovAngle()
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_getHorizontalFovAngle_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_getHorizontalFovAngle_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "core::getHorizontalFovAngle_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        double _retval_ = me->getHorizontalFovAngle(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getVerticalFovAngle()
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_getVerticalFovAngle_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_getVerticalFovAngle_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "core::getVerticalFovAngle_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        double _retval_ = me->getVerticalFovAngle(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double get_kdu()
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_get_1kdu_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_get_1kdu_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "core::get_1kdu_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        double _retval_ = me->get_kdu(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double get_kud()
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_get_1kud_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_get_1kud_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "core::get_1kud_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        double _retval_ = me->get_kud(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double get_px()
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_get_1px_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_get_1px_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "core::get_1px_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        double _retval_ = me->get_px(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double get_px_inverse()
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_get_1px_1inverse_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_get_1px_1inverse_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "core::get_1px_1inverse_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        double _retval_ = me->get_px_inverse(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double get_py()
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_get_1py_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_get_1py_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "core::get_1py_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        double _retval_ = me->get_py(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double get_py_inverse()
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_get_1py_1inverse_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_get_1py_1inverse_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "core::get_1py_1inverse_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        double _retval_ = me->get_py_inverse(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double get_u0()
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_get_1u0_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_get_1u0_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "core::get_1u0_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        double _retval_ = me->get_u0(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double get_v0()
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_get_1v0_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpCameraParameters_get_1v0_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "core::get_1v0_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        double _retval_ = me->get_v0(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void computeFov(int w, int h)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpCameraParameters_computeFov_10 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_visp_core_VpCameraParameters_computeFov_10
  (JNIEnv* env, jclass , jlong self, jint w, jint h)
{
    static const char method_name[] = "core::computeFov_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        me->computeFov( (int)w, (int)h );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void init()
//



JNIEXPORT void JNICALL Java_org_visp_core_VpCameraParameters_init_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpCameraParameters_init_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "core::init_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        me->init(  );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void initFromCalibrationMatrix(vpMatrix _K)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpCameraParameters_initFromCalibrationMatrix_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpCameraParameters_initFromCalibrationMatrix_10
  (JNIEnv* env, jclass , jlong self, jlong _K_nativeObj)
{
    static const char method_name[] = "core::initFromCalibrationMatrix_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        vpMatrix& _K = *((vpMatrix*)_K_nativeObj);
        me->initFromCalibrationMatrix( _K );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void initFromFov(int w, int h, double hfov, double vfov)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpCameraParameters_initFromFov_10 (JNIEnv*, jclass, jlong, jint, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_visp_core_VpCameraParameters_initFromFov_10
  (JNIEnv* env, jclass , jlong self, jint w, jint h, jdouble hfov, jdouble vfov)
{
    static const char method_name[] = "core::initFromFov_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        me->initFromFov( (int)w, (int)h, (double)hfov, (double)vfov );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void initPersProjWithDistortion(double px, double py, double u0, double v0, double kud, double kdu)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpCameraParameters_initPersProjWithDistortion_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_visp_core_VpCameraParameters_initPersProjWithDistortion_10
  (JNIEnv* env, jclass , jlong self, jdouble px, jdouble py, jdouble u0, jdouble v0, jdouble kud, jdouble kdu)
{
    static const char method_name[] = "core::initPersProjWithDistortion_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        me->initPersProjWithDistortion( (double)px, (double)py, (double)u0, (double)v0, (double)kud, (double)kdu );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void initPersProjWithoutDistortion(double px, double py, double u0, double v0)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpCameraParameters_initPersProjWithoutDistortion_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_visp_core_VpCameraParameters_initPersProjWithoutDistortion_10
  (JNIEnv* env, jclass , jlong self, jdouble px, jdouble py, jdouble u0, jdouble v0)
{
    static const char method_name[] = "core::initPersProjWithoutDistortion_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        me->initPersProjWithoutDistortion( (double)px, (double)py, (double)u0, (double)v0 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void printParameters()
//



JNIEXPORT void JNICALL Java_org_visp_core_VpCameraParameters_printParameters_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpCameraParameters_printParameters_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "core::printParameters_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        me->printParameters(  );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  vpMatrix get_K()
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpCameraParameters_get_1K_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpCameraParameters_get_1K_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "core::get_1K_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        ::VpMatrix _retval_ = me->get_K(  );
        return (jlong) new ::VpMatrix(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vpMatrix get_K_inverse()
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpCameraParameters_get_1K_1inverse_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpCameraParameters_get_1K_1inverse_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "core::get_1K_1inverse_10()";
    try {
        LOGD("%s", method_name);
        VpCameraParameters* me = (VpCameraParameters*) self; //TODO: check for NULL
        ::VpMatrix _retval_ = me->get_K_inverse(  );
        return (jlong) new ::VpMatrix(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void ::VpCameraParameters::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_visp_core_VpCameraParameters_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpCameraParameters_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (::VpCameraParameters*) self;
}



} // extern "C"

#endif // HAVE_VISP_CORE
