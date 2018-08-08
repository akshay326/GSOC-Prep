#include <jni.h>
#include <iostream>
#include <cstring>
#include "VpMatrix.h"  // This include is native header file for current source file
#include <visp3/core/vpMatrix.h>


// Java Method:    VpMatrix()
JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_n_1vpMatrix__
  (JNIEnv *, jclass){
	return (jlong) new vpMatrix();  
}


// Java Method:    VpMatrix(int,int)
JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_n_1vpMatrix__II
  (JNIEnv *, jclass, jint rows, jint cols){
	return (jlong) new vpMatrix(rows, cols);
}


// Java Method:    VpMatrix(int,int,double)
JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_n_1vpMatrix__IID
  (JNIEnv *, jclass, jint rows, jint cols, jdouble value){
	return (jlong) new vpMatrix(rows, cols, value);
}


// Java Method:    VpMatrix(VpMatrix,int rows,int cols,int nrows, int ncols)
JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_n_1vpMatrix__JIIII
  (JNIEnv *, jclass, jlong address, jint rows, jint cols, jint nrows, jint ncols){
	vpMatrix* me = (vpMatrix*) address; //TODO: check for NULL
	return (jlong) new vpMatrix(*me,rows,cols,nrows,ncols);
}


// Java Method:    getCols()
JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_n_1cols
  (JNIEnv *, jclass, jlong self){
	vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
	return me->getCols();
}


// Java Method:    getRows()
JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_n_1rows
  (JNIEnv *, jclass, jlong self){
	vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
	return me->getRows();
}

//
// void vpMatrix::transpose(vpMatrix&)
//

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_n_1transpose
  (JNIEnv *, jclass, jlong self, jlong result){
	vpMatrix* me = (vpMatrix*) self;
	vpMatrix* other = (vpMatrix*) result;
	me->transpose(*other);
}

// Java Method:    dump()
JNIEXPORT jstring JNICALL Java_org_visp_core_VpMatrix_n_1dump
  (JNIEnv *env, jclass, jlong address){
		
	vpMatrix* me = (vpMatrix*) address; //TODO: check for NULL
	std::stringstream ss;
	ss << *me;
	return env->NewStringUTF(ss.str().c_str());
}

//
//  double cond()
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_cond_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_cond_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        double _retval_ = me->cond(  );
        return _retval_;
}



//
//  double det(vpDetMethod method = LU_DECOMPOSITION)
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_det_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_det_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        double _retval_ = me->det( vpMatrix::vpDetMethod::LU_DECOMPOSITION );
        return _retval_;
}



//
//  double detByLU()
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_detByLU_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_detByLU_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        double _retval_ = me->detByLU(  );
        return _retval_;
}



//
//  double detByLUEigen3()
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_detByLUEigen3_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_detByLUEigen3_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        double _retval_ = me->detByLUEigen3(  );
        return _retval_;
}



////
////  double detByLUGsl()
////
//
//
//
//JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_detByLUGsl_10 (JNIEnv*, jclass, jlong);
//
//JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_detByLUGsl_10
//  (JNIEnv* env, jclass , jlong self)
//{
//        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
//        double _retval_ = me->detByLUGsl(  );
//        return _retval_;
//}



//
//  double detByLULapack()
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_detByLULapack_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_detByLULapack_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        double _retval_ = me->detByLULapack(  );
        return _retval_;
}



//
//  double detByLUOpenCV()
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_detByLUOpenCV_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_detByLUOpenCV_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        double _retval_ = me->detByLUOpenCV(  );
        return _retval_;
}



//
//  double euclideanNorm()
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_euclideanNorm_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_euclideanNorm_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        double _retval_ = me->euclideanNorm(  );
        return _retval_;
}



//
//  double infinityNorm()
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_infinityNorm_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_infinityNorm_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        double _retval_ = me->infinityNorm(  );
        return _retval_;
}



//
//  double sum()
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_sum_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_sum_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        double _retval_ = me->sum(  );
        return _retval_;
}



//
//  double sumSquare()
//



JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_sumSquare_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_visp_core_VpMatrix_sumSquare_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        double _retval_ = me->sumSquare(  );
        return _retval_;
}



//
//  int kernel(vpMatrix kerAt, double svThreshold = 1e-6)
//



JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_kernel_10 (JNIEnv*, jclass, jlong, jlong, jdouble);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_kernel_10
  (JNIEnv* env, jclass , jlong self, jlong kerAt_nativeObj, jdouble svThreshold)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& kerAt = *((vpMatrix*)kerAt_nativeObj);
        int _retval_ = me->kernel( kerAt, (double)svThreshold );
        return _retval_;
}





JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_kernel_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_kernel_11
  (JNIEnv* env, jclass , jlong self, jlong kerAt_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& kerAt = *((vpMatrix*)kerAt_nativeObj);
        int _retval_ = me->kernel( kerAt );
        return _retval_;
}



//
//  int pseudoInverse(vpMatrix Ap, double svThreshold = 1e-6)
//



JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverse_10 (JNIEnv*, jclass, jlong, jlong, jdouble);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverse_10
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jdouble svThreshold)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        int _retval_ = me->pseudoInverse( Ap, (double)svThreshold );
        return _retval_;
}





JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverse_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverse_11
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        int _retval_ = me->pseudoInverse( Ap );
        return _retval_;
}



//
//  int pseudoInverse(vpMatrix Ap, vpColVector sv, double svThreshold, vpMatrix imA, vpMatrix imAt, vpMatrix kerAt)
//



JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverse_12 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jlong, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverse_12
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jlong sv_nativeObj, jdouble svThreshold, jlong imA_nativeObj, jlong imAt_nativeObj, jlong kerAt_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        vpColVector& sv = *((vpColVector*)sv_nativeObj);
        vpMatrix& imA = *((vpMatrix*)imA_nativeObj);
        vpMatrix& imAt = *((vpMatrix*)imAt_nativeObj);
        vpMatrix& kerAt = *((vpMatrix*)kerAt_nativeObj);
        int _retval_ = me->pseudoInverse( Ap, sv, (double)svThreshold, imA, imAt, kerAt );
        return _retval_;
}



//
//  int pseudoInverse(vpMatrix Ap, vpColVector sv, double svThreshold, vpMatrix imA, vpMatrix imAt)
//



JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverse_13 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverse_13
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jlong sv_nativeObj, jdouble svThreshold, jlong imA_nativeObj, jlong imAt_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        vpColVector& sv = *((vpColVector*)sv_nativeObj);
        vpMatrix& imA = *((vpMatrix*)imA_nativeObj);
        vpMatrix& imAt = *((vpMatrix*)imAt_nativeObj);
        int _retval_ = me->pseudoInverse( Ap, sv, (double)svThreshold, imA, imAt );
        return _retval_;
}



//
//  int pseudoInverse(vpMatrix Ap, vpColVector sv, double svThreshold = 1e-6)
//



JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverse_14 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverse_14
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jlong sv_nativeObj, jdouble svThreshold)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        vpColVector& sv = *((vpColVector*)sv_nativeObj);
        int _retval_ = me->pseudoInverse( Ap, sv, (double)svThreshold );
        return _retval_;
}





JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverse_15 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverse_15
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jlong sv_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        vpColVector& sv = *((vpColVector*)sv_nativeObj);
        int _retval_ = me->pseudoInverse( Ap, sv );
        return _retval_;
}



//
//  int pseudoInverseEigen3(vpMatrix Ap, double svThreshold = 1e-6)
//



JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseEigen3_10 (JNIEnv*, jclass, jlong, jlong, jdouble);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseEigen3_10
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jdouble svThreshold)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        int _retval_ = me->pseudoInverseEigen3( Ap, (double)svThreshold );
        return _retval_;
}





JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseEigen3_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseEigen3_11
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        int _retval_ = me->pseudoInverseEigen3( Ap );
        return _retval_;
}



//
//  int pseudoInverseEigen3(vpMatrix Ap, vpColVector sv, double svThreshold, vpMatrix imA, vpMatrix imAt, vpMatrix kerAt)
//



JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseEigen3_12 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jlong, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseEigen3_12
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jlong sv_nativeObj, jdouble svThreshold, jlong imA_nativeObj, jlong imAt_nativeObj, jlong kerAt_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        vpColVector& sv = *((vpColVector*)sv_nativeObj);
        vpMatrix& imA = *((vpMatrix*)imA_nativeObj);
        vpMatrix& imAt = *((vpMatrix*)imAt_nativeObj);
        vpMatrix& kerAt = *((vpMatrix*)kerAt_nativeObj);
        int _retval_ = me->pseudoInverseEigen3( Ap, sv, (double)svThreshold, imA, imAt, kerAt );
        return _retval_;
}



//
//  int pseudoInverseEigen3(vpMatrix Ap, vpColVector sv, double svThreshold = 1e-6)
//



JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseEigen3_13 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseEigen3_13
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jlong sv_nativeObj, jdouble svThreshold)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        vpColVector& sv = *((vpColVector*)sv_nativeObj);
        int _retval_ = me->pseudoInverseEigen3( Ap, sv, (double)svThreshold );
        return _retval_;
}





JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseEigen3_14 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseEigen3_14
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jlong sv_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        vpColVector& sv = *((vpColVector*)sv_nativeObj);
        int _retval_ = me->pseudoInverseEigen3( Ap, sv );
        return _retval_;
}


//
////
////  int pseudoInverseGsl(vpMatrix Ap, double svThreshold = 1e-6)
////
//
//
//
//JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseGsl_10 (JNIEnv*, jclass, jlong, jlong, jdouble);
//
//JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseGsl_10
//  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jdouble svThreshold)
//{
//        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
//        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
//        int _retval_ = me->pseudoInverseGsl( Ap, (double)svThreshold );
//        return _retval_;
//}
//
//
//
//
//
//JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseGsl_11 (JNIEnv*, jclass, jlong, jlong);
//
//JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseGsl_11
//  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj)
//{
//        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
//        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
//        int _retval_ = me->pseudoInverseGsl( Ap );
//        return _retval_;
//}
//
//
//
////
////  int pseudoInverseGsl(vpMatrix Ap, vpColVector sv, double svThreshold, vpMatrix imA, vpMatrix imAt, vpMatrix kerAt)
////
//
//
//
//JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseGsl_12 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jlong, jlong, jlong);
//
//JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseGsl_12
//  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jlong sv_nativeObj, jdouble svThreshold, jlong imA_nativeObj, jlong imAt_nativeObj, jlong kerAt_nativeObj)
//{
//        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
//        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
//        vpColVector& sv = *((vpColVector*)sv_nativeObj);
//        vpMatrix& imA = *((vpMatrix*)imA_nativeObj);
//        vpMatrix& imAt = *((vpMatrix*)imAt_nativeObj);
//        vpMatrix& kerAt = *((vpMatrix*)kerAt_nativeObj);
//        int _retval_ = me->pseudoInverseGsl( Ap, sv, (double)svThreshold, imA, imAt, kerAt );
//        return _retval_;
//}
//
//
//
////
////  int pseudoInverseGsl(vpMatrix Ap, vpColVector sv, double svThreshold = 1e-6)
////
//
//
//
//JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseGsl_13 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble);
//
//JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseGsl_13
//  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jlong sv_nativeObj, jdouble svThreshold)
//{
//        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
//        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
//        vpColVector& sv = *((vpColVector*)sv_nativeObj);
//        int _retval_ = me->pseudoInverseGsl( Ap, sv, (double)svThreshold );
//        return _retval_;
//}
//
//
//
//
//
//JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseGsl_14 (JNIEnv*, jclass, jlong, jlong, jlong);
//
//JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseGsl_14
//  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jlong sv_nativeObj)
//{
//        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
//        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
//        vpColVector& sv = *((vpColVector*)sv_nativeObj);
//        int _retval_ = me->pseudoInverseGsl( Ap, sv );
//        return _retval_;
//}



