/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, _UIBackdropView;

@interface UICalloutBarBackground : _UIBackdropView  {
    double m_dividerOffsets[24];
    UIImageView *_blurMaskView;
    UIImageView *_tintMaskView;
    _UIBackdropView *_separatorView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _highlightRect;
}

@property(retain) UIImageView * blurMaskView;
@property(retain) UIImageView * tintMaskView;
@property(retain) _UIBackdropView * separatorView;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } highlightRect;


- (id)init;
- (void)dealloc;
- (void)setTintMaskView:(id)arg1;
- (id)tintMaskView;
- (void)setBlurMaskView:(id)arg1;
- (id)blurMaskView;
- (void)setBlurDisabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1 forFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setDividerOffsets:(double*)arg1;
- (void)setHighlightRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })highlightRect;
- (void)setSeparatorView:(id)arg1;
- (id)separatorView;
- (void)layoutSubviews;

@end
