/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class UIImage, GKPlayer, NSString;

@interface GKPlayerPhotoView : UIImageView <GKPlayerPhotoContainer> {
    bool_selected;
    GKPlayer *_player;
    UIImage *_actualImage;
    long long _onAdaptiveBackground;
}

@property(retain) UIImage * actualImage;
@property(getter=isOnAdaptiveBackground) long long onAdaptiveBackground;
@property bool selected;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(retain) GKPlayer * player;

+ (void)initialize;

- (void)setActualImage:(id)arg1;
- (id)actualImage;
- (long long)isOnAdaptiveBackground;
- (void)refreshPhoto;
- (void)setOnAdaptiveBackground:(long long)arg1;
- (void)refreshPhotoWithCompletionHandler:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (void)dealloc;
- (bool)selected;
- (void)setSelected:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)invalidateIntrinsicContentSize;

@end
