/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPBackgroundRoundedRectView, UIColor, TPPathView;

@interface TPRevealingRingView : UIView  {
    bool_revealed;
    TPBackgroundRoundedRectView *_outerView;
    TPPathView *_outerGammaView;
    TPPathView *_innerGammaView;
    TPPathView *_innerView;
    UIColor *_colorOutsideRing;
    UIColor *_colorInsideRing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _paddingOutsideRing;
    double _defaultRingStrokeWidth;
    double _gammaBoost;
    double _revealAnimationDuration;
    double _unrevealAnimationDuration;
    double _minimumRevealingScale;
    double _cornerRadius;
    int _animationStyle;
    bool_isCircularRing;
    bool_innerGammaAlpha;
    bool_gammaBoostOuterRing;
    bool_gammaBoostInside;
    double _alphaInsideRing;
    double _alphaOutsideRing;
}

@property(readonly) struct CGSize { double x1; double x2; } ringSize;
@property(readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } paddingOutsideRing;
@property double cornerRadius;
@property double defaultRingStrokeWidth;
@property(retain) UIColor * colorOutsideRing;
@property(retain) UIColor * colorInsideRing;
@property double gammaBoost;
@property double revealAnimationDuration;
@property double unrevealAnimationDuration;
@property double alphaOutsideRing;
@property double alphaInsideRing;
@property bool gammaBoostOuterRing;
@property bool gammaBoostInside;
@property int animationStyle;
@property double minimumRevealingScale;


- (bool)gammaBoostInside;
- (bool)gammaBoostOuterRing;
- (id)colorInsideRing;
- (double)minimumRevealingScale;
- (double)unrevealAnimationDuration;
- (double)revealAnimationDuration;
- (double)gammaBoost;
- (double)defaultRingStrokeWidth;
- (double)alphaOutsideRing;
- (bool)_isSquare:(struct CGSize { double x1; double x2; })arg1;
- (bool)_shouldDrawAsCircle:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2;
- (void)_calculateOuter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 inner:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 newXOffset:(double*)arg3 newYOffset:(double*)arg4 withScale:(double)arg5;
- (void)_setInnerCircleScale:(double)arg1;
- (void)_setInnerGammaScale:(double)arg1;
- (void)_setOuterGammaScale:(double)arg1;
- (void)_animateForReveal:(bool)arg1 withDuration:(float)arg2 delay:(double)arg3;
- (void)setRevealed:(bool)arg1 animated:(bool)arg2 delay:(double)arg3;
- (void)_evaluateCircularness;
- (void)_adjustGammaBoostIfNecessary;
- (void)setPaddingOutsideRing:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMinimumRevealingScale:(double)arg1;
- (void)setUnrevealAnimationDuration:(double)arg1;
- (void)setRevealAnimationDuration:(double)arg1;
- (void)setDefaultRingStrokeWidth:(double)arg1;
- (id)_bezierPathForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;
- (id)colorOutsideRing;
- (void)setRevealed:(bool)arg1 animated:(bool)arg2;
- (void)setAlphaOutsideRing:(double)arg1;
- (void)setAlphaInsideRing:(double)arg1;
- (double)alphaInsideRing;
- (void)setUsesColorBurnBlending:(bool)arg1;
- (void)setUsesColorDodgeBlending:(bool)arg1;
- (void)setGammaBoost:(double)arg1;
- (void)setColorOutsideRing:(id)arg1;
- (void)setColorInsideRing:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 paddingOutsideRing:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingOutsideRing;
- (struct CGSize { double x1; double x2; })ringSize;
- (void)setRingGammaBoost:(double)arg1;
- (void)setGammaBoostOuterRing:(bool)arg1;
- (void)setGammaBoostInside:(bool)arg1;
- (double)cornerRadius;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setAnimationStyle:(int)arg1;
- (int)animationStyle;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setCornerRadius:(double)arg1;
- (void)layoutSubviews;

@end
