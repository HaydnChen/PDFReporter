//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/annotation/IncompleteAnnotationException.java
//
//  Created by tball on 7/15/13.
//

#ifndef _JavaLangAnnotationIncompleteAnnotationException_H_
#define _JavaLangAnnotationIncompleteAnnotationException_H_

@class IOSClass;

#import "JreEmulation.h"
#include "java/lang/RuntimeException.h"

#define JavaLangAnnotationIncompleteAnnotationException_serialVersionUID 8445097402741811912

@interface JavaLangAnnotationIncompleteAnnotationException : JavaLangRuntimeException {
 @public
  IOSClass *annotationType__;
  NSString *elementName__;
}

@property (nonatomic, retain) IOSClass *annotationType_;
@property (nonatomic, copy) NSString *elementName_;

- (id)initWithIOSClass:(IOSClass *)annotationType
          withNSString:(NSString *)elementName;
- (IOSClass *)annotationType;
- (NSString *)elementName;
@end

#endif // _JavaLangAnnotationIncompleteAnnotationException_H_