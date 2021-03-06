/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLAirPlayBackgroundView, AVPlayer, PLAVPlayerView, PLVideoOutBackgroundView, UIView;

@interface PLMoviePlayerView : UIView  {
    PLAVPlayerView *_avPlayerView;
    PLVideoOutBackgroundView *_videoOutView;
    PLAirPlayBackgroundView *_airPlayView;
    bool_destinationPlaceholderHidden;
}

@property(retain,readonly) UIView * videoView;
@property(retain) AVPlayer * player;
@property(readonly) long long destinationPlaceholderStyle;
@property(getter=isDestinationPlaceholderHidden) bool destinationPlaceholderHidden;


- (bool)isDestinationPlaceholderHidden;
- (void)setDestinationPlaceholderStyle:(long long)arg1 airPlayDeviceName:(id)arg2;
- (void)_installBackgroundView:(id)arg1;
- (void)_clearAirPlayView;
- (void)_clearVideoView;
- (void)reattachVideoView;
- (void)setDestinationPlaceholderHidden:(bool)arg1;
- (long long)destinationPlaceholderStyle;
- (void)setScaleMode:(unsigned long long)arg1 duration:(double)arg2;
- (void)setScaleMode:(unsigned long long)arg1;
- (id)videoView;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
