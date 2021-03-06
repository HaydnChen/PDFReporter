//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/cache/AbstractCache.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCacheAbstractCache_RESTRICT
#define ComGoogleCommonCacheAbstractCache_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCacheAbstractCache_RESTRICT
#if ComGoogleCommonCacheAbstractCache_SimpleStatsCounter_INCLUDE
#define ComGoogleCommonCacheAbstractCache_StatsCounter_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonCacheAbstractCache_) && (ComGoogleCommonCacheAbstractCache_INCLUDE_ALL || ComGoogleCommonCacheAbstractCache_INCLUDE)
#define _ComGoogleCommonCacheAbstractCache_

@class ComGoogleCommonCacheCacheStats;
@class ComGoogleCommonCollectImmutableMap;
@protocol JavaLangIterable;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentConcurrentMap;
@protocol JavaUtilMap;

#define ComGoogleCommonCacheCache_RESTRICT 1
#define ComGoogleCommonCacheCache_INCLUDE 1
#include "com/google/common/cache/Cache.h"


@interface ComGoogleCommonCacheAbstractCache : NSObject < ComGoogleCommonCacheCache > {
}

- (instancetype)init;

- (id)getWithId:(id)key
withJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)valueLoader;

- (ComGoogleCommonCollectImmutableMap *)getAllPresentWithJavaLangIterable:(id<JavaLangIterable>)keys;

- (void)putWithId:(id)key
           withId:(id)value;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)m;

- (void)cleanUp;

- (jlong)size;

- (void)invalidateWithId:(id)key;

- (void)invalidateAllWithJavaLangIterable:(id<JavaLangIterable>)keys;

- (void)invalidateAll;

- (ComGoogleCommonCacheCacheStats *)stats;

- (id<JavaUtilConcurrentConcurrentMap>)asMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheAbstractCache)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheAbstractCache)
#if !defined (_ComGoogleCommonCacheAbstractCache_StatsCounter_) && (ComGoogleCommonCacheAbstractCache_INCLUDE_ALL || ComGoogleCommonCacheAbstractCache_StatsCounter_INCLUDE)
#define _ComGoogleCommonCacheAbstractCache_StatsCounter_

@class ComGoogleCommonCacheCacheStats;


@protocol ComGoogleCommonCacheAbstractCache_StatsCounter < NSObject, JavaObject >

- (void)recordHitsWithInt:(jint)count;

- (void)recordMissesWithInt:(jint)count;

- (void)recordLoadSuccessWithLong:(jlong)loadTime;

- (void)recordLoadExceptionWithLong:(jlong)loadTime;

- (void)recordEviction;

- (ComGoogleCommonCacheCacheStats *)snapshot;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheAbstractCache_StatsCounter)
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheAbstractCache_StatsCounter)
#if !defined (_ComGoogleCommonCacheAbstractCache_SimpleStatsCounter_) && (ComGoogleCommonCacheAbstractCache_INCLUDE_ALL || ComGoogleCommonCacheAbstractCache_SimpleStatsCounter_INCLUDE)
#define _ComGoogleCommonCacheAbstractCache_SimpleStatsCounter_

@class ComGoogleCommonCacheCacheStats;
@protocol ComGoogleCommonCacheLongAddable;


@interface ComGoogleCommonCacheAbstractCache_SimpleStatsCounter : NSObject < ComGoogleCommonCacheAbstractCache_StatsCounter > {
}

- (instancetype)init;

- (void)recordHitsWithInt:(jint)count;

- (void)recordMissesWithInt:(jint)count;

- (void)recordLoadSuccessWithLong:(jlong)loadTime;

- (void)recordLoadExceptionWithLong:(jlong)loadTime;

- (void)recordEviction;

- (ComGoogleCommonCacheCacheStats *)snapshot;

- (void)incrementByWithComGoogleCommonCacheAbstractCache_StatsCounter:(id<ComGoogleCommonCacheAbstractCache_StatsCounter>)other;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheAbstractCache_SimpleStatsCounter)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheAbstractCache_SimpleStatsCounter)