//
//  int pseudoInverseLapack(vpMatrix Ap, double svThreshold = 1e-6)
//



JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseLapack_10 (JNIEnv*, jclass, jlong, jlong, jdouble);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseLapack_10
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jdouble svThreshold)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        int _retval_ = me->pseudoInverseLapack( Ap, (double)svThreshold );
        return _retval_;
}





JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseLapack_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseLapack_11
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        int _retval_ = me->pseudoInverseLapack( Ap );
        return _retval_;
}



//
//  int pseudoInverseLapack(vpMatrix Ap, vpColVector sv, double svThreshold, vpMatrix imA, vpMatrix imAt, vpMatrix kerAt)
//



JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseLapack_12 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jlong, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseLapack_12
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jlong sv_nativeObj, jdouble svThreshold, jlong imA_nativeObj, jlong imAt_nativeObj, jlong kerAt_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        vpColVector& sv = *((vpColVector*)sv_nativeObj);
        vpMatrix& imA = *((vpMatrix*)imA_nativeObj);
        vpMatrix& imAt = *((vpMatrix*)imAt_nativeObj);
        vpMatrix& kerAt = *((vpMatrix*)kerAt_nativeObj);
        int _retval_ = me->pseudoInverseLapack( Ap, sv, (double)svThreshold, imA, imAt, kerAt );
        return _retval_;
}



//
//  int pseudoInverseLapack(vpMatrix Ap, vpColVector sv, double svThreshold = 1e-6)
//



JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseLapack_13 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseLapack_13
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jlong sv_nativeObj, jdouble svThreshold)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        vpColVector& sv = *((vpColVector*)sv_nativeObj);
        int _retval_ = me->pseudoInverseLapack( Ap, sv, (double)svThreshold );
        return _retval_;
}





JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseLapack_14 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseLapack_14
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jlong sv_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        vpColVector& sv = *((vpColVector*)sv_nativeObj);
        int _retval_ = me->pseudoInverseLapack( Ap, sv );
        return _retval_;
}



//
//  int pseudoInverseOpenCV(vpMatrix Ap, double svThreshold = 1e-6)
//



JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseOpenCV_10 (JNIEnv*, jclass, jlong, jlong, jdouble);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseOpenCV_10
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jdouble svThreshold)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        int _retval_ = me->pseudoInverseOpenCV( Ap, (double)svThreshold );
        return _retval_;
}





JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseOpenCV_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseOpenCV_11
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        int _retval_ = me->pseudoInverseOpenCV( Ap );
        return _retval_;
}



//
//  int pseudoInverseOpenCV(vpMatrix Ap, vpColVector sv, double svThreshold, vpMatrix imA, vpMatrix imAt, vpMatrix kerAt)
//



JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseOpenCV_12 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jlong, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseOpenCV_12
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jlong sv_nativeObj, jdouble svThreshold, jlong imA_nativeObj, jlong imAt_nativeObj, jlong kerAt_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        vpColVector& sv = *((vpColVector*)sv_nativeObj);
        vpMatrix& imA = *((vpMatrix*)imA_nativeObj);
        vpMatrix& imAt = *((vpMatrix*)imAt_nativeObj);
        vpMatrix& kerAt = *((vpMatrix*)kerAt_nativeObj);
        int _retval_ = me->pseudoInverseOpenCV( Ap, sv, (double)svThreshold, imA, imAt, kerAt );
        return _retval_;
}



//
//  int pseudoInverseOpenCV(vpMatrix Ap, vpColVector sv, double svThreshold = 1e-6)
//



JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseOpenCV_13 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseOpenCV_13
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jlong sv_nativeObj, jdouble svThreshold)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        vpColVector& sv = *((vpColVector*)sv_nativeObj);
        int _retval_ = me->pseudoInverseOpenCV( Ap, sv, (double)svThreshold );
        return _retval_;
}





JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseOpenCV_14 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_pseudoInverseOpenCV_14
  (JNIEnv* env, jclass , jlong self, jlong Ap_nativeObj, jlong sv_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& Ap = *((vpMatrix*)Ap_nativeObj);
        vpColVector& sv = *((vpColVector*)sv_nativeObj);
        int _retval_ = me->pseudoInverseOpenCV( Ap, sv );
        return _retval_;
}



//
//  void AAt(vpMatrix B)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_AAt_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_AAt_10
  (JNIEnv* env, jclass , jlong self, jlong B_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& B = *((vpMatrix*)B_nativeObj);
        me->AAt( B );
        return;
}



//
//  void AtA(vpMatrix B)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_AtA_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_AtA_10
  (JNIEnv* env, jclass , jlong self, jlong B_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& B = *((vpMatrix*)B_nativeObj);
        me->AtA( B );
        return;
}



//
// static void add2Matrices(vpColVector A, vpColVector B, vpColVector C)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_add2Matrices_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_add2Matrices_10
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong B_nativeObj, jlong C_nativeObj)
{
        vpColVector& A = *((vpColVector*)A_nativeObj);
        vpColVector& B = *((vpColVector*)B_nativeObj);
        vpColVector& C = *((vpColVector*)C_nativeObj);
        vpMatrix::add2Matrices( A, B, C );
        return;
}



