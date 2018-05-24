#include <jni.h>
#include <iostream>
#include <cstring>
#include "native.h"
#include <visp3/core/vpMatrix.h>

JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_n_1vpMatrix__
  (JNIEnv *, jclass){
	return (jlong) new vpMatrix();  
}


JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_n_1vpMatrix__II
  (JNIEnv *, jclass, jint rows, jint cols){
	return (jlong) new vpMatrix(rows, cols);
}


JNIEXPORT jlong JNICALL Java_org_visp_core_VpMatrix_n_1vpMatrix__IID
  (JNIEnv *, jclass, jint rows, jint cols, jdouble value){
	return (jlong) new vpMatrix(rows, cols, value);
}



JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_n_1cols
  (JNIEnv *, jclass, jlong self){
	vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
	return me->getCols();
}



JNIEXPORT jint JNICALL Java_org_visp_core_VpMatrix_n_1rows
  (JNIEnv *, jclass, jlong self){
	vpMatrix* me = (vpMatrix*) self; //TODO: check for NULL
	return me->getRows();
}

