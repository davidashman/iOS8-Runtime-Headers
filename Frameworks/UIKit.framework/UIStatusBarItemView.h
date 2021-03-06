/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIStatusBarItem, _UILegibilityView, UIStatusBarLayoutManager, UIStatusBarForegroundStyleAttributes;

@interface UIStatusBarItemView : UIView  {
    double _currentOverlap;
    struct CGContext { } *_imageContext;
    double _imageContextScale;
    _UILegibilityView *_legibilityView;
    bool_visible;
    bool_allowsUpdates;
    UIStatusBarItem *_item;
    UIStatusBarLayoutManager *_layoutManager;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
}

@property(readonly) UIStatusBarItem * item;
@property UIStatusBarLayoutManager * layoutManager;
@property(readonly) UIStatusBarForegroundStyleAttributes * foregroundStyle;
@property(getter=isVisible) bool visible;
@property bool allowsUpdates;

+ (id)createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3 foregroundStyle:(id)arg4;

- (bool)isVisible;
- (void)setVisible:(bool)arg1;
- (long long)textStyle;
- (void)setLayoutManager:(id)arg1;
- (id)layoutManager;
- (void)dealloc;
- (id)description;
- (id)item;
- (void)beginDisablingRasterization;
- (id)imageWithText:(id)arg1;
- (void)performPendedActions;
- (bool)animatesDataChange;
- (double)maximumOverlap;
- (double)addContentOverlap:(double)arg1;
- (double)resetContentOverlap;
- (double)extraRightPadding;
- (double)extraLeftPadding;
- (id)textFont;
- (double)setStatusBarData:(id)arg1 actions:(int)arg2;
- (double)currentRightOverlap;
- (double)currentLeftOverlap;
- (double)currentOverlap;
- (void)setCurrentOverlap:(double)arg1;
- (void)setVisible:(bool)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (void)endDisablingRasterization;
- (double)shadowPadding;
- (double)standardPadding;
- (void)setLayerContentsImage:(id)arg1;
- (double)adjustFrameToNewSize:(double)arg1;
- (double)legibilityStrength;
- (bool)allowsUpdates;
- (double)updateContentsAndWidth;
- (void)setAllowsUpdates:(bool)arg1;
- (id)initWithItem:(id)arg1 data:(id)arg2 actions:(int)arg3 style:(id)arg4;
- (void)setPersistentAnimationsEnabled:(bool)arg1;
- (long long)legibilityStyle;
- (id)contentsImage;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (void)endImageContext;
- (id)imageFromImageContextClippedToWidth:(double)arg1;
- (void)beginImageContextWithMinimumWidth:(double)arg1;
- (id)foregroundStyle;
- (id)imageWithShadowNamed:(id)arg1;
- (long long)textAlignment;
- (void)willMoveToWindow:(id)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setContentMode:(long long)arg1;

@end
