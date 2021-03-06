/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class <SSURLConnectionRequestDelegate>, SSURLRequestProperties, NSString, SSAuthenticationContext, SSVURLDataConsumer, NSURLRequest;

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding> {
    SSURLRequestProperties *_requestProperties;
    SSAuthenticationContext *_authenticationContext;
    SSVURLDataConsumer *_dataConsumer;
    bool_runsInProcess;
    bool_sendsResponseForHTTPFailures;
    bool_shouldMescalSign;
}

@property(readonly) NSURLRequest * URLRequest;
@property(readonly) SSURLRequestProperties * requestProperties;
@property bool shouldMescalSign;
@property <SSURLConnectionRequestDelegate> * delegate;
@property(copy) SSAuthenticationContext * authenticationContext;
@property(retain) SSVURLDataConsumer * dataConsumer;
@property bool runsInProcess;
@property bool sendsResponseForHTTPFailures;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setRunsInProcess:(bool)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setShouldMescalSign:(bool)arg1;
- (void)setSendsResponseForHTTPFailures:(bool)arg1;
- (bool)shouldMescalSign;
- (bool)sendsResponseForHTTPFailures;
- (id)authenticationContext;
- (bool)runsInProcess;
- (void)startWithConnectionResponseBlock:(id)arg1;
- (bool)_canRunInProcess;
- (id)initWithRequestProperties:(id)arg1;
- (id)dataConsumer;
- (void)startWithCompletionBlock:(id)arg1;
- (id)URLRequest;
- (void)setDataConsumer:(id)arg1;
- (id)requestProperties;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)init;
- (id)initWithURLRequest:(id)arg1;
- (bool)start;
- (void)dealloc;

@end
