//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/SAXException.java
//

#ifndef _OrgXmlSaxSAXException_H_
#define _OrgXmlSaxSAXException_H_

#include "J2ObjC_header.h"
#include "java/lang/Exception.h"

@interface OrgXmlSaxSAXException : JavaLangException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message;

- (instancetype)initWithJavaLangException:(JavaLangException *)e;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangException:(JavaLangException *)e;

- (NSString *)getMessage;

- (JavaLangException *)getException;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxSAXException)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxSAXException)

#endif // _OrgXmlSaxSAXException_H_