//
// static void add2Matrices(vpMatrix A, vpMatrix B, vpMatrix C)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_add2Matrices_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_add2Matrices_11
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong B_nativeObj, jlong C_nativeObj)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpMatrix& B = *((vpMatrix*)B_nativeObj);
        vpMatrix& C = *((vpMatrix*)C_nativeObj);
        vpMatrix::add2Matrices( A, B, C );
        return;
}



//
// static void add2WeightedMatrices(vpMatrix A, double wA, vpMatrix B, double wB, vpMatrix C)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_add2WeightedMatrices_10 (JNIEnv*, jclass, jlong, jdouble, jlong, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_add2WeightedMatrices_10
  (JNIEnv* env, jclass , jlong A_nativeObj, jdouble wA, jlong B_nativeObj, jdouble wB, jlong C_nativeObj)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpMatrix& B = *((vpMatrix*)B_nativeObj);
        vpMatrix& C = *((vpMatrix*)C_nativeObj);
        vpMatrix::add2WeightedMatrices( A, (double)wA, B, (double)wB, C );
        return;
}



//
//  void clear()
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_clear_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_clear_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        me->clear(  );
        return;
}



//
// static void computeHLM(vpMatrix H, double alpha, vpMatrix HLM)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_computeHLM_10 (JNIEnv*, jclass, jlong, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_computeHLM_10
  (JNIEnv* env, jclass , jlong H_nativeObj, jdouble alpha, jlong HLM_nativeObj)
{
        vpMatrix& H = *((vpMatrix*)H_nativeObj);
        vpMatrix& HLM = *((vpMatrix*)HLM_nativeObj);
        vpMatrix::computeHLM( H, (double)alpha, HLM );
        return;
}



//
// static void createDiagonalMatrix(vpColVector A, vpMatrix DA)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_createDiagonalMatrix_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_createDiagonalMatrix_10
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong DA_nativeObj)
{
        vpColVector& A = *((vpColVector*)A_nativeObj);
        vpMatrix& DA = *((vpMatrix*)DA_nativeObj);
        vpMatrix::createDiagonalMatrix( A, DA );
        return;
}



//
//  void diag(double val = 1.0)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_diag_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_diag_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        me->diag( (double)val );
        return;
}





JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_diag_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_diag_11
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        me->diag(  );
        return;
}



//
//  void diag(vpColVector A)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_diag_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_diag_12
  (JNIEnv* env, jclass , jlong self, jlong A_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpColVector& A = *((vpColVector*)A_nativeObj);
        me->diag( A );
        return;
}



//
//  void eigenValues(vpColVector evalue, vpMatrix evector)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_eigenValues_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_eigenValues_10
  (JNIEnv* env, jclass , jlong self, jlong evalue_nativeObj, jlong evector_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpColVector& evalue = *((vpColVector*)evalue_nativeObj);
        vpMatrix& evector = *((vpMatrix*)evector_nativeObj);
        me->eigenValues( evalue, evector );
        return;
}



//
//  void eye(int m, int n)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_eye_10 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_eye_10
  (JNIEnv* env, jclass , jlong self, jint m, jint n)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        me->eye( (int)m, (int)n );
        return;
}



//
//  void eye(int n)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_eye_11 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_eye_11
  (JNIEnv* env, jclass , jlong self, jint n)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        me->eye( (int)n );
        return;
}



//
//  void eye()
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_eye_12 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_eye_12
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        me->eye(  );
        return;
}



//
//  void init(vpMatrix M, int r, int c, int nrows, int ncols)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_init_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_init_10
  (JNIEnv* env, jclass , jlong self, jlong M_nativeObj, jint r, jint c, jint nrows, jint ncols)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& M = *((vpMatrix*)M_nativeObj);
        me->init( M, (int)r, (int)c, (int)nrows, (int)ncols );
        return;
}



//
//  void init()
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_init_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_init_11
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        me->init(  );
        return;
}



//
//  void insert(vpMatrix A, int r, int c)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_insert_10 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_insert_10
  (JNIEnv* env, jclass , jlong self, jlong A_nativeObj, jint r, jint c)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        me->insert( A, (int)r, (int)c );
        return;
}



//
// static void insert(vpMatrix A, vpMatrix B, vpMatrix C, int r, int c)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_insert_11 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_insert_11
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong B_nativeObj, jlong C_nativeObj, jint r, jint c)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpMatrix& B = *((vpMatrix*)B_nativeObj);
        vpMatrix& C = *((vpMatrix*)C_nativeObj);
        vpMatrix::insert( A, B, C, (int)r, (int)c );
        return;
}



//
// static void juxtaposeMatrices(vpMatrix A, vpMatrix B, vpMatrix C)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_juxtaposeMatrices_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_juxtaposeMatrices_10
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong B_nativeObj, jlong C_nativeObj)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpMatrix& B = *((vpMatrix*)B_nativeObj);
        vpMatrix& C = *((vpMatrix*)C_nativeObj);
        vpMatrix::juxtaposeMatrices( A, B, C );
        return;
}



//
// static void kron(vpMatrix m1, vpMatrix m2, vpMatrix out)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_kron_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_kron_10
  (JNIEnv* env, jclass , jlong m1_nativeObj, jlong m2_nativeObj, jlong out_nativeObj)
{
        vpMatrix& m1 = *((vpMatrix*)m1_nativeObj);
        vpMatrix& m2 = *((vpMatrix*)m2_nativeObj);
        vpMatrix& out = *((vpMatrix*)out_nativeObj);
        vpMatrix::kron( m1, m2, out );
        return;
}



