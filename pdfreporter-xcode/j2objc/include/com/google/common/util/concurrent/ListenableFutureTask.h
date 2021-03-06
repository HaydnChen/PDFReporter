//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/util/concurrent/ListenableFutureTask.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonUtilConcurrentListenableFutureTask_RESTRICT
#define ComGoogleCommonUtilConcurrentListenableFutureTask_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentListenableFutureTask_RESTRICT
#if !defined (_ComGoogleCommonUtilConcurrentListenableFutureTask_) && (ComGoogleCommonUtilConcurrentListenableFutureTask_INCLUDE_ALL || ComGoogleCommonUtilConcurrentListenableFutureTask_INCLUDE)
#define _ComGoogleCommonUtilConcurrentListenableFutureTask_

@class ComGoogleCommonUtilConcurrentExecutionList;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentExecutor;

#define JavaUtilConcurrentFutureTask_RESTRICT 1
#define JavaUtilConcurrentFutureTask_INCLUDE 1
#include "java/util/concurrent/FutureTask.h"

#define ComGoogleCommonUtilConcurrentListenableFuture_RESTRICT 1
#define ComGoogleCommonUtilConcurrentListenableFuture_INCLUDE 1
#include "com/google/common/util/concurrent/ListenableFuture.h"


@interface ComGoogleCommonUtilConcurrentListenableFutureTask : JavaUtilConcurrentFutureTask < ComGoogleCommonUtilConcurrentListenableFuture > {
}

+ (ComGoogleCommonUtilConcurrentListenableFutureTask *)createWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable;

+ (ComGoogleCommonUtilConcurrentListenableFutureTask *)createWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
                                                                           withId:(id)result;

- (instancetype)initWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable;

- (instancetype)initWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
                                  withId:(id)result;

- (void)addListenerWithJavaLangRunnable:(id<JavaLangRunnable>)listener
         withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)exec;

- (void)done;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentListenableFutureTask)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentListenableFutureTask *ComGoogleCommonUtilConcurrentListenableFutureTask_createWithJavaUtilConcurrentCallable_(id<JavaUtilConcurrentCallable> callable);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentListenableFutureTask *ComGoogleCommonUtilConcurrentListenableFutureTask_createWithJavaLangRunnable_withId_(id<JavaLangRunnable> runnable, id result);
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentListenableFutureTask)
