//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/base/CaseFormat.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonBaseCaseFormat_RESTRICT
#define ComGoogleCommonBaseCaseFormat_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseCaseFormat_RESTRICT
#if !defined (_ComGoogleCommonBaseCaseFormatEnum_) && (ComGoogleCommonBaseCaseFormat_INCLUDE_ALL || ComGoogleCommonBaseCaseFormatEnum_INCLUDE)
#define _ComGoogleCommonBaseCaseFormatEnum_

@class ComGoogleCommonBaseCharMatcher;

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"


typedef NS_ENUM(NSUInteger, ComGoogleCommonBaseCaseFormat) {
  ComGoogleCommonBaseCaseFormat_LOWER_HYPHEN = 0,
  ComGoogleCommonBaseCaseFormat_LOWER_UNDERSCORE = 1,
  ComGoogleCommonBaseCaseFormat_LOWER_CAMEL = 2,
  ComGoogleCommonBaseCaseFormat_UPPER_CAMEL = 3,
  ComGoogleCommonBaseCaseFormat_UPPER_UNDERSCORE = 4,
};

@interface ComGoogleCommonBaseCaseFormatEnum : JavaLangEnum < NSCopying > {
}

- (instancetype)initWithComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)wordBoundary
                                          withNSString:(NSString *)wordSeparator
                                          withNSString:(NSString *)__name
                                               withInt:(jint)__ordinal;

- (NSString *)toWithComGoogleCommonBaseCaseFormatEnum:(ComGoogleCommonBaseCaseFormatEnum *)format
                                         withNSString:(NSString *)str;

- (NSString *)convertWithComGoogleCommonBaseCaseFormatEnum:(ComGoogleCommonBaseCaseFormatEnum *)format
                                              withNSString:(NSString *)s;

- (NSString *)normalizeWordWithNSString:(NSString *)word;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonBaseCaseFormatEnum_values();

+ (ComGoogleCommonBaseCaseFormatEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComGoogleCommonBaseCaseFormatEnum *ComGoogleCommonBaseCaseFormatEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonBaseCaseFormatEnum_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonBaseCaseFormatEnum)

FOUNDATION_EXPORT ComGoogleCommonBaseCaseFormatEnum *ComGoogleCommonBaseCaseFormatEnum_values_[];

#define ComGoogleCommonBaseCaseFormatEnum_LOWER_HYPHEN ComGoogleCommonBaseCaseFormatEnum_values_[ComGoogleCommonBaseCaseFormat_LOWER_HYPHEN]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonBaseCaseFormatEnum, LOWER_HYPHEN)

#define ComGoogleCommonBaseCaseFormatEnum_LOWER_UNDERSCORE ComGoogleCommonBaseCaseFormatEnum_values_[ComGoogleCommonBaseCaseFormat_LOWER_UNDERSCORE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonBaseCaseFormatEnum, LOWER_UNDERSCORE)

#define ComGoogleCommonBaseCaseFormatEnum_LOWER_CAMEL ComGoogleCommonBaseCaseFormatEnum_values_[ComGoogleCommonBaseCaseFormat_LOWER_CAMEL]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonBaseCaseFormatEnum, LOWER_CAMEL)

#define ComGoogleCommonBaseCaseFormatEnum_UPPER_CAMEL ComGoogleCommonBaseCaseFormatEnum_values_[ComGoogleCommonBaseCaseFormat_UPPER_CAMEL]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonBaseCaseFormatEnum, UPPER_CAMEL)

#define ComGoogleCommonBaseCaseFormatEnum_UPPER_UNDERSCORE ComGoogleCommonBaseCaseFormatEnum_values_[ComGoogleCommonBaseCaseFormat_UPPER_UNDERSCORE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonBaseCaseFormatEnum, UPPER_UNDERSCORE)
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseCaseFormatEnum)
#if !defined (_ComGoogleCommonBaseCaseFormatEnum_$1_) && (ComGoogleCommonBaseCaseFormat_INCLUDE_ALL || ComGoogleCommonBaseCaseFormatEnum_$1_INCLUDE)
#define _ComGoogleCommonBaseCaseFormatEnum_$1_

@class ComGoogleCommonBaseCharMatcher;

#define ComGoogleCommonBaseCaseFormatEnum_RESTRICT 1
#define ComGoogleCommonBaseCaseFormatEnum_INCLUDE 1
#include "com/google/common/base/CaseFormat.h"


@interface ComGoogleCommonBaseCaseFormatEnum_$1 : ComGoogleCommonBaseCaseFormatEnum {
}

- (NSString *)normalizeWordWithNSString:(NSString *)word;

- (NSString *)convertWithComGoogleCommonBaseCaseFormatEnum:(ComGoogleCommonBaseCaseFormatEnum *)format
                                              withNSString:(NSString *)s;

