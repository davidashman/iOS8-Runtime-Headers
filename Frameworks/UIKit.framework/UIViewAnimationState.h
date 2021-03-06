/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSUUID, NSString, UIView, UIViewAnimationState, <_UIBasicAnimationFactory>, NSMutableArray, CAMediaTimingFunction;

@interface UIViewAnimationState : NSObject  {
    UIViewAnimationState *_nextState;
    NSString *_animationID;
    void *_context;
    id _delegate;
    double _duration;
    double _delay;
    double _frameInterval;
    double _start;
    long long _curve;
    float _repeatCount;
    long long _transition;
    UIView *_transitionView;
    int _filter;
    UIView *_filterView;
    float _filterValue;
    SEL _willStartSelector;
    SEL _didEndSelector;
    int _didEndCount;
    struct CGPoint { 
        double x; 
        double y; 
    } _position;
    unsigned int _willStartSent : 1;
    unsigned int _useCurrentLayerState : 1;
    unsigned int _cacheTransition : 1;
    unsigned int _autoreverses : 1;
    unsigned int _roundsToInteger : 1;
    unsigned int _preventsAdditive : 1;
    unsigned int _layoutSubviews : 1;
    NSMutableArray *_trackedAnimations;
    NSUUID *_uuid;
    <_UIBasicAnimationFactory> *_animationFactory;
    CAMediaTimingFunction *_customCurve;
    bool_animationFactoryMakesPerAnimationCustomCurves;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _alongsideAnimations;

    NSMutableArray *_addedCompletions;
    bool_animationDidStopSent;
    bool_allowUserInteractionToCutOffEndOfAnimation;
    bool_retainedSelf;
}

@property(readonly) bool _allowsUserInteraction;

+ (void)popAnimationState;
+ (void)pushViewAnimationState:(id)arg1 context:(void*)arg2;

- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)init;
- (void)dealloc;
- (void)_removeAnimationStateFromTrackingMap:(bool)arg1;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(id)arg7 completion:(id)arg8;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (id)_trackedAnimations;
- (bool)_allowsUserInteractionToCutOffEndOfAnimation;
- (bool)_allowsUserInteraction;
- (void)_removeAnimationStateFromTrackingMap:(bool)arg1 disableTrackingIfNeeded:(bool)arg2;
- (void)setAnimationAttributes:(id)arg1;
- (void)setAnimationAttributes:(id)arg1 correctZeroDuration:(bool)arg2 skipDelegateAssignment:(bool)arg3;
- (void)setupCustomTimingCurve;
- (id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)setAnimationAttributes:(id)arg1 correctZeroDuration:(bool)arg2 skipDelegateAssignment:(bool)arg3 customCurve:(id)arg4;
- (void)configureAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;
- (id)_defaultAnimationForKey:(id)arg1;
- (bool)_shouldStartFromCurrentStateForLayer:(id)arg1 key:(id)arg2;
- (bool)_shouldAnimateAdditivelyForKey:(id)arg1 onLayer:(id)arg2;
- (void)sendDelegateAnimationDidStop:(id)arg1 finished:(bool)arg2;
- (void)pop;
- (void)_addAnimationStateForTracking:(id)arg1;
- (void)_setAlongsideAnimations:(id)arg1;
- (void)_trackAnimation:(id)arg1 withAnimationKey:(id)arg2 forKeyPath:(id)arg3 inLayer:(id)arg4;
- (void)_runAlongsideAnimations;
- (void)_acceptEarlyAnimationCutoff:(id)arg1;

@end
