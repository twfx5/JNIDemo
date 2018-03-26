//
// Created by wangzhenhua on 2018/3/26.
//

include "com_wang_zh_jnidemo_Hello.h"

JNIEXPORT jstring JNICALL Java_com_wang_zh_jnidemo_Hello_sayHello
  (JNIEnv *env, jobject jclass){

  return (*env)->NewStringUTF(env, "Hello from JNI !");
  }