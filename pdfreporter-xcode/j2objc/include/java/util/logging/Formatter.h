//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/util/logging/Formatter.java
//
//  Created by tball on 7/15/13.
//

#ifndef _JavaUtilLoggingFormatter_H_
#define _JavaUtilLoggingFormatter_H_

@class JavaUtilLoggingLogRecord;

#import "JreEmulation.h"

@interface JavaUtilLoggingFormatter : NSObject {
}

- (NSString *)formatWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;
- (NSString *)formatMessageWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;
- (id)init;
@end

#endif // _JavaUtilLoggingFormatter_H_