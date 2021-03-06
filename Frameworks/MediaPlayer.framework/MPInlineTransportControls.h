/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UILabel, UIActivityIndicatorView;

@interface MPInlineTransportControls : MPTransportControls  {
    UILabel *_loadingMovieLabel;
    UIActivityIndicatorView *_loadingMovieIndicator;
}

@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } availableProgressControlAreaFrame;


- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })availableProgressControlAreaFrame;
- (void)_enableAnimationIfNecessary:(id)arg1;
- (void)_disableAnimationIfNecessary:(id)arg1;
- (id)newButtonForPart:(unsigned long long)arg1;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(bool)arg3;
- (id)buttonImageForPart:(unsigned long long)arg1;
- (id)playButtonImage;
- (id)pauseButtonImage;
- (void)setDisabledParts:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