//
//  void kron(vpMatrix m1, vpMatrix out)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_kron_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_kron_11
  (JNIEnv* env, jclass , jlong self, jlong m1_nativeObj, jlong out_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& m1 = *((vpMatrix*)m1_nativeObj);
        vpMatrix& out = *((vpMatrix*)out_nativeObj);
        me->kron( m1, out );
        return;
}



//
// static void mult2Matrices(vpMatrix A, vpColVector B, vpColVector C)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_mult2Matrices_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_mult2Matrices_10
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong B_nativeObj, jlong C_nativeObj)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpColVector& B = *((vpColVector*)B_nativeObj);
        vpColVector& C = *((vpColVector*)C_nativeObj);
        vpMatrix::mult2Matrices( A, B, C );
        return;
}



//
// static void mult2Matrices(vpMatrix A, vpMatrix B, vpMatrix C)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_mult2Matrices_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_mult2Matrices_11
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong B_nativeObj, jlong C_nativeObj)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpMatrix& B = *((vpMatrix*)B_nativeObj);
        vpMatrix& C = *((vpMatrix*)C_nativeObj);
        vpMatrix::mult2Matrices( A, B, C );
        return;
}



//
// static void multMatrixVector(vpMatrix A, vpColVector v, vpColVector w)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_multMatrixVector_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_multMatrixVector_10
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong v_nativeObj, jlong w_nativeObj)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpColVector& v = *((vpColVector*)v_nativeObj);
        vpColVector& w = *((vpColVector*)w_nativeObj);
        vpMatrix::multMatrixVector( A, v, w );
        return;
}



//
// static void negateMatrix(vpMatrix A, vpMatrix C)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_negateMatrix_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_negateMatrix_10
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong C_nativeObj)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpMatrix& C = *((vpMatrix*)C_nativeObj);
        vpMatrix::negateMatrix( A, C );
        return;
}



//
//  void printSize()
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_printSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_printSize_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        me->printSize(  );
        return;
}



//
//  void setIdentity(double val = 1.0)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_setIdentity_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_setIdentity_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        me->setIdentity( (double)val );
        return;
}





JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_setIdentity_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_setIdentity_11
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        me->setIdentity(  );
        return;
}



//
//  void solveBySVD(vpColVector B, vpColVector x)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_solveBySVD_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_solveBySVD_10
  (JNIEnv* env, jclass , jlong self, jlong B_nativeObj, jlong x_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpColVector& B = *((vpColVector*)B_nativeObj);
        vpColVector& x = *((vpColVector*)x_nativeObj);
        me->solveBySVD( B, x );
        return;
}



//
// static void stack(vpMatrix A, vpMatrix B, vpMatrix C)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stack_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stack_10
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong B_nativeObj, jlong C_nativeObj)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpMatrix& B = *((vpMatrix*)B_nativeObj);
        vpMatrix& C = *((vpMatrix*)C_nativeObj);
        vpMatrix::stack( A, B, C );
        return;
}



//
// static void stack(vpMatrix A, vpRowVector r, vpMatrix C)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stack_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stack_11
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong r_nativeObj, jlong C_nativeObj)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpRowVector& r = *((vpRowVector*)r_nativeObj);
        vpMatrix& C = *((vpMatrix*)C_nativeObj);
        vpMatrix::stack( A, r, C );
        return;
}



//
//  void stack(vpMatrix A)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stack_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stack_12
  (JNIEnv* env, jclass , jlong self, jlong A_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        me->stack( A );
        return;
}



//
//  void stack(vpRowVector r)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stack_13 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stack_13
  (JNIEnv* env, jclass , jlong self, jlong r_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpRowVector& r = *((vpRowVector*)r_nativeObj);
        me->stack( r );
        return;
}



//
//  void stackColumns(vpColVector out)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stackColumns_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stackColumns_10
  (JNIEnv* env, jclass , jlong self, jlong out_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpColVector& out = *((vpColVector*)out_nativeObj);
        me->stackColumns( out );
        return;
}



//
// static void stackMatrices(vpColVector A, vpColVector B, vpColVector C)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stackMatrices_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stackMatrices_10
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong B_nativeObj, jlong C_nativeObj)
{
        vpColVector& A = *((vpColVector*)A_nativeObj);
        vpColVector& B = *((vpColVector*)B_nativeObj);
        vpColVector& C = *((vpColVector*)C_nativeObj);
        vpMatrix::stackMatrices( A, B, C );
        return;
}



//
// static void stackMatrices(vpMatrix A, vpMatrix B, vpMatrix C)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stackMatrices_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stackMatrices_11
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong B_nativeObj, jlong C_nativeObj)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpMatrix& B = *((vpMatrix*)B_nativeObj);
        vpMatrix& C = *((vpMatrix*)C_nativeObj);
        vpMatrix::stackMatrices( A, B, C );
        return;
}



//
// static void stackMatrices(vpMatrix A, vpRowVector B, vpMatrix C)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stackMatrices_12 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stackMatrices_12
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong B_nativeObj, jlong C_nativeObj)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpRowVector& B = *((vpRowVector*)B_nativeObj);
        vpMatrix& C = *((vpMatrix*)C_nativeObj);
        vpMatrix::stackMatrices( A, B, C );
        return;
}



//
//  void stackMatrices(vpMatrix A)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stackMatrices_13 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stackMatrices_13
  (JNIEnv* env, jclass , jlong self, jlong A_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        me->stackMatrices( A );
        return;
}



