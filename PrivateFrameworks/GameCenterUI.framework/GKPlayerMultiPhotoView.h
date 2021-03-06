/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSArray, NSMutableDictionary;

@interface GKPlayerMultiPhotoView : UIImageView  {
    NSArray *_players;
    NSMutableDictionary *_photoImages;
}

@property(retain) NSArray * players;
@property(retain) NSMutableDictionary * photoImages;


- (void)setPhotoImages:(id)arg1;
- (void)setPlayers:(id)arg1;
- (void)refreshPhotos;
- (id)photoImages;
- (id)players;
- (void)dealloc;
- (void)updateImage;

@end
