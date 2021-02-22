#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
 
#include "NativeMemoryEater.h"
#include "MemoryEater.h"

jfieldID getPtrFieldId(JNIEnv * env, jobject obj) {
    static jfieldID ptrFieldId = 0;
    if (!ptrFieldId) {
        jclass c = env->GetObjectClass(obj);
        ptrFieldId = env->GetFieldID(c, "eaterPointer", "J");
        env->DeleteLocalRef(c);
    }
    return ptrFieldId;
}

JNIEXPORT void JNICALL Java_NativeMemoryEater_eatMemory(JNIEnv *env, jobject obj) {
  memtest::MemoryEater* eater = (memtest::MemoryEater*) env->GetLongField(obj, getPtrFieldId(env, obj));
  eater->eat();
}

JNIEXPORT void JNICALL Java_NativeMemoryEater_freeMemory(JNIEnv *env, jobject obj) {
  memtest::MemoryEater* eater = (memtest::MemoryEater*) env->GetLongField(obj, getPtrFieldId(env, obj));
  eater->uneat();
}

JNIEXPORT void JNICALL Java_NativeMemoryEater_getEater(JNIEnv *env, jobject obj) {
  env->SetLongField(obj, getPtrFieldId(env, obj), (jlong) new memtest::MemoryEater);
}

JNIEXPORT void JNICALL Java_NativeMemoryEater_destroyEater(JNIEnv *env, jobject obj) {
  memtest::MemoryEater* eater = (memtest::MemoryEater*) env->GetLongField(obj, getPtrFieldId(env, obj));
  delete eater;
}
