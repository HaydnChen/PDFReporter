//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/X509Certificate.java
//

#ifndef _JavaSecurityCertX509Certificate_H_
#define _JavaSecurityCertX509Certificate_H_

@class IOSBooleanArray;
@class IOSByteArray;
@class JavaMathBigInteger;
@class JavaUtilDate;
@class JavaxSecurityAuthX500X500Principal;
@protocol JavaSecurityPrincipal;
@protocol JavaUtilCollection;
@protocol JavaUtilList;

#include "J2ObjC_header.h"
#include "java/security/cert/Certificate.h"
#include "java/security/cert/X509Extension.h"

#define JavaSecurityCertX509Certificate_serialVersionUID -2491127588187038216LL

@interface JavaSecurityCertX509Certificate : JavaSecurityCertCertificate < JavaSecurityCertX509Extension > {
}

- (instancetype)init;

- (void)checkValidity;

- (void)checkValidityWithJavaUtilDate:(JavaUtilDate *)date;

- (jint)getVersion;

- (JavaMathBigInteger *)getSerialNumber;

- (id<JavaSecurityPrincipal>)getIssuerDN;

- (JavaxSecurityAuthX500X500Principal *)getIssuerX500Principal;

- (id<JavaSecurityPrincipal>)getSubjectDN;

- (JavaxSecurityAuthX500X500Principal *)getSubjectX500Principal;

- (JavaUtilDate *)getNotBefore;

- (JavaUtilDate *)getNotAfter;

- (IOSByteArray *)getTBSCertificate;

- (IOSByteArray *)getSignature;

- (NSString *)getSigAlgName;

- (NSString *)getSigAlgOID;

- (IOSByteArray *)getSigAlgParams;

- (IOSBooleanArray *)getIssuerUniqueID;

- (IOSBooleanArray *)getSubjectUniqueID;

- (IOSBooleanArray *)getKeyUsage;

- (id<JavaUtilList>)getExtendedKeyUsage;

- (jint)getBasicConstraints;

- (id<JavaUtilCollection>)getSubjectAlternativeNames;

- (id<JavaUtilCollection>)getIssuerAlternativeNames;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertX509Certificate)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaSecurityCertX509Certificate, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertX509Certificate)

#endif // _JavaSecurityCertX509Certificate_H_
