#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_visualdefence_gstreamertest2_MainActivity_getMsgFromJni(JNIEnv *env, jobject instance) {

    return (*env)->NewStringUTF(env, "Hello From Jni");
}