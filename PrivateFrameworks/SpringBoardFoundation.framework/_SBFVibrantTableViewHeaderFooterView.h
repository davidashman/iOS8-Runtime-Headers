/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class _UIBackdropView, NSString, UIView;

@interface _SBFVibrantTableViewHeaderFooterView : UITableViewHeaderFooterView  {
    _UIBackdropView *_backdrop;
    UIView *_plusDView;
    bool_wantsPlusDLayer;
    long long _graphicsQuality;
    NSString *_backdropGroupName;
}

@property long long graphicsQuality;
@property(copy) NSString * backdropGroupName;
@property bool wantsPlusDLayer;

+ (id)defaultBackgroundColorForGraphicsQuality:(long long)arg1;

- (id)backdropGroupName;
- (long long)initialGraphicsQuality;
- (bool)wantsPlusDLayer;
- (void)setWantsPlusDLayer:(bool)arg1;
- (void)setBackdropGroupName:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setGraphicsQuality:(long long)arg1;
- (long long)graphicsQuality;
- (void)setFloating:(bool)arg1;

@end
