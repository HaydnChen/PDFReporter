//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/fortress/Engine.java
//

#ifndef _OrgApacheHarmonySecurityFortressEngine_H_
#define _OrgApacheHarmonySecurityFortressEngine_H_

@class JavaSecurityNoSuchAlgorithmException;
@class JavaSecurityProvider;
@class JavaSecurityProvider_Service;
@class JavaUtilArrayList;
@class OrgApacheHarmonySecurityFortressEngine_ServiceCacheEntry;
@class OrgApacheHarmonySecurityFortressEngine_SpiAndProvider;
@protocol OrgApacheHarmonySecurityFortressSecurityAccess;

#include "J2ObjC_header.h"

@interface OrgApacheHarmonySecurityFortressEngine : NSObject {
}

- (instancetype)initWithNSString:(NSString *)serviceName;

- (OrgApacheHarmonySecurityFortressEngine_SpiAndProvider *)getInstanceWithNSString:(NSString *)algorithm
                                                                            withId:(id)param;

- (OrgApacheHarmonySecurityFortressEngine_SpiAndProvider *)getInstanceWithJavaSecurityProvider_Service:(JavaSecurityProvider_Service *)service
                                                                                          withNSString:(NSString *)param;

- (JavaUtilArrayList *)getServicesWithNSString:(NSString *)algorithm;

- (id)getInstanceWithNSString:(NSString *)algorithm
     withJavaSecurityProvider:(JavaSecurityProvider *)provider
                       withId:(id)param;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityFortressEngine)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT id<OrgApacheHarmonySecurityFortressSecurityAccess> OrgApacheHarmonySecurityFortressEngine_door_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityFortressEngine, door_, id<OrgApacheHarmonySecurityFortressSecurityAccess>)
J2OBJC_STATIC_FIELD_SETTER(OrgApacheHarmonySecurityFortressEngine, door_, id<OrgApacheHarmonySecurityFortressSecurityAccess>)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityFortressEngine)

@interface OrgApacheHarmonySecurityFortressEngine_ServiceCacheEntry : NSObject {
}

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityFortressEngine_ServiceCacheEntry)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityFortressEngine_ServiceCacheEntry)

@interface OrgApacheHarmonySecurityFortressEngine_SpiAndProvider : NSObject {
 @public
  id spi_;
  JavaSecurityProvider *provider_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityFortressEngine_SpiAndProvider)

J2OBJC_FIELD_SETTER(OrgApacheHarmonySecurityFortressEngine_SpiAndProvider, spi_, id)
J2OBJC_FIELD_SETTER(OrgApacheHarmonySecurityFortressEngine_SpiAndProvider, provider_, JavaSecurityProvider *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityFortressEngine_SpiAndProvider)

#endif // _OrgApacheHarmonySecurityFortressEngine_H_
