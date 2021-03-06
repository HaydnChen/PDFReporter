//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Locale.java
//

#ifndef _JavaUtilLocale_H_
#define _JavaUtilLocale_H_

@class IOSObjectArray;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

#define JavaUtilLocale_serialVersionUID 9149081749638150636LL

@interface JavaUtilLocale : NSObject < NSCopying, JavaIoSerializable > {
}

- (instancetype)initWithNSString:(NSString *)language;

- (instancetype)initWithNSString:(NSString *)language
                    withNSString:(NSString *)country;

- (instancetype)initWithNSString:(NSString *)language
                    withNSString:(NSString *)country
                    withNSString:(NSString *)variant;

- (id)clone;

- (jboolean)isEqual:(id)object;

+ (IOSObjectArray *)getAvailableLocales;

- (NSString *)getCountry;

+ (JavaUtilLocale *)getDefault;

- (NSString *)getDisplayCountry;

- (NSString *)getDisplayCountryWithJavaUtilLocale:(JavaUtilLocale *)locale;

- (NSString *)getDisplayLanguage;

- (NSString *)getDisplayLanguageWithJavaUtilLocale:(JavaUtilLocale *)locale;

- (NSString *)getDisplayName;

- (NSString *)getDisplayNameWithJavaUtilLocale:(JavaUtilLocale *)locale;

- (NSString *)getDisplayVariant;

- (NSString *)getDisplayVariantWithJavaUtilLocale:(JavaUtilLocale *)locale;

- (NSString *)getISO3Country;

- (NSString *)getISO3Language;

+ (IOSObjectArray *)getISOCountries;

+ (IOSObjectArray *)getISOLanguages;

- (NSString *)getLanguage;

- (NSString *)getVariant;

- (NSUInteger)hash;

+ (void)setDefaultWithJavaUtilLocale:(JavaUtilLocale *)locale;

- (NSString *)description;

@end

FOUNDATION_EXPORT BOOL JavaUtilLocale_initialized;
J2OBJC_STATIC_INIT(JavaUtilLocale)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT IOSObjectArray *JavaUtilLocale_getAvailableLocales();

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_getDefault();

FOUNDATION_EXPORT IOSObjectArray *JavaUtilLocale_getISOCountries();

FOUNDATION_EXPORT IOSObjectArray *JavaUtilLocale_getISOLanguages();

FOUNDATION_EXPORT void JavaUtilLocale_setDefaultWithJavaUtilLocale_(JavaUtilLocale *locale);

J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, serialVersionUID, jlong)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_CANADA_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, CANADA_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_CANADA_FRENCH_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, CANADA_FRENCH_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_CHINA_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, CHINA_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_CHINESE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, CHINESE_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_ENGLISH_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, ENGLISH_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_FRANCE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, FRANCE_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_FRENCH_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, FRENCH_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_GERMAN_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, GERMAN_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_GERMANY_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, GERMANY_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_ITALIAN_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, ITALIAN_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_ITALY_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, ITALY_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_JAPAN_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, JAPAN_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_JAPANESE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, JAPANESE_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_KOREA_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, KOREA_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_KOREAN_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, KOREAN_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_PRC_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, PRC_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_ROOT_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, ROOT_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_SIMPLIFIED_CHINESE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, SIMPLIFIED_CHINESE_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_TAIWAN_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, TAIWAN_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_TRADITIONAL_CHINESE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, TRADITIONAL_CHINESE_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_UK_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, UK_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_US_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, US_, JavaUtilLocale *)

FOUNDATION_EXPORT JavaUtilLocale *JavaUtilLocale_defaultLocale_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLocale, defaultLocale_, JavaUtilLocale *)
J2OBJC_STATIC_FIELD_SETTER(JavaUtilLocale, defaultLocale_, JavaUtilLocale *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLocale)

#endif // _JavaUtilLocale_H_
