//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/nio/src/main/java/common/java/nio/DoubleArrayBuffer.java
//
//  Created by tball on 7/15/13.
//

#ifndef _JavaNioDoubleArrayBuffer_H_
#define _JavaNioDoubleArrayBuffer_H_

@class IOSDoubleArray;
@class JavaNioByteOrder;

#import "JreEmulation.h"
#include "java/nio/DoubleBuffer.h"

@interface JavaNioDoubleArrayBuffer : JavaNioDoubleBuffer {
 @public
  IOSDoubleArray *backingArray_;
  int offset_;
}

@property (nonatomic, retain) IOSDoubleArray *backingArray;
@property (nonatomic, assign) int offset;

- (id)initWithDoubleArray:(IOSDoubleArray *)array;
- (id)initWithInt:(int)capacity;
- (id)initWithInt:(int)capacity
  withDoubleArray:(IOSDoubleArray *)backingArray
          withInt:(int)offset;
- (double)get;
- (double)getWithInt:(int)index;
- (JavaNioDoubleBuffer *)getWithDoubleArray:(IOSDoubleArray *)dest
                                    withInt:(int)off
                                    withInt:(int)len;
- (BOOL)isDirect;
- (JavaNioByteOrder *)order;
@end

#endif // _JavaNioDoubleArrayBuffer_H_