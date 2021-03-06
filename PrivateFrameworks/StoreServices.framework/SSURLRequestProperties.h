/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSData, NSString, NSURL, NSArray, NSDictionary, NSInputStream, NSObject<OS_dispatch_queue>;

@interface SSURLRequestProperties : NSObject <SSXPCCoding, NSCoding, NSCopying, NSMutableCopying> {
    long long _allowedRetryCount;
    bool_allowsBootstrapCellularData;
    unsigned long long _cachePolicy;
    NSString *_clientAuditBundleIdentifier;
    NSData *_clientAuditTokenData;
    NSString *_clientIdentifier;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _expectedContentLength;
    NSData *_httpBody;
    NSInputStream *_httpBodyStream;
    NSDictionary *_httpHeaders;
    NSString *_httpMethod;
    bool_isITunesStoreRequest;
    long long _kbsyncType;
    bool_largeDownload;
    unsigned long long _networkServiceType;
    NSDictionary *_requestParameters;
    BOOL _requiresExtendedValidationCertificates;
    bool_requiresHTTPS;
    bool_shouldDecodeResponse;
    bool_shouldDisableCellular;
    bool_shouldDisableCellularFallback;
    bool_shouldProcessProtocol;
    bool_shouldSendSecureToken;
    bool_shouldSetCookies;
    double _timeoutInterval;
    NSString *_urlBagKey;
    long long _urlBagType;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _urlBagURLBlock;

    NSArray *_urls;
    NSArray *_userAgentComponents;
}

@property(readonly) long long allowedRetryCount;
@property(copy,readonly) NSString * clientIdentifier;
@property(readonly) unsigned long long cachePolicy;
@property(readonly) long long expectedContentLength;
@property(copy,readonly) NSData * HTTPBody;
@property(copy,readonly) NSDictionary * HTTPHeaders;
@property(copy,readonly) NSString * HTTPMethod;
@property(getter=isITunesStoreRequest,readonly) bool ITunesStoreRequest;
@property(readonly) unsigned long long networkServiceType;
@property(copy,readonly) NSDictionary * requestParameters;
@property(readonly) double timeoutInterval;
@property(copy,readonly) NSString * URLBagKey;
@property(retain,readonly) NSURL * URL;
@property(copy,readonly) NSArray * userAgentComponents;
@property(readonly) bool allowsBootstrapCellularData;
@property(readonly) bool canBeResolved;
@property(copy,readonly) NSString * clientAuditBundleIdentifier;
@property(copy,readonly) NSData * clientAuditTokenData;
@property(retain,readonly) NSInputStream * HTTPBodyStream;
@property(readonly) long long KBSyncType;
@property(getter=isLargeDownload,readonly) bool largeDownload;
@property(readonly) bool requiresExtendedValidationCertificates;
@property(readonly) bool requiresHTTPS;
@property(readonly) bool shouldAddKBSyncData;
@property(readonly) bool shouldDecodeResponse;
@property(readonly) bool shouldDisableCellularFallback;
@property(readonly) bool shouldDisableCellular;
@property(readonly) bool shouldProcessProtocol;
@property(readonly) bool shouldSendSecureToken;
@property(readonly) bool shouldSetCookies;
@property(readonly) long long URLBagType;
@property(copy,readonly) id URLBagURLBlock;
@property(copy,readonly) NSArray * URLs;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)canBeResolved;
- (bool)shouldAddKBSyncData;
- (long long)KBSyncType;
- (bool)shouldSetCookies;
- (bool)shouldSendSecureToken;
- (long long)URLBagType;
- (long long)allowedRetryCount;
- (id)_initCommon;
- (id)userAgentComponents;
- (id)requestParameters;
- (bool)allowsBootstrapCellularData;
- (bool)shouldDecodeResponse;
- (id)HTTPHeaders;
- (id)copyURLRequest;
- (bool)isITunesStoreRequest;
- (bool)shouldProcessProtocol;
- (id)URLBagKey;
- (id)URLBagURLBlock;
- (bool)requiresHTTPS;
- (id)clientAuditTokenData;
- (id)clientAuditBundleIdentifier;
- (bool)isLargeDownload;
- (bool)shouldDisableCellularFallback;
- (bool)shouldDisableCellular;
- (bool)requiresExtendedValidationCertificates;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)clientIdentifier;
- (id)init;
- (id)initWithURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (unsigned long long)networkServiceType;
- (double)timeoutInterval;
- (unsigned long long)cachePolicy;
- (id)HTTPMethod;
- (long long)expectedContentLength;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)URL;
- (id)HTTPBody;
- (id)HTTPBodyStream;
- (void)dealloc;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)URLs;

@end
