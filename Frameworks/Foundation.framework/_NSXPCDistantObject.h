/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSXPCInterface, NSXPCConnection;

@interface _NSXPCDistantObject : NSObject <NSXPCProxyCreating, NSSecureCoding> {
    NSXPCConnection *_connection;
    NSXPCInterface *_remoteInterface;
    struct __CFDictionary { } *_knownSelectors;
    int _selectorLock;
    unsigned long long _proxyNumber;
    bool_exported;
}

@property unsigned long long _proxyNumber;
@property(retain) NSXPCConnection * _connection;
@property(retain) NSXPCInterface * _remoteInterface;
@property bool _exported;

+ (bool)supportsSecureCoding;

- (id)remoteObjectProxyWithErrorHandler:(id)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)conformsToProtocol:(id)arg1;
- (id)remoteObjectProxy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)set_exported:(bool)arg1;
- (bool)_exported;
- (id)_remoteInterface;
- (void)set_proxyNumber:(unsigned long long)arg1;
- (unsigned long long)_proxyNumber;
- (void)set_remoteInterface:(id)arg1;
- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(id)arg2;
- (id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(id)arg2;
- (id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 interface:(id)arg3;
- (id)_initWithConnection:(id)arg1 exportedObject:(id)arg2 interface:(id)arg3;
- (void)set_connection:(id)arg1;
- (id)_connection;

@end
