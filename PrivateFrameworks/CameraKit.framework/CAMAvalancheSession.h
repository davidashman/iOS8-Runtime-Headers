/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class NSDate, NSString, CIBurstImageSet, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, <CAMAvalancheSessionDelegate>, CAMInflightAsset;

@interface CAMAvalancheSession : NSObject  {
    long long _type;
    <CAMAvalancheSessionDelegate> *_delegate;
    long long _state;
    NSString *_uuid;
    unsigned long long _numberOfPhotos;
    CAMInflightAsset *_possibleAvalancheAsset;
    NSMutableDictionary *__assets;
    NSDate *__expirationDate;
    NSObject<OS_dispatch_source> *__expirationTimer;
    NSObject<OS_dispatch_queue> *__expirationQueue;
    CIBurstImageSet *__burstImageSet;
}

@property(readonly) long long type;
@property <CAMAvalancheSessionDelegate> * delegate;
@property long long state;
@property(copy,readonly) NSString * uuid;
@property(readonly) unsigned long long numberOfPhotos;
@property(retain) CAMInflightAsset * possibleAvalancheAsset;
@property(readonly) NSMutableDictionary * _assets;
@property(setter=_setExpirationDate:,retain) NSDate * _expirationDate;
@property(readonly) NSObject<OS_dispatch_source> * _expirationTimer;
@property(readonly) NSObject<OS_dispatch_queue> * _expirationQueue;
@property(readonly) CIBurstImageSet * _burstImageSet;


- (id)_expirationQueue;
- (id)_expirationTimer;
- (id)possibleAvalancheAsset;
- (unsigned long long)numberOfPhotos;
- (bool)extend;
- (void)_setPossibleAvalancheAsset:(id)arg1;
- (bool)_ensureValidStateChange:(long long)arg1;
- (id)_burstImageSet;
- (void)_expirationTimerFired;
- (void)_transitionToState:(long long)arg1;
- (id)assetsWithUUIDs:(id)arg1;
- (id)stackAssetIdentifier;
- (id)bestAssetIndentifiers;
- (id)allAssetIdentifiers;
- (void)_teardownExpirationTimer;
- (void)finalizeWithAnalysis:(bool)arg1;
- (void)_setupExpirationTimer;
- (id)_assets;
- (id)assetWithUUID:(id)arg1;
- (id)_expirationDate;
- (void)_setExpirationDate:(id)arg1;
- (id)uuid;
- (id)initWithType:(long long)arg1;
- (void)_setState:(long long)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (long long)type;
- (id)delegate;
- (long long)state;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_didTransitionToState:(long long)arg1;

@end
