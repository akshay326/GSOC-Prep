#include <jni.h>
#include <iostream>
#include <cstring>
#include "native.h"
#include <visp3/core/vpMatrix.h>

// If u're function becomes static in java, this signature changes
JNIEXPORT void JNICALL Java_MyClass_printVpMatrix(JNIEnv *, jclass, jint rows, jint cols, jdouble value)
{
	vpMatrix M(rows, cols, value);
	M.print(std::cout,rows*cols);
    return;
}
