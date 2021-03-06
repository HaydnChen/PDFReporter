//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/RandomAccessFile.java
//

#ifndef _JavaIoRandomAccessFile_H_
#define _JavaIoRandomAccessFile_H_

@class DalvikSystemCloseGuard;
@class IOSByteArray;
@class JavaIoFile;
@class JavaIoFileDescriptor;
@class JavaNioChannelsFileChannel;

#include "J2ObjC_header.h"
#include "java/io/Closeable.h"
#include "java/io/DataInput.h"
#include "java/io/DataOutput.h"

@interface JavaIoRandomAccessFile : NSObject < JavaIoDataInput, JavaIoDataOutput, JavaIoCloseable > {
}

- (instancetype)initWithJavaIoFile:(JavaIoFile *)file
                      withNSString:(NSString *)mode;

- (instancetype)initWithNSString:(NSString *)fileName
                    withNSString:(NSString *)mode;

- (void)close;

- (void)dealloc;

- (JavaNioChannelsFileChannel *)getChannel;

- (JavaIoFileDescriptor *)getFD;

- (jlong)getFilePointer;

- (jlong)length;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)buffer;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

- (jboolean)readBoolean;

- (jbyte)readByte;

- (jchar)readChar;

- (jdouble)readDouble;

- (jfloat)readFloat;

- (void)readFullyWithByteArray:(IOSByteArray *)dst;

- (void)readFullyWithByteArray:(IOSByteArray *)dst
                       withInt:(jint)offset
                       withInt:(jint)byteCount;

- (jint)readInt;

- (NSString *)readLine;

- (jlong)readLong;

- (jshort)readShort;

- (jint)readUnsignedByte;

- (jint)readUnsignedShort;

- (NSString *)readUTF;

- (void)seekWithLong:(jlong)offset;

- (void)setLengthWithLong:(jlong)newLength;

- (jint)skipBytesWithInt:(jint)count;

- (void)writeWithByteArray:(IOSByteArray *)buffer;

- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(jint)byteOffset
                   withInt:(jint)byteCount;

- (void)writeWithInt:(jint)oneByte;

- (void)writeBooleanWithBoolean:(jboolean)val;

- (void)writeByteWithInt:(jint)val;

- (void)writeBytesWithNSString:(NSString *)str;

- (void)writeCharWithInt:(jint)val;

- (void)writeCharsWithNSString:(NSString *)str;

- (void)writeDoubleWithDouble:(jdouble)val;

- (void)writeFloatWithFloat:(jfloat)val;

- (void)writeIntWithInt:(jint)val;

- (void)writeLongWithLong:(jlong)val;

- (void)writeShortWithInt:(jint)val;

- (void)writeUTFWithNSString:(NSString *)str;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoRandomAccessFile)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaIoRandomAccessFile)

#endif // _JavaIoRandomAccessFile_H_
