//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/IllegalAccessError.java
//

#ifndef _JavaLangIllegalAccessError_H_
#define _JavaLangIllegalAccessError_H_

#include "J2ObjC_header.h"
#include "java/lang/IncompatibleClassChangeError.h"

#define JavaLangIllegalAccessError_serialVersionUID -8988904074992417891LL

@interface JavaLangIllegalAccessError : JavaLangIncompatibleClassChangeError {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangIllegalAccessError)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaLangIllegalAccessError, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangIllegalAccessError)

#endif // _JavaLangIllegalAccessError_H_
