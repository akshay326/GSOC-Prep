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

