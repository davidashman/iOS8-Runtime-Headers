/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSObject<OS_dispatch_queue>, NSTimer;

@interface TLAlert : NSObject  {
    bool_shouldOverrideMasterSwitches;
    int _type;
    NSString *_toneIdentifier;
    NSString *_vibrationIdentifier;
    NSObject<OS_dispatch_queue> *_targetQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    NSTimer *_completionFallbackTimer;
}

@property int type;
@property(copy) NSString * toneIdentifier;
@property(copy) NSString * vibrationIdentifier;
@property(setter=_setCompletionHandler:,copy) id _completionHandler;
@property(setter=_setTargetQueue:) NSObject<OS_dispatch_queue> * _targetQueue;
@property(setter=_setCompletionFallbackTimer:,retain) NSTimer * _completionFallbackTimer;
@property(setter=_setShouldOverrideMasterSwitches:) bool _shouldOverrideMasterSwitches;

+ (void)playToneAndVibrationForType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
+ (void)playToneAndVibrationForType:(int)arg1 accountIdentifier:(id)arg2;
+ (void)playToneAndVibrationForType:(int)arg1;
+ (void)_playToneAndVibrationForType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 shouldOverrideMasterSwitches:(bool)arg4;

- (id)_completionFallbackTimer;
- (id)_targetQueue;
- (bool)_shouldOverrideMasterSwitches;
- (void)_setCompletionFallbackTimer:(id)arg1;
- (void)_setVibrationIdentifier:(id)arg1;
- (void)_setToneIdentifier:(id)arg1;
- (void)_setShouldOverrideMasterSwitches:(bool)arg1;
- (id)initWithType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
- (id)vibrationIdentifier;
- (id)toneIdentifier;
- (bool)playWithCompletionHandler:(id)arg1 targetQueue:(id)arg2;
- (id)initWithType:(int)arg1 accountIdentifier:(id)arg2;
- (void)stop;
- (id)initWithType:(int)arg1;
- (void)_setTargetQueue:(id)arg1;
- (int)type;
- (void)dealloc;
- (void)_setType:(int)arg1;
- (id)_completionHandler;
- (void)_setCompletionHandler:(id)arg1;

@end
