/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSURL, NSURLRequest, WKFrameInfo;

@interface WKNavigationAction : NSObject  {
    struct RetainPtr<WKFrameInfo> { 
        void *m_ptr; 
    } _sourceFrame;
    struct RetainPtr<WKFrameInfo> { 
        void *m_ptr; 
    } _targetFrame;
    struct RetainPtr<NSURLRequest> { 
        void *m_ptr; 
    } _request;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    } _originalURL;
    bool_userInitiated;
    bool_canHandleRequest;
    long long _navigationType;
}

@property(readonly) NSURL * _originalURL;
@property(getter=_isUserInitiated,readonly) bool _userInitiated;
@property(readonly) bool _canHandleRequest;
@property(copy) WKFrameInfo * sourceFrame;
@property(copy) WKFrameInfo * targetFrame;
@property(readonly) long long navigationType;
@property(copy) NSURLRequest * request;
@property(setter=_setOriginalURL:,copy) NSURL * _originalURL;


- (bool)_isUserInitiated;
- (bool)_canHandleRequest;
- (id)_originalURL;
- (void)_setOriginalURL:(id)arg1;
- (id)sourceFrame;
- (void)setSourceFrame:(id)arg1;
- (id)_initWithNavigationActionData:(const struct NavigationActionData { int x1; int x2; int x3; boolx4; boolx5; }*)arg1;
- (long long)navigationType;
- (void)setRequest:(id)arg1;
- (id)request;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (id)targetFrame;
- (void)setTargetFrame:(id)arg1;

@end
