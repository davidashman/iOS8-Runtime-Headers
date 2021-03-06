/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWindow, UIStatusBarViewController, UIZoomViewController, UIView;

@interface UIClassicController : NSObject  {
    UIWindow *_window;
    UIView *_chromeView;
    UIStatusBarViewController *_statusBarViewController;
    UIZoomViewController *_zoomViewController;
    bool_hidesClassicChrome;
    bool_hidesStatusBarFiller;
}

+ (id)sharedClassicController;

- (void)dealloc;
- (void)setDrawsStatusBarFiller:(bool)arg1;
- (bool)drawsStatusBarFiller;
- (void)_classicChangeStatusBarOrientationFinished:(id)arg1 finished:(bool)arg2 context:(id)arg3;
- (void)_classicChangeStatusBarOrientation:(id)arg1;
- (void)setZoomed:(bool)arg1;
- (bool)isZoomed;
- (bool)_shouldHideStatusBar;
- (bool)_supportsZoom;
- (void)setZoomed:(bool)arg1 animated:(bool)arg2;
- (bool)isClassicControlWindow:(id)arg1;
- (void)_setupWindow;
- (id)_window;
- (void)setStatusBarOrientation:(long long)arg1 animationParameters:(id)arg2;
- (void)setStatusBarHidden:(bool)arg1 animationParameters:(id)arg2;
- (void)setStatusBarStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)_initializeStatusBarOrientation;

@end
