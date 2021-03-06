/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSMutableArray, UIView;

@interface _UIViewControllerNullAnimationTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {
    bool_transitionIsInFlight;
    NSMutableArray *_alongsideAnimations;
    NSMutableArray *_alongsideCompletions;
    UIView *_containerView;
}

@property UIView * containerView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)isCancelled;
- (void)dealloc;
- (double)completionVelocity;
- (void)_applyBlocks:(id)arg1 releaseBlocks:(id)arg2;
- (id)_alongsideCompletions:(bool)arg1;
- (id)_alongsideAnimations:(bool)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })targetTransform;
- (bool)initiallyInteractive;
- (void)notifyWhenInteractionEndsUsingBlock:(id)arg1;
- (long long)completionCurve;
- (double)transitionDuration;
- (bool)animateAlongsideTransitionInView:(id)arg1 animation:(id)arg2 completion:(id)arg3;
- (long long)presentationStyle;
- (bool)animateAlongsideTransition:(id)arg1 completion:(id)arg2;
- (void)_runAlongsideCompletionsAfterCommit;
- (void)setContainerView:(id)arg1;
- (void)_runAlongsideAnimations;
- (bool)isAnimated;
- (bool)isRotating;
- (double)percentComplete;
- (bool)isInteractive;
- (id)viewForKey:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
- (id)containerView;

@end
