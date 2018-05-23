#include <jni.h>
#include <stdio.h>
#include <cstring>
#include "native.h"
#include "hello.h"

// If u're function becomes static in java, this signature changes
JNIEXPORT void JNICALL Java_MyClass_sayHello(JNIEnv *, jclass)
{
	std::string s = hello(2);
    printf("Hello World!\n");
    return;
}
