/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIEditorialComponent, SKUILayoutCache;

@interface SKUIEditorialLayout : NSObject  {
    SKUIEditorialComponent *_editorial;
    long long _landscapeLinkLayoutIndex;
    long long _landscapeTextLayoutIndex;
    long long _landscapeTitleLayoutIndex;
    double _landscapeWidth;
    long long _portraitLinkLayoutIndex;
    long long _portraitTextLayoutIndex;
    long long _portraitTitleLayoutIndex;
    double _portraitWidth;
    SKUILayoutCache *_textLayoutCache;
}

@property(readonly) SKUIEditorialComponent * editorialComponent;


- (id)editorialComponent;
- (id)_linkLayoutRequestWithTotalWidth:(double)arg1;
- (id)_titleTextLayoutRequestWithTotalWidth:(double)arg1;
- (id)_bodyTextLayoutRequestWithTotalWidth:(double)arg1;
- (id)linkLayoutForOrientation:(long long)arg1;
- (id)titleTextLayoutForOrientation:(long long)arg1;
- (double)layoutHeightForOrientation:(long long)arg1 expanded:(bool)arg2;
- (id)bodyTextLayoutForOrientation:(long long)arg1;
- (void)setLayoutWidth:(double)arg1 forOrientation:(long long)arg2;
- (id)initWithEditorial:(id)arg1 layoutCache:(id)arg2;
- (void)enqueueLayoutRequests;
- (void).cxx_destruct;

@end
