//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/SocketChannelImpl.java
//

#ifndef _JavaNioSocketChannelImpl_H_
#define _JavaNioSocketChannelImpl_H_

@class IOSByteArray;
@class IOSObjectArray;
@class JavaIoFileDescriptor;
@class JavaIoIOException;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaNetInetAddress;
@class JavaNetInetSocketAddress;
@class JavaNetPlainSocketImpl;
@class JavaNetSocketAddress;
@class JavaNioByteBuffer;
@class JavaNioChannelsSpiSelectorProvider;
@class JavaNioSocketChannelImpl_SocketAdapter;
@protocol JavaNetSocketOption;
@protocol JavaUtilSet;

#include "J2ObjC_header.h"
#include "java/io/FilterInputStream.h"
#include "java/io/FilterOutputStream.h"
#include "java/net/Socket.h"
#include "java/nio/FileDescriptorChannel.h"
#include "java/nio/channels/SocketChannel.h"

#define JavaNioSocketChannelImpl_SOCKET_STATUS_CLOSED 3
#define JavaNioSocketChannelImpl_SOCKET_STATUS_CONNECTED 2
#define JavaNioSocketChannelImpl_SOCKET_STATUS_PENDING 1
#define JavaNioSocketChannelImpl_SOCKET_STATUS_UNCONNECTED 0
#define JavaNioSocketChannelImpl_SOCKET_STATUS_UNINITIALIZED -1

@interface JavaNioSocketChannelImpl : JavaNioChannelsSocketChannel < JavaNioFileDescriptorChannel > {
}

- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)selectorProvider;

- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)selectorProvider
                                               withBoolean:(jboolean)connect;

- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)selectorProvider
                                  withJavaIoFileDescriptor:(JavaIoFileDescriptor *)existingFd;

- (JavaNetSocket *)socket;

- (JavaNioChannelsSocketChannel *)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)local;

- (void)onBindWithBoolean:(jboolean)updateSocketState;

- (JavaNetSocketAddress *)getLocalAddress;

- (id)getOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option;

- (JavaNioChannelsSocketChannel *)setOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option
                                                            withId:(id)value;

- (id<JavaUtilSet>)supportedOptions;

- (jboolean)isConnected;

- (jboolean)isConnectionPending;

- (jboolean)connectWithJavaNetSocketAddress:(JavaNetSocketAddress *)socketAddress;

- (void)onConnectStatusChangedWithJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)address
                                                   withInt:(jint)status
                                               withBoolean:(jboolean)updateSocketState;

- (jboolean)finishConnect;

- (jint)readWithJavaNioByteBuffer:(JavaNioByteBuffer *)dst;

- (jlong)readWithJavaNioByteBufferArray:(IOSObjectArray *)targets
                                withInt:(jint)offset
                                withInt:(jint)length;

- (jint)writeWithJavaNioByteBuffer:(JavaNioByteBuffer *)src;

- (jlong)writeWithJavaNioByteBufferArray:(IOSObjectArray *)sources
                                 withInt:(jint)offset
                                 withInt:(jint)length;

+ (JavaNetInetSocketAddress *)validateAddressWithJavaNetSocketAddress:(JavaNetSocketAddress *)socketAddress;

- (void)implCloseSelectableChannel;

- (void)implConfigureBlockingWithBoolean:(jboolean)blocking;

- (JavaIoFileDescriptor *)getFD;

- (void)onAcceptWithJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)remoteAddress
                                 withBoolean:(jboolean)updateSocketState;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioSocketChannelImpl)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaNetInetSocketAddress *JavaNioSocketChannelImpl_validateAddressWithJavaNetSocketAddress_(JavaNetSocketAddress *socketAddress);

J2OBJC_STATIC_FIELD_GETTER(JavaNioSocketChannelImpl, SOCKET_STATUS_UNINITIALIZED, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNioSocketChannelImpl, SOCKET_STATUS_UNCONNECTED, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNioSocketChannelImpl, SOCKET_STATUS_PENDING, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNioSocketChannelImpl, SOCKET_STATUS_CONNECTED, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNioSocketChannelImpl, SOCKET_STATUS_CLOSED, jint)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioSocketChannelImpl)

@interface JavaNioSocketChannelImpl_SocketAdapter : JavaNetSocket {
}

- (instancetype)initWithJavaNetPlainSocketImpl:(JavaNetPlainSocketImpl *)socketImpl
                  withJavaNioSocketChannelImpl:(JavaNioSocketChannelImpl *)channel;

- (JavaNioChannelsSocketChannel *)getChannel;

- (void)connectWithJavaNetSocketAddress:(JavaNetSocketAddress *)remoteAddr
                                withInt:(jint)timeout;

- (void)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)localAddr;

- (void)close;

- (JavaIoOutputStream *)getOutputStream;

- (JavaIoInputStream *)getInputStream;

- (JavaIoFileDescriptor *)getFileDescriptor$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioSocketChannelImpl_SocketAdapter)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioSocketChannelImpl_SocketAdapter)

@interface JavaNioSocketChannelImpl_BlockingCheckOutputStream : JavaIoFilterOutputStream {
}

- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
          withJavaNioChannelsSocketChannel:(JavaNioChannelsSocketChannel *)channel;

- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(jint)offset
                   withInt:(jint)byteCount;

- (void)writeWithInt:(jint)oneByte;

- (void)writeWithByteArray:(IOSByteArray *)buffer;

- (void)close;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioSocketChannelImpl_BlockingCheckOutputStream)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioSocketChannelImpl_BlockingCheckOutputStream)

@interface JavaNioSocketChannelImpl_BlockingCheckInputStream : JavaIoFilterInputStream {
}

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
         withJavaNioChannelsSocketChannel:(JavaNioChannelsSocketChannel *)channel;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

- (jint)readWithByteArray:(IOSByteArray *)buffer;

- (void)close;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioSocketChannelImpl_BlockingCheckInputStream)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioSocketChannelImpl_BlockingCheckInputStream)

#endif // _JavaNioSocketChannelImpl_H_
