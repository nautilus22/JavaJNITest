/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class JniTest */

#ifndef _Included_JniTest
#define _Included_JniTest
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     JniTest
 * Method:    printHelloWorld
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JniTest_printHelloWorld
  (JNIEnv *, jobject);

/*
 * Class:     JniTest
 * Method:    AddINT
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_JniTest_AddINT
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     JniTest
 * Method:    addDBL
 * Signature: (DD)D
 */
JNIEXPORT jdouble JNICALL Java_JniTest_addDBL
  (JNIEnv *, jobject, jdouble, jdouble);

/*
 * Class:     JniTest
 * Method:    getStr
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_JniTest_getStr
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
