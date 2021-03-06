/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLWallpaperButton, _UIBackdropView, UIView, _UILegibilityLabel;

@interface PLCropOverlayWallpaperBottomBar : UIView  {
    bool_motionToggleHidden;
    bool_shouldOnlyShowLockScreenButton;
    bool_shouldOnlyShowHomeScreenButton;
    PLWallpaperButton *_doCancelButton;
    PLWallpaperButton *_doSetButton;
    PLWallpaperButton *_doSetHomeScreenButton;
    PLWallpaperButton *_doSetLockScreenButton;
    PLWallpaperButton *_doSetBothScreenButton;
    PLWallpaperButton *_motionToggle;
    _UILegibilityLabel *_titleLabel;
    UIView *_separatorLine;
    _UIBackdropView *_backdropView;
    double _maxToggleWidth;
}

@property(readonly) PLWallpaperButton * doCancelButton;
@property(readonly) PLWallpaperButton * doSetButton;
@property(readonly) PLWallpaperButton * doSetHomeScreenButton;
@property(readonly) PLWallpaperButton * doSetLockScreenButton;
@property(readonly) PLWallpaperButton * doSetBothScreenButton;
@property(readonly) PLWallpaperButton * motionToggle;
@property bool motionToggleHidden;
@property bool shouldOnlyShowLockScreenButton;
@property bool shouldOnlyShowHomeScreenButton;
@property(retain) _UILegibilityLabel * titleLabel;
@property(retain) UIView * separatorLine;
@property(retain) _UIBackdropView * backdropView;
@property double maxToggleWidth;


- (double)maxToggleWidth;
- (void)setSeparatorLine:(id)arg1;
- (bool)shouldOnlyShowHomeScreenButton;
- (bool)shouldOnlyShowLockScreenButton;
- (struct CGSize { double x1; double x2; })_sizeForString:(id)arg1;
- (id)separatorLine;
- (void)_layoutSubviewsPhone;
- (void)_layoutSubviewsPad;
- (void)_commonPLCropOverlayWallpaperBottomBarInitialization;
- (void)setMaxToggleWidth:(double)arg1;
- (double)widthForToggleText;
- (void)_commonPLCropOverlayWallpaperBottomBarInitializationPhone;
- (void)_commonPLCropOverlayWallpaperBottomBarInitializationPad;
- (bool)motionToggleHidden;
- (void)setMotionToggleHidden:(bool)arg1;
- (void)setShouldOnlyShowLockScreenButton:(bool)arg1;
- (void)setShouldOnlyShowHomeScreenButton:(bool)arg1;
- (id)doSetButton;
- (id)motionToggle;
- (id)doSetBothScreenButton;
- (id)doSetLockScreenButton;
- (id)doSetHomeScreenButton;
- (id)doCancelButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)updateForChangedSettings:(id)arg1;
- (id)backdropView;
- (void)setBackdropView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)setText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
