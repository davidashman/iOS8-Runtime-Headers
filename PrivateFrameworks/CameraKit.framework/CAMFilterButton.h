/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class UIImageView;

@interface CAMFilterButton : UIButton  {
    UIImageView *__circlesImageView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _tappableEdgeInsets;
}

@property(getter=isOn) bool on;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;
@property(readonly) UIImageView * _circlesImageView;

+ (id)filterButton;

- (id)_circlesImageView;
- (void)_commonCAMFilterButtonInitialization;
- (id)_filterOnImage;
- (id)_filterImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void).cxx_destruct;
- (double)_selectedIndicatorAlpha;
- (bool)isOn;
- (void)setOn:(bool)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;

@end
