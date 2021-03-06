//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/regex/Matcher.java
//

#ifndef _JavaUtilRegexMatcher_H_
#define _JavaUtilRegexMatcher_H_

@class IOSCharArray;
@class IOSIntArray;
@class JavaLangStringBuffer;
@class JavaUtilRegexPattern;
@protocol JavaLangCharSequence;

#include "J2ObjC_header.h"
#include "java/util/regex/MatchResult.h"

@interface JavaUtilRegexMatcher : NSObject < JavaUtilRegexMatchResult > {
}

- (instancetype)initWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern
                    withJavaLangCharSequence:(id<JavaLangCharSequence>)input;

- (JavaUtilRegexMatcher *)appendReplacementWithJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
                                                       withNSString:(NSString *)replacement;

- (JavaUtilRegexMatcher *)reset;

- (JavaUtilRegexMatcher *)resetWithJavaLangCharSequence:(id<JavaLangCharSequence>)input;

- (JavaUtilRegexMatcher *)usePatternWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

- (JavaUtilRegexMatcher *)regionWithInt:(jint)start
                                withInt:(jint)end;

- (JavaLangStringBuffer *)appendTailWithJavaLangStringBuffer:(JavaLangStringBuffer *)buffer;

- (NSString *)replaceFirstWithNSString:(NSString *)replacement;

- (NSString *)replaceAllWithNSString:(NSString *)replacement;

- (JavaUtilRegexPattern *)pattern;

- (jboolean)findWithInt:(jint)start;

- (jboolean)find;

- (jboolean)lookingAt;

- (jboolean)matches;

+ (NSString *)quoteReplacementWithNSString:(NSString *)s;

- (id<JavaUtilRegexMatchResult>)toMatchResult;

- (JavaUtilRegexMatcher *)useAnchoringBoundsWithBoolean:(jboolean)value;

- (jboolean)hasAnchoringBounds;

- (JavaUtilRegexMatcher *)useTransparentBoundsWithBoolean:(jboolean)value;

- (jboolean)hasTransparentBounds;

- (jint)regionStart;

- (jint)regionEnd;

- (jboolean)requireEnd;

- (jboolean)hitEnd;

- (void)dealloc;

- (NSString *)description;

- (jint)end;

- (jint)endWithInt:(jint)group;

- (NSString *)group;

- (NSString *)groupWithInt:(jint)group;

- (jint)groupCount;

- (jint)start;

- (jint)startWithInt:(jint)group;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilRegexMatcher)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT NSString *JavaUtilRegexMatcher_quoteReplacementWithNSString_(NSString *s);
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilRegexMatcher)

#endif // _JavaUtilRegexMatcher_H_
