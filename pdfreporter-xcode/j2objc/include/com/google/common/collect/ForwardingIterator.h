//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/ForwardingIterator.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectForwardingIterator_RESTRICT
#define ComGoogleCommonCollectForwardingIterator_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingIterator_RESTRICT
#if !defined (_ComGoogleCommonCollectForwardingIterator_) && (ComGoogleCommonCollectForwardingIterator_INCLUDE_ALL || ComGoogleCommonCollectForwardingIterator_INCLUDE)
#define _ComGoogleCommonCollectForwardingIterator_

#define ComGoogleCommonCollectForwardingObject_RESTRICT 1
#define ComGoogleCommonCollectForwardingObject_INCLUDE 1
#include "com/google/common/collect/ForwardingObject.h"

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include "java/util/Iterator.h"


@interface ComGoogleCommonCollectForwardingIterator : ComGoogleCommonCollectForwardingObject < JavaUtilIterator > {
}

- (instancetype)init;

- (id<JavaUtilIterator>)delegate;

- (jboolean)hasNext;

- (id)next;

- (void)remove;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingIterator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingIterator)