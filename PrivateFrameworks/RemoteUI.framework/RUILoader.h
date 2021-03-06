/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSURL, <RUIParserDelegate>, RUIParser;

@interface RUILoader : RUIHTTPRequest  {
    RUIParser *_parser;
    NSURL *_url;
    bool_allowNonSecureHTTP;
    <RUIParserDelegate> *_parserDelegate;
}

@property bool allowNonSecureHTTP;
@property <RUIParserDelegate> * parserDelegate;


- (void)setParserDelegate:(id)arg1;
- (id)parserDelegate;
- (void)setAllowNonSecureHTTP:(bool)arg1;
- (void)loadXMLUIWithData:(id)arg1 baseURL:(id)arg2;
- (void)loadXMLUIWithRequest:(id)arg1;
- (void)loadXMLUIWithURL:(id)arg1;
- (void)allWebViewsFinishedLoading;
- (void)webViewFinishedLoading;
- (bool)anyWebViewLoading;
- (void)_finishLoad;
- (bool)allowNonSecureHTTP;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (bool)receivedValidResponse:(id)arg1;
- (void)loadRequest:(id)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)URL;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)parseData:(id)arg1;

@end
