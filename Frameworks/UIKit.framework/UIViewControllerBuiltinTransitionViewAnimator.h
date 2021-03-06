/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, NSString, <UIViewControllerContextTransitioning>;

@interface UIViewControllerBuiltinTransitionViewAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    <UIViewControllerContextTransitioning> *_transitionContext;
    bool_removeFromView;
    int _transition;
    id _delegate;
    UIView *_toView;
    UIView *_fromView;
}

@property id delegate;
@property UIView * toView;
@property UIView * fromView;
@property bool removeFromView;
@property int transition;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (bool)removeFromView;
- (struct CGPoint { double x1; double x2; })_adjustOrigin:(struct CGPoint { double x1; double x2; })arg1 givenOtherOrigin:(struct CGPoint { double x1; double x2; })arg2 forTransition:(int)arg3;
- (void)_prepareKeyboardForTransition:(int)arg1 fromView:(id)arg2;
- (void)setRemoveFromView:(bool)arg1;
- (void)setFromView:(id)arg1;
- (void)setToView:(id)arg1;
- (id)initWithTransition:(int)arg1;
- (int)transition;
- (void)setTransition:(int)arg1;
- (id)toView;
- (id)fromView;
- (void)transitionView:(id)arg1 startCustomTransitionWithDuration:(double)arg2;
- (struct CGPoint { double x1; double x2; })transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint { double x1; double x2; })arg4;
- (struct CGPoint { double x1; double x2; })transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint { double x1; double x2; })arg4;
- (struct CGPoint { double x1; double x2; })transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint { double x1; double x2; })arg4;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(bool)arg4;
- (bool)transitionViewShouldUseViewControllerCallbacks;
- (void)transitionViewDidStart:(id)arg1;
- (double)durationForTransition:(int)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
