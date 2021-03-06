/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIResponder, UIWindow, UIView;

@interface UINavigationTransitionView : UIView <NSCoding> {
    id _delegate;
    UIView *_fromView;
    UIView *_toView;
    long long _transition;
    UIResponder *_firstResponderToRestore;
    UIWindow *_originalWindow;
    double _fromViewAlpha;
    unsigned int _isTransitioning : 1;
    unsigned int _popoverWillCleanUpNavigationTransition : 1;
    unsigned int _usesRoundedCorners : 1;
}

@property id delegate;
@property(readonly) UIView * fromView;
@property bool usesRoundedCorners;
@property(readonly) bool isTransitioning;
@property bool popoverWillCleanUpNavigationTransition;

+ (double)defaultDurationForTransition:(long long)arg1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)_cleanupTransitionFromPopover;
- (bool)popoverWillCleanUpNavigationTransition;
- (void)setPopoverWillCleanUpNavigationTransition:(bool)arg1;
- (void)_notifyDelegateTransitionDidStopWithContext:(id)arg1;
- (void)_cleanupTransition;
- (void)_navigationTransitionDidStop;
- (bool)usesRoundedCorners;
- (void)setUsesRoundedCorners:(bool)arg1;
- (id)fromView;
- (bool)transition:(long long)arg1 toView:(id)arg2;
- (bool)_isTransitioningFromView:(id)arg1;
- (bool)isTransitioning;
- (bool)transition:(long long)arg1 fromView:(id)arg2 toView:(id)arg3;

@end
