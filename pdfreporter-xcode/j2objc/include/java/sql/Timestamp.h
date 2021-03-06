//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/Timestamp.java
//

#ifndef _JavaSqlTimestamp_H_
#define _JavaSqlTimestamp_H_

@class JavaLangIllegalArgumentException;
@class JavaLangStringBuilder;

#include "J2ObjC_header.h"
#include "java/util/Date.h"

#define JavaSqlTimestamp_serialVersionUID 2745179027874758501LL

@interface JavaSqlTimestamp : JavaUtilDate {
}

- (instancetype)initWithInt:(jint)theYear
                    withInt:(jint)theMonth
                    withInt:(jint)theDate
                    withInt:(jint)theHour
                    withInt:(jint)theMinute
                    withInt:(jint)theSecond
                    withInt:(jint)theNano;

- (instancetype)initWithLong:(jlong)theTime;

- (jboolean)afterWithJavaSqlTimestamp:(JavaSqlTimestamp *)theTimestamp;

- (jboolean)beforeWithJavaSqlTimestamp:(JavaSqlTimestamp *)theTimestamp;

- (jint)compareToWithId:(JavaUtilDate *)theObject;

- (jint)compareToWithJavaSqlTimestamp:(JavaSqlTimestamp *)theTimestamp;

- (jboolean)isEqual:(id)theObject;

- (jboolean)equalsWithJavaSqlTimestamp:(JavaSqlTimestamp *)theTimestamp;

- (jint)getNanos;

- (jlong)getTime;

- (void)setNanosWithInt:(jint)n;

- (void)setTimeWithLong:(jlong)theTime;

- (NSString *)description;

+ (JavaSqlTimestamp *)valueOfWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlTimestamp)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaSqlTimestamp *JavaSqlTimestamp_valueOfWithNSString_(NSString *s);

J2OBJC_STATIC_FIELD_GETTER(JavaSqlTimestamp, serialVersionUID, jlong)

FOUNDATION_EXPORT NSString *JavaSqlTimestamp_TIME_FORMAT_REGEX_;
J2OBJC_STATIC_FIELD_GETTER(JavaSqlTimestamp, TIME_FORMAT_REGEX_, NSString *)

FOUNDATION_EXPORT NSString *JavaSqlTimestamp_PADDING_;
J2OBJC_STATIC_FIELD_GETTER(JavaSqlTimestamp, PADDING_, NSString *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlTimestamp)

#endif // _JavaSqlTimestamp_H_