- (instancetype)initWithComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)arg$0
                                          withNSString:(NSString *)arg$1
                                          withNSString:(NSString *)__name
                                               withInt:(jint)__ordinal;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseCaseFormatEnum_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseCaseFormatEnum_$1)
#if !defined (_ComGoogleCommonBaseCaseFormatEnum_$2_) && (ComGoogleCommonBaseCaseFormat_INCLUDE_ALL || ComGoogleCommonBaseCaseFormatEnum_$2_INCLUDE)
#define _ComGoogleCommonBaseCaseFormatEnum_$2_

@class ComGoogleCommonBaseCharMatcher;

#define ComGoogleCommonBaseCaseFormatEnum_RESTRICT 1
#define ComGoogleCommonBaseCaseFormatEnum_INCLUDE 1
#include "com/google/common/base/CaseFormat.h"


@interface ComGoogleCommonBaseCaseFormatEnum_$2 : ComGoogleCommonBaseCaseFormatEnum {
}

- (NSString *)normalizeWordWithNSString:(NSString *)word;

- (NSString *)convertWithComGoogleCommonBaseCaseFormatEnum:(ComGoogleCommonBaseCaseFormatEnum *)format
                                              withNSString:(NSString *)s;

- (instancetype)initWithComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)arg$0
                                          withNSString:(NSString *)arg$1
                                          withNSString:(NSString *)__name
                                               withInt:(jint)__ordinal;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseCaseFormatEnum_$2)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseCaseFormatEnum_$2)
#if !defined (_ComGoogleCommonBaseCaseFormatEnum_$3_) && (ComGoogleCommonBaseCaseFormat_INCLUDE_ALL || ComGoogleCommonBaseCaseFormatEnum_$3_INCLUDE)
#define _ComGoogleCommonBaseCaseFormatEnum_$3_

@class ComGoogleCommonBaseCharMatcher;

#define ComGoogleCommonBaseCaseFormatEnum_RESTRICT 1
#define ComGoogleCommonBaseCaseFormatEnum_INCLUDE 1
#include "com/google/common/base/CaseFormat.h"


@interface ComGoogleCommonBaseCaseFormatEnum_$3 : ComGoogleCommonBaseCaseFormatEnum {
}

- (NSString *)normalizeWordWithNSString:(NSString *)word;

- (instancetype)initWithComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)arg$0
                                          withNSString:(NSString *)arg$1
                                          withNSString:(NSString *)__name
                                               withInt:(jint)__ordinal;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseCaseFormatEnum_$3)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseCaseFormatEnum_$3)
#if !defined (_ComGoogleCommonBaseCaseFormatEnum_$4_) && (ComGoogleCommonBaseCaseFormat_INCLUDE_ALL || ComGoogleCommonBaseCaseFormatEnum_$4_INCLUDE)
#define _ComGoogleCommonBaseCaseFormatEnum_$4_

@class ComGoogleCommonBaseCharMatcher;

#define ComGoogleCommonBaseCaseFormatEnum_RESTRICT 1
#define ComGoogleCommonBaseCaseFormatEnum_INCLUDE 1
#include "com/google/common/base/CaseFormat.h"


@interface ComGoogleCommonBaseCaseFormatEnum_$4 : ComGoogleCommonBaseCaseFormatEnum {
}

- (NSString *)normalizeWordWithNSString:(NSString *)word;

- (instancetype)initWithComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)arg$0
                                          withNSString:(NSString *)arg$1
                                          withNSString:(NSString *)__name
                                               withInt:(jint)__ordinal;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseCaseFormatEnum_$4)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseCaseFormatEnum_$4)
#if !defined (_ComGoogleCommonBaseCaseFormatEnum_$5_) && (ComGoogleCommonBaseCaseFormat_INCLUDE_ALL || ComGoogleCommonBaseCaseFormatEnum_$5_INCLUDE)
#define _ComGoogleCommonBaseCaseFormatEnum_$5_

@class ComGoogleCommonBaseCharMatcher;

#define ComGoogleCommonBaseCaseFormatEnum_RESTRICT 1
#define ComGoogleCommonBaseCaseFormatEnum_INCLUDE 1
#include "com/google/common/base/CaseFormat.h"


@interface ComGoogleCommonBaseCaseFormatEnum_$5 : ComGoogleCommonBaseCaseFormatEnum {
}

- (NSString *)normalizeWordWithNSString:(NSString *)word;

- (NSString *)convertWithComGoogleCommonBaseCaseFormatEnum:(ComGoogleCommonBaseCaseFormatEnum *)format
                                              withNSString:(NSString *)s;

- (instancetype)initWithComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)arg$0
                                          withNSString:(NSString *)arg$1
                                          withNSString:(NSString *)__name
                                               withInt:(jint)__ordinal;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseCaseFormatEnum_$5)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseCaseFormatEnum_$5)