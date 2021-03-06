/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUMediaItemCellConfiguration : SUItemCellConfiguration  {
}

@property(readonly) struct CGSize { double x1; double x2; } artworkSize;
@property(readonly) long long mediaIconType;
@property(readonly) bool showContentRating;

+ (id)copyDefaultContext;

- (bool)showContentRating;
- (long long)mediaIconType;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_ratingBorderInsets;
- (struct CGSize { double x1; double x2; })artworkSize;
- (id)copyImageDataProvider;
- (id)initWithStringCount:(unsigned long long)arg1 imageCount:(unsigned long long)arg2;
- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (void)reloadImages;
- (double)alphaForLabelAtIndex:(unsigned long long)arg1 fromAlpha:(double*)arg2 withModifiers:(unsigned long long)arg3;
- (double)alphaForImageAtIndex:(unsigned long long)arg1 fromAlpha:(double*)arg2 withModifiers:(unsigned long long)arg3;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (void)drawWithModifiers:(unsigned long long)arg1;

@end
