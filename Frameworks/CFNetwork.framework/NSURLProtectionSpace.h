/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSURLProtectionSpaceInternal, NSString;

@interface NSURLProtectionSpace : NSObject <NSSecureCoding, NSCopying> {
    NSURLProtectionSpaceInternal *_internal;
}

@property(copy,readonly) NSString * realm;
@property(readonly) bool receivesCredentialSecurely;
@property(readonly) bool isProxy;
@property(copy,readonly) NSString * host;
@property(readonly) long long port;
@property(copy,readonly) NSString * proxyType;
@property(copy,readonly) NSString * protocol;
@property(copy,readonly) NSString * authenticationMethod;

+ (bool)supportsSecureCoding;

- (id)protocol;
- (struct __SecTrust { }*)serverTrust;
- (id)distinguishedNames;
- (id)initWithHost:(id)arg1 port:(long long)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (id)initWithProxyHost:(id)arg1 port:(long long)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (struct _CFURLProtectionSpace { }*)_CFURLProtectionSpace;
- (id)init;
- (long long)port;
- (id)host;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (bool)receivesCredentialSecurely;
- (id)proxyType;
- (id)realm;
- (id)authenticationMethod;
- (id)_internalInit;
- (struct _CFURLProtectionSpace { }*)_cfurlprtotectionspace;
- (id)_initWithCFURLProtectionSpace:(struct _CFURLProtectionSpace { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)isProxy;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
