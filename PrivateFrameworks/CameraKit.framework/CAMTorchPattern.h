/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class CAAnimationGroup;

@interface CAMTorchPattern : NSObject  {
    float _torchLevel;
    double _startTime;
    long long __type;
    CAAnimationGroup *__animationGroup;
    double __lastUpdateTime;
}

@property(readonly) float torchLevel;
@property double startTime;
@property(readonly) long long _type;
@property(readonly) CAAnimationGroup * _animationGroup;
@property(readonly) double _lastUpdateTime;


- (double)_lastUpdateTime;
- (id)_animationGroup;
- (id)_doubleBlinkAnimationGroup;
- (id)_blinkAnimationGroup;
- (id)_longPatternAnimationGroup;
- (id)_shortPatternAnimationGroup;
- (id)_blinkAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3;
- (id)_patternAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3;
- (void)_updateAnimationGroup;
- (void)updateAtTime:(double)arg1;
- (float)torchLevel;
- (id)initWithType:(long long)arg1;
- (id)init;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (void).cxx_destruct;
- (long long)_type;

@end