//
//  void stackRows(vpRowVector out)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stackRows_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_stackRows_10
  (JNIEnv* env, jclass , jlong self, jlong out_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpRowVector& out = *((vpRowVector*)out_nativeObj);
        me->stackRows( out );
        return;
}



//
// static void sub2Matrices(vpColVector A, vpColVector B, vpColVector C)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_sub2Matrices_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_sub2Matrices_10
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong B_nativeObj, jlong C_nativeObj)
{
        vpColVector& A = *((vpColVector*)A_nativeObj);
        vpColVector& B = *((vpColVector*)B_nativeObj);
        vpColVector& C = *((vpColVector*)C_nativeObj);
        vpMatrix::sub2Matrices( A, B, C );
        return;
}



//
// static void sub2Matrices(vpMatrix A, vpMatrix B, vpMatrix C)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_sub2Matrices_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_sub2Matrices_11
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong B_nativeObj, jlong C_nativeObj)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpMatrix& B = *((vpMatrix*)B_nativeObj);
        vpMatrix& C = *((vpMatrix*)C_nativeObj);
        vpMatrix::sub2Matrices( A, B, C );
        return;
}



//
//  void svd(vpColVector w, vpMatrix V)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_svd_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_svd_10
  (JNIEnv* env, jclass , jlong self, jlong w_nativeObj, jlong V_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpColVector& w = *((vpColVector*)w_nativeObj);
        vpMatrix& V = *((vpMatrix*)V_nativeObj);
        me->svd( w, V );
        return;
}



//
//  void svdEigen3(vpColVector w, vpMatrix V)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_svdEigen3_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_svdEigen3_10
  (JNIEnv* env, jclass , jlong self, jlong w_nativeObj, jlong V_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpColVector& w = *((vpColVector*)w_nativeObj);
        vpMatrix& V = *((vpMatrix*)V_nativeObj);
        me->svdEigen3( w, V );
        return;
}



////
////  void svdGsl(vpColVector w, vpMatrix V)
////
//
//
//
//JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_svdGsl_10 (JNIEnv*, jclass, jlong, jlong, jlong);
//
//JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_svdGsl_10
//  (JNIEnv* env, jclass , jlong self, jlong w_nativeObj, jlong V_nativeObj)
//{
//        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
//        vpColVector& w = *((vpColVector*)w_nativeObj);
//        vpMatrix& V = *((vpMatrix*)V_nativeObj);
//        me->svdGsl( w, V );
//        return;
//}



//
//  void svdLapack(vpColVector w, vpMatrix V)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_svdLapack_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_svdLapack_10
  (JNIEnv* env, jclass , jlong self, jlong w_nativeObj, jlong V_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpColVector& w = *((vpColVector*)w_nativeObj);
        vpMatrix& V = *((vpMatrix*)V_nativeObj);
        me->svdLapack( w, V );
        return;
}



//
//  void svdOpenCV(vpColVector w, vpMatrix V)
//



JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_svdOpenCV_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_visp_core_VpMatrix_svdOpenCV_10
  (JNIEnv* env, jclass , jlong self, jlong w_nativeObj, jlong V_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpColVector& w = *((vpColVector*)w_nativeObj);
        vpMatrix& V = *((vpMatrix*)V_nativeObj);
        me->svdOpenCV( w, V );
        return;
}


//
//  vpColVector column(int j)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_column_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_column_10
  (JNIEnv* env, jclass , jlong self, jint j)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpColVector _retval_ = me->column( (int)j );
        return (jlong) new vpColVector(_retval_);
}



//
//  vpColVector eigenValues()
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_eigenValues_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_eigenValues_11
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpColVector _retval_ = me->eigenValues(  );
        return (jlong) new vpColVector(_retval_);
}



//
//  vpColVector getCol(int j, int i_begin, int size)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_getCol_10 (JNIEnv*, jclass, jlong, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_getCol_10
  (JNIEnv* env, jclass , jlong self, jint j, jint i_begin, jint size)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpColVector _retval_ = me->getCol( (int)j, (int)i_begin, (int)size );
        return (jlong) new vpColVector(_retval_);
}



//
//  vpColVector getCol(int j)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_getCol_11 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_getCol_11
  (JNIEnv* env, jclass , jlong self, jint j)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpColVector _retval_ = me->getCol( (int)j );
        return (jlong) new vpColVector(_retval_);
}



//
//  vpColVector solveBySVD(vpColVector B)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_solveBySVD_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_solveBySVD_11
  (JNIEnv* env, jclass , jlong self, jlong B_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpColVector& B = *((vpColVector*)B_nativeObj);
        vpColVector _retval_ = me->solveBySVD( B );
        return (jlong) new vpColVector(_retval_);
}



//
//  vpColVector stackColumns()
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_stackColumns_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_stackColumns_11
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpColVector _retval_ = me->stackColumns(  );
        return (jlong) new vpColVector(_retval_);
}



//
//  vpMatrix AAt()
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_AAt_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_AAt_11
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->AAt(  );
        return (jlong) new vpMatrix(_retval_);
}



//
//  vpMatrix AtA()
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_AtA_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_AtA_11
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->AtA(  );
        return (jlong) new vpMatrix(_retval_);
}



//
// static vpMatrix computeCovarianceMatrix(vpMatrix A, vpColVector x, vpColVector b, vpMatrix w)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_computeCovarianceMatrix_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_computeCovarianceMatrix_10
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong x_nativeObj, jlong b_nativeObj, jlong w_nativeObj)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpColVector& x = *((vpColVector*)x_nativeObj);
        vpColVector& b = *((vpColVector*)b_nativeObj);
        vpMatrix& w = *((vpMatrix*)w_nativeObj);
        vpMatrix _retval_ = vpMatrix::computeCovarianceMatrix( A, x, b, w );
        return (jlong) new vpMatrix(_retval_);
}



