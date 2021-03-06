/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, CAMediaTimingFunction;

@interface PKUISpringAnimationFactory : NSObject <_UIBasicAnimationFactory> {
    double _duration;
    bool_needsDurationUpdate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _animationDelayHandler;

    double _mass;
    double _stiffness;
    double _damping;
    double _velocity;
    CAMediaTimingFunction *_timing;
}

@property(readonly) double duration;
@property double mass;
@property double stiffness;
@property double damping;
@property double velocity;
@property(retain) CAMediaTimingFunction * timing;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)defaultTimingFunction;
+ (id)springAnimationWithKeyPath:(id)arg1;
+ (id)springAnimationWithKeyPath:(id)arg1 velocity:(double)arg2;

- (id)animationDelayHandler;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4;
- (void)_updateDurationIfNecessary;
- (id)_springAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_springAnimationWithKeyPath:(id)arg1;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 timing:(id)arg5;
- (id)initWithVelocity:(double)arg1 timing:(id)arg2;
- (void)setAnimationDelayHandler:(id)arg1;
- (id)springAnimationWithKeyPath:(id)arg1;
- (id)springAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)initWithVelocity:(double)arg1;
- (void)setDamping:(double)arg1;
- (double)damping;
- (double)mass;
- (void)setVelocity:(double)arg1;
- (double)velocity;
- (void)setTiming:(id)arg1;
- (id)timing;
- (double)stiffness;
- (void)setStiffness:(double)arg1;
- (void)setMass:(double)arg1;
- (id)init;
- (void)dealloc;
- (double)duration;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;

@end
