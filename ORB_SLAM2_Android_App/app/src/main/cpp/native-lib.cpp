#include <jni.h>
#include <string>

#include <System.h>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_bakelew_orb_1slam2_1android_1app_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";

    ORB_SLAM2::System *s;
    return env->NewStringUTF(hello.c_str());
}
