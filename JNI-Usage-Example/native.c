#include <jni.h>
#include <stdio.h>
#include "native.h"

// If u're function becomes static in java, this signature changes
JNIEXPORT void JNICALL Java_MyClass_sayHello(JNIEnv *, jclass)
{
    printf("Hello World!\n");
    return;
}
