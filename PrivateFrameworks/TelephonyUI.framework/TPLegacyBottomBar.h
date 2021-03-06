/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIImageView;

@interface TPLegacyBottomBar : UIView  {
    long long _orientation;
    long long _style;
    bool_suppressDrawingBackground;
    UIImageView *_shadowView;
}

@property bool suppressDrawingBackground;
@property(readonly) UIImageView * shadowView;

+ (long long)overlayStyle;
+ (id)upsideDownShadowImage;
+ (long long)fullscreenStyle;
+ (double)defaultHeightForStyle:(long long)arg1 orientation:(long long)arg2;
+ (double)defaultHeightForOrientation:(long long)arg1;
+ (id)_backgroundImage;
+ (double)defaultHeightForStyle:(long long)arg1;
+ (double)defaultHeight;

- (bool)suppressDrawingBackground;
- (void)setWellAlpha:(double)arg1;
- (void)setSuppressDrawingBackground:(bool)arg1;
- (void)setOrientation:(long long)arg1 updateFrame:(bool)arg2;
- (id)initWithDefaultSizeForOrientation:(long long)arg1;
- (long long)orientation;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOrientation:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (void)dealloc;
- (id)initWithDefaultSize;
- (id)shadowView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)layoutSubviews;

@end
