/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class de_fau_cooja_plugins_LinuxPseudoTerminal */

#ifndef _Included_de_fau_cooja_plugins_LinuxPseudoTerminal
#define _Included_de_fau_cooja_plugins_LinuxPseudoTerminal
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     de_fau_cooja_plugins_LinuxPseudoTerminal
 * Method:    setupMasterPt
 * Signature: (Ljava/io/FileDescriptor;)V
 */
JNIEXPORT void JNICALL Java_de_fau_cooja_plugins_LinuxPseudoTerminal_setupMasterPt
  (JNIEnv *, jobject, jobject);

/*
 * Class:     de_fau_cooja_plugins_LinuxPseudoTerminal
 * Method:    getSlavePtsName
 * Signature: (Ljava/io/FileDescriptor;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_de_fau_cooja_plugins_LinuxPseudoTerminal_getSlavePtsName
  (JNIEnv *, jobject, jobject);

/*
 * Class:     de_fau_cooja_plugins_LinuxPseudoTerminal
 * Method:    setupSlavePt
 * Signature: (Ljava/io/FileDescriptor;)V
 */
JNIEXPORT void JNICALL Java_de_fau_cooja_plugins_LinuxPseudoTerminal_setupSlavePt
  (JNIEnv *, jobject, jobject);

/*
 * Class:     de_fau_cooja_plugins_LinuxPseudoTerminal
 * Method:    closePt
 * Signature: (Ljava/io/FileDescriptor;)V
 */
JNIEXPORT void JNICALL Java_de_fau_cooja_plugins_LinuxPseudoTerminal_closePt
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