//
// static vpMatrix computeCovarianceMatrix(vpMatrix A, vpColVector x, vpColVector b)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_computeCovarianceMatrix_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_computeCovarianceMatrix_11
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong x_nativeObj, jlong b_nativeObj)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpColVector& x = *((vpColVector*)x_nativeObj);
        vpColVector& b = *((vpColVector*)b_nativeObj);
        vpMatrix _retval_ = vpMatrix::computeCovarianceMatrix( A, x, b );
        return (jlong) new vpMatrix(_retval_);
}



//
//  vpMatrix expm()
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_expm_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_expm_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->expm(  );
        return (jlong) new vpMatrix(_retval_);
}



//
//  vpMatrix extract(int r, int c, int nrows, int ncols)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_extract_10 (JNIEnv*, jclass, jlong, jint, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_extract_10
  (JNIEnv* env, jclass , jlong self, jint r, jint c, jint nrows, jint ncols)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->extract( (int)r, (int)c, (int)nrows, (int)ncols );
        return (jlong) new vpMatrix(_retval_);
}



//
//  vpMatrix hadamard(vpMatrix m)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_hadamard_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_hadamard_10
  (JNIEnv* env, jclass , jlong self, jlong m_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& m = *((vpMatrix*)m_nativeObj);
        vpMatrix _retval_ = me->hadamard( m );
        return (jlong) new vpMatrix(_retval_);
}



//
// static vpMatrix insert(vpMatrix A, vpMatrix B, int r, int c)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_insert_12 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_insert_12
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong B_nativeObj, jint r, jint c)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpMatrix& B = *((vpMatrix*)B_nativeObj);
        vpMatrix _retval_ = vpMatrix::insert( A, B, (int)r, (int)c );
        return (jlong) new vpMatrix(_retval_);
}



//
//  vpMatrix inverseByCholesky()
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByCholesky_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByCholesky_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->inverseByCholesky(  );
        return (jlong) new vpMatrix(_retval_);
}



//
//  vpMatrix inverseByCholeskyLapack()
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByCholeskyLapack_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByCholeskyLapack_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->inverseByCholeskyLapack(  );
        return (jlong) new vpMatrix(_retval_);
}



//
//  vpMatrix inverseByCholeskyOpenCV()
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByCholeskyOpenCV_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByCholeskyOpenCV_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->inverseByCholeskyOpenCV(  );
        return (jlong) new vpMatrix(_retval_);
}



//
//  vpMatrix inverseByLU()
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByLU_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByLU_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->inverseByLU(  );
        return (jlong) new vpMatrix(_retval_);
}



//
//  vpMatrix inverseByLUEigen3()
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByLUEigen3_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByLUEigen3_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->inverseByLUEigen3(  );
        return (jlong) new vpMatrix(_retval_);
}



////
////  vpMatrix inverseByLUGsl()
////
//
//
//
//JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByLUGsl_10 (JNIEnv*, jclass, jlong);
//
//JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByLUGsl_10
//  (JNIEnv* env, jclass , jlong self)
//{
//        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
//        vpMatrix _retval_ = me->inverseByLUGsl(  );
//        return (jlong) new vpMatrix(_retval_);
//}



//
//  vpMatrix inverseByLULapack()
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByLULapack_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByLULapack_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->inverseByLULapack(  );
        return (jlong) new vpMatrix(_retval_);
}



//
//  vpMatrix inverseByLUOpenCV()
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByLUOpenCV_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByLUOpenCV_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->inverseByLUOpenCV(  );
        return (jlong) new vpMatrix(_retval_);
}



//
//  vpMatrix inverseByQR()
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByQR_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByQR_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->inverseByQR(  );
        return (jlong) new vpMatrix(_retval_);
}



//
//  vpMatrix inverseByQRLapack()
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByQRLapack_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_inverseByQRLapack_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->inverseByQRLapack(  );
        return (jlong) new vpMatrix(_retval_);
}



//
// static vpMatrix juxtaposeMatrices(vpMatrix A, vpMatrix B)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_juxtaposeMatrices_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_juxtaposeMatrices_11
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong B_nativeObj)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpMatrix& B = *((vpMatrix*)B_nativeObj);
        vpMatrix _retval_ = vpMatrix::juxtaposeMatrices( A, B );
        return (jlong) new vpMatrix(_retval_);
}



//
// static vpMatrix kron(vpMatrix m1, vpMatrix m2)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_kron_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_kron_12
  (JNIEnv* env, jclass , jlong m1_nativeObj, jlong m2_nativeObj)
{
        const vpMatrix& m1 = *((vpMatrix*)m1_nativeObj);
        const vpMatrix& m2 = *((vpMatrix*)m2_nativeObj);
        vpMatrix _retval_ = vpMatrix::kron( m1, m2 );
        return (jlong) new vpMatrix(_retval_);
}



//
//  vpMatrix kron(vpMatrix m1)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_kron_13 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_kron_13
  (JNIEnv* env, jclass , jlong self, jlong m1_nativeObj)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix& m1 = *((vpMatrix*)m1_nativeObj);
        vpMatrix _retval_ = me->kron( m1 );
        return (jlong) new vpMatrix(_retval_);
}



//
//  vpMatrix pseudoInverse(double svThreshold = 1e-6)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverse_16 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverse_16
  (JNIEnv* env, jclass , jlong self, jdouble svThreshold)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->pseudoInverse( (double)svThreshold );
        return (jlong) new vpMatrix(_retval_);
}





JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverse_17 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverse_17
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->pseudoInverse(  );
        return (jlong) new vpMatrix(_retval_);
}



//
//  vpMatrix pseudoInverseEigen3(double svThreshold = 1e-6)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverseEigen3_15 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverseEigen3_15
  (JNIEnv* env, jclass , jlong self, jdouble svThreshold)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->pseudoInverseEigen3( (double)svThreshold );
        return (jlong) new vpMatrix(_retval_);
}





JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverseEigen3_16 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverseEigen3_16
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->pseudoInverseEigen3(  );
        return (jlong) new vpMatrix(_retval_);
}



////
////  vpMatrix pseudoInverseGsl(double svThreshold = 1e-6)
////
//
//
//
//JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverseGsl_15 (JNIEnv*, jclass, jlong, jdouble);
//
//JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverseGsl_15
//  (JNIEnv* env, jclass , jlong self, jdouble svThreshold)
//{
//        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
//        vpMatrix _retval_ = me->pseudoInverseGsl( (double)svThreshold );
//        return (jlong) new vpMatrix(_retval_);
//}
//
//
//
//
//
//JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverseGsl_16 (JNIEnv*, jclass, jlong);
//
//JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverseGsl_16
//  (JNIEnv* env, jclass , jlong self)
//{
//        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
//        vpMatrix _retval_ = me->pseudoInverseGsl(  );
//        return (jlong) new vpMatrix(_retval_);
//}



//
//  vpMatrix pseudoInverseLapack(double svThreshold = 1e-6)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverseLapack_15 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverseLapack_15
  (JNIEnv* env, jclass , jlong self, jdouble svThreshold)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->pseudoInverseLapack( (double)svThreshold );
        return (jlong) new vpMatrix(_retval_);
}





JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverseLapack_16 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverseLapack_16
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->pseudoInverseLapack(  );
        return (jlong) new vpMatrix(_retval_);
}



//
//  vpMatrix pseudoInverseOpenCV(double svThreshold = 1e-6)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverseOpenCV_15 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverseOpenCV_15
  (JNIEnv* env, jclass , jlong self, jdouble svThreshold)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->pseudoInverseOpenCV( (double)svThreshold );
        return (jlong) new vpMatrix(_retval_);
}





JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverseOpenCV_16 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_pseudoInverseOpenCV_16
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->pseudoInverseOpenCV(  );
        return (jlong) new vpMatrix(_retval_);
}



//
// static vpMatrix stack(vpMatrix A, vpMatrix B)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_stack_14 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_stack_14
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong B_nativeObj)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpMatrix& B = *((vpMatrix*)B_nativeObj);
        vpMatrix _retval_ = vpMatrix::stack( A, B );
        return (jlong) new vpMatrix(_retval_);
}



//
// static vpMatrix stack(vpMatrix A, vpRowVector r)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_stack_15 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_stack_15
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong r_nativeObj)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpRowVector& r = *((vpRowVector*)r_nativeObj);
        vpMatrix _retval_ = vpMatrix::stack( A, r );
        return (jlong) new vpMatrix(_retval_);
}



//
// static vpMatrix stackMatrices(vpColVector A, vpColVector B)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_stackMatrices_14 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_stackMatrices_14
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong B_nativeObj)
{
        vpColVector& A = *((vpColVector*)A_nativeObj);
        vpColVector& B = *((vpColVector*)B_nativeObj);
        vpMatrix _retval_ = vpMatrix::stackMatrices( A, B );
        return (jlong) new vpMatrix(_retval_);
}



//
// static vpMatrix stackMatrices(vpMatrix A, vpMatrix B)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_stackMatrices_15 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_stackMatrices_15
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong B_nativeObj)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpMatrix& B = *((vpMatrix*)B_nativeObj);
        vpMatrix _retval_ = vpMatrix::stackMatrices( A, B );
        return (jlong) new vpMatrix(_retval_);
}



//
// static vpMatrix stackMatrices(vpMatrix A, vpRowVector B)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_stackMatrices_16 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_stackMatrices_16
  (JNIEnv* env, jclass , jlong A_nativeObj, jlong B_nativeObj)
{
        vpMatrix& A = *((vpMatrix*)A_nativeObj);
        vpRowVector& B = *((vpRowVector*)B_nativeObj);
        vpMatrix _retval_ = vpMatrix::stackMatrices( A, B );
        return (jlong) new vpMatrix(_retval_);
}



//
//  vpMatrix t()
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_t_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_t_10
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpMatrix _retval_ = me->t(  );
        return (jlong) new vpMatrix(_retval_);
}



//
//  vpRowVector getRow(int i, int j_begin, int size)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_getRow_10 (JNIEnv*, jclass, jlong, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_getRow_10
  (JNIEnv* env, jclass , jlong self, jint i, jint j_begin, jint size)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpRowVector _retval_ = me->getRow( (int)i, (int)j_begin, (int)size );
        return (jlong) new vpRowVector(_retval_);
}



//
//  vpRowVector getRow(int i)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_getRow_11 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_getRow_11
  (JNIEnv* env, jclass , jlong self, jint i)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpRowVector _retval_ = me->getRow( (int)i );
        return (jlong) new vpRowVector(_retval_);
}



//
//  vpRowVector row(int i)
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_row_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_row_10
  (JNIEnv* env, jclass , jlong self, jint i)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpRowVector _retval_ = me->row( (int)i );
        return (jlong) new vpRowVector(_retval_);
}



//
//  vpRowVector stackRows()
//



JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_stackRows_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_stackRows_11
  (JNIEnv* env, jclass , jlong self)
{
        vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
        vpRowVector _retval_ = me->stackRows(  );
        return (jlong) new vpRowVector(_retval_);
}

