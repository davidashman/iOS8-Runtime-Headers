/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSURLAuthenticationChallenge, NSString;

@interface __NSCFURLProtocolClient_NS : NSObject <NSURLProtocolClient> {
    struct URLProtocolClient { int (**x1)(); } *_cf;
    struct URLProtocol { int (**x1)(); int (**x2)(); struct CoreSchedulingSet {} *x3; double x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; long long x13; long long x14; long long x15; unsigned char x16; int x17; long long x18; id x19; struct URLProtocolClient {} *x20; struct _CFCachedURLResponse {} *x21; } *_prot;
    NSURLAuthenticationChallenge *_challenge;
    struct _CFURLAuthChallenge { } *_cfChallenge;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (struct _CFURLAuthChallenge { }*)cfChallenge;
- (id)challenge;
- (void)teardown;
- (id)initWithCFClient:(struct URLProtocolClient { int (**x1)(); }*)arg1 prot:(struct URLProtocol { int (**x1)(); int (**x2)(); struct CoreSchedulingSet {} *x3; double x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; long long x13; long long x14; long long x15; unsigned char x16; int x17; long long x18; id x19; struct URLProtocolClient {} *x20; struct _CFCachedURLResponse {} *x21; }*)arg2;
- (void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)URLProtocol:(id)arg1 didFailWithError:(id)arg2;
- (void)URLProtocolDidFinishLoading:(id)arg1;
- (void)URLProtocol:(id)arg1 didLoadData:(id)arg2;
- (void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3;
- (void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2;
- (void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)dealloc;

@end
