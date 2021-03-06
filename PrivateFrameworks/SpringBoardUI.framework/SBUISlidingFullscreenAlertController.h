/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class UIView;

@interface SBUISlidingFullscreenAlertController : SBUIFullscreenAlertController  {
    UIView *_topBar;
    UIView *_bottomBar;
    bool_animatingIn;
    bool_animatingOut;
}

@property(readonly) UIView * topBar;
@property(readonly) UIView * bottomBar;


- (id)topBar;
- (void)updateSpringBoardInPreparationForTransparentDismiss;
- (double)_animationDelayForOthersActivation;
- (bool)_animatingToHomescreenWallpaper;
- (void)_viewAnimatedOut;
- (double)_slideOutAnimationDuration;
- (double)_slideOutAnimationDelay;
- (void)_performAnimateDisplayIn;
- (bool)shouldShowBottomBar;
- (bool)isShowingWallpaper;
- (id)newBottomBar;
- (id)newTopBar;
- (bool)hasTranslucentBackground;
- (bool)viewIsReadyToBeRemoved;
- (void)animateViewOut;
- (void)animateViewIn;
- (void)viewWillAnimateOut;
- (void)viewWillAnimateIn;
- (void)finishedAnimatingIn;
- (bool)isSlidingViewController;
- (id)bottomBar;
- (void)dealloc;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)viewDidLoad;
- (id)backgroundView;

@end
