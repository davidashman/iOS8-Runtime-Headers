/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIViewController, SUMaskedView, SUMaskProvider, SUScriptWindowContext, SUScriptFunction, NSMutableArray, SUTouchCaptureView, SUOverlayTransition;

@interface SUOverlayViewController : SUViewController  {
    NSMutableArray *_actionQueue;
    UIViewController *_activeViewController;
    UIViewController *_backViewController;
    bool_canSwipeToDismiss;
    UIViewController *_frontViewController;
    SUOverlayTransition *_lastFlipTransition;
    struct CGSize { 
        double width; 
        double height; 
    } _overlaySize;
    SUOverlayTransition *_presentationTransition;
    SUScriptWindowContext *_scriptWindowContext;
    double _shadowOpacity;
    double _shadowRadius;
    SUScriptFunction *_shouldDismissFunction;
    long long _state;
    SUMaskedView *_subviewContainerView;
    SUTouchCaptureView *_touchCaptureView;
}

@property(readonly) UIViewController * activeViewController;
@property(retain) UIViewController * backViewController;
@property(retain) UIViewController * frontViewController;
@property struct CGSize { double x1; double x2; } overlaySize;
@property(retain) SUMaskProvider * maskProvider;
@property double shadowOpacity;
@property double shadowRadius;
@property bool canSwipeToDismiss;
@property(retain) SUScriptFunction * shouldDismissFunction;
@property(getter=isActiveOverlay,readonly) bool activeOverlay;
@property(getter=isOnFront,readonly) bool onFront;
@property(retain) SUOverlayTransition * presentationTransition;

+ (struct CGSize { double x1; double x2; })defaultOverlaySize;

- (void)_performFlipAction:(id)arg1;
- (bool)_isControllerLoaded:(id)arg1;
- (void)_performFlipTransitionAction:(id)arg1;
- (void)_finishFlipAction:(id)arg1;
- (id)_flipTransition;
- (void)_touchCaptureAction:(id)arg1;
- (void)_setShadowVisible:(bool)arg1;
- (void)_applyDisplayProperties;
- (id)_subviewContainerView;
- (id)maskProvider;
- (id)_activeViewController;
- (void)_tearDownTouchCaptureView;
- (void)_setActiveViewController:(id)arg1 updateInterface:(bool)arg2;
- (void)_applyOverlayConfiguration:(id)arg1;
- (id)initWithOverlayConfiguration:(id)arg1;
- (void)viewWillDismissWithTransition:(id)arg1;
- (void)_overlayActionDidFinish;
- (bool)isOnFront;
- (void)_overlayAnimationDidFinish;
- (void)setPresentationTransition:(id)arg1;
- (void)_enqueueAction:(id)arg1;
- (id)presentationTransition;
- (void)imagePageViewTapped:(id)arg1;
- (id)shouldDismissFunction;
- (struct CGSize { double x1; double x2; })overlaySize;
- (id)frontViewController;
- (bool)canSwipeToDismiss;
- (id)backViewController;
- (void)setOverlaySize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMaskProvider:(id)arg1;
- (void)setShouldDismissFunction:(id)arg1;
- (void)setFrontViewController:(id)arg1;
- (void)setCanSwipeToDismiss:(bool)arg1;
- (void)flipWithTransition:(id)arg1;
- (void)_performNextAction;
- (void)setBackViewController:(id)arg1;
- (void)storePage:(id)arg1 finishedWithSuccess:(bool)arg2;
- (void)invalidateForMemoryPurge;
- (bool)shouldExcludeFromNavigationHistory;
- (bool)isActiveOverlay;
- (void)setScriptWindowContext:(id)arg1;
- (id)scriptWindowContext;
- (void)restoreArchivableContext:(id)arg1;
- (id)copyArchivableContext;
- (id)activeViewController;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowRadius:(double)arg1;
- (double)shadowRadius;
- (double)shadowOpacity;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)init;
- (void)dealloc;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;

@end
