/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSString, NSDictionary, NSData, NSURL, NSInputStream;

@interface NSMutableURLRequest : NSURLRequest  {
}

@property(copy) NSString * HTTPMethod;
@property(copy) NSDictionary * allHTTPHeaderFields;
@property(copy) NSData * HTTPBody;
@property(retain) NSInputStream * HTTPBodyStream;
@property bool HTTPShouldHandleCookies;
@property bool HTTPShouldUsePipelining;
@property(copy) NSURL * URL;
@property unsigned long long cachePolicy;
@property double timeoutInterval;
@property(copy) NSURL * mainDocumentURL;
@property unsigned long long networkServiceType;
@property bool allowsCellularAccess;

+ (id)_gkHTTPRequestWithURL:(id)arg1 method:(id)arg2 postData:(id)arg3;
+ (int)hashForPlayerID:(id)arg1;

- (void)setContentDispositionEncodingFallbackArray:(id)arg1;
- (void)_setTimeWindowDuration:(double)arg1;
- (void)_setTimeWindowDelay:(double)arg1;
- (void)setExpectedWorkload:(unsigned long long)arg1;
- (void)setHTTPShouldUsePipelining:(bool)arg1;
- (unsigned long long)requestPriority;
- (void)setRequestPriority:(unsigned long long)arg1;
- (void)setHTTPShouldHandleCookies:(bool)arg1;
- (void)setHTTPUserAgent:(id)arg1;
- (void)setHTTPReferrer:(id)arg1;
- (void)setHTTPExtraCookies:(id)arg1;
- (void)setHTTPContentType:(id)arg1;
- (void)addValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setHTTPMethod:(id)arg1;
- (void)setBoundInterfaceIdentifier:(id)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setNetworkServiceType:(unsigned long long)arg1;
- (void)setMainDocumentURL:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setURL:(id)arg1;
- (void)setAllHTTPHeaderFields:(id)arg1;
- (void)setHTTPBodyStream:(id)arg1;
- (void)setHTTPBody:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)_web_setHTTPUserAgent:(id)arg1;
- (void)_web_setHTTPReferrer:(id)arg1;
- (void)_web_setHTTPContentType:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)aa_addDeviceProvisioningInfoHeadersWithDSIDFromReponse:(id)arg1;
- (void)aa_addiTunesHeadersWithAccount:(id)arg1;
- (void)aa_addLoggedInAppleIDHeaderWithAccount:(id)arg1;
- (void)aa_addDeviceIDHeader;
- (void)aa_addDeviceInternalDevHeaderIfEnabled;
- (void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)arg1;
- (bool)aa_addGrandSlamAuthorizationHeaderWithAccount:(id)arg1 grandslamToken:(id)arg2;
- (void)aa_addDeviceProvisioningInfoHeadersWithAccount:(id)arg1;
- (void)aa_setBodyWithParameters:(id)arg1;
- (void)aa_addBasicAuthorizationHeaderWithAccount:(id)arg1 preferUsingPassword:(bool)arg2;
- (void)setPushToken:(id)arg1;
- (void)setSAPversion:(id)arg1;
- (void)setSAPSignature:(id)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setDeviceUniqueID:(id)arg1;
- (void)setStoreMode:(id)arg1;
- (void)setGameDescriptor:(id)arg1;
- (void)setPlayerID:(id)arg1 hash:(int)arg2 authToken:(id)arg3;
- (void)setInternal:(bool)arg1;
- (void)setRestrictions:(id)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)bindToCommand:(struct __CNPluginCommand { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __CFDictionary {} *x2; unsigned int x3; }*)arg1;

@end
