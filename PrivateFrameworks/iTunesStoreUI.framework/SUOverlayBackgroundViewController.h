/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUOverlayViewController, UISwipeGestureRecognizer, NSArray, <SUOverlayBackgroundDelegate>, NSString, NSMutableArray, SUTouchCaptureView, SUScalingFlipView;

@interface SUOverlayBackgroundViewController : SUViewController <SUScalingFlipViewDelegate, UIGestureRecognizerDelegate> {
    NSMutableArray *_actionQueue;
    SUScalingFlipView *_activeFlipView;
    bool_askingToDismissEverything;
    bool_askingToDismissSelection;
    SUTouchCaptureView *_captureView;
    <SUOverlayBackgroundDelegate> *_delegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _keyboardFrame;
    long long _selectedViewControllerIndex;
    UISwipeGestureRecognizer *_swipeGestureRecognizer;
    NSMutableArray *_viewControllers;
}

@property <SUOverlayBackgroundDelegate> * delegate;
@property(readonly) SUOverlayViewController * selectedViewController;
@property(readonly) NSArray * viewControllers;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)overlayPageViewTapped:(id)arg1;
- (void)_performPresentAction:(id)arg1;
- (void)_performDismissEverythingAction:(id)arg1;
- (void)_performDismissAction:(id)arg1;
- (void)_performFlipForAction:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForSlideFromBottomForViewController:(id)arg1;
- (void)_backgroundAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_removeViewController:(id)arg1;
- (void)_overlayActionDidFinish;
- (void)_finishPresentAction:(id)arg1;
- (void)_finishDismissEverythingAction:(id)arg1;
- (void)_finishDismissAction:(id)arg1;
- (void)_finishDismissOfViewController:(id)arg1 animated:(bool)arg2;
- (void)_overlayAnimationDidFinish;
- (void)_shouldDismissFinishedWithValue:(id)arg1;
- (void)_addViewController:(id)arg1;
- (void)_reloadGestureRecognizers;
- (void)_captureViewAction:(id)arg1;
- (void)_layoutForKeyboardChangeWithInfo:(id)arg1;
- (void)layoutViewControllers;
- (double)_viewControllerHorizontalPadding;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_centeredFrameForViewController:(id)arg1;
- (double)_viewControllerKeyboardOffset;
- (void)_enqueueAction:(id)arg1;
- (id)_copyTransitionForTransition:(id)arg1 action:(id)arg2;
- (id)_selectedViewController;
- (void)_sendDidDismiss;
- (void)_tearDownFlipView;
- (void)scalingFlipViewDidFinish:(id)arg1;
- (void)presentOverlay:(id)arg1 withTransition:(id)arg2;
- (id)viewControllerForScriptWindowContext:(id)arg1;
- (void)_performNextAction;
- (void)populateNavigationHistoryWithItems:(id)arg1;
- (void)storePage:(id)arg1 finishedWithSuccess:(bool)arg2;
- (void)dismissOverlay:(id)arg1 animated:(bool)arg2;
- (id)copyArchivableJetsamContext;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)keyboardWillHideWithInfo:(id)arg1;
- (bool)shouldExcludeFromNavigationHistory;
- (id)copyChildViewControllersForReason:(long long)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (id)copyArchivableContext;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)_swipe:(id)arg1;
- (void)dismissAnimated:(bool)arg1;
- (id)selectedViewController;
- (id)viewControllers;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)loadView;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;

@end
