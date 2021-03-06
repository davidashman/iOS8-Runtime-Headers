/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKUserTrackingButtonTarget>, UIImageView, UIActivityIndicatorView, <MKUserTrackingView>, UIButton;

@interface _MKUserTrackingButtonController : NSObject  {
    <MKUserTrackingButtonTarget> *_target;
    <MKUserTrackingView> *_userTrackingView;
    long long _state;
    UIImageView *_imageView;
    UIButton *_button;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property(retain) <MKUserTrackingView> * userTrackingView;
@property(readonly) UIImageView * imageView;
@property long long state;


- (id)_activityIndicatorView;
- (id)_expandAnimation;
- (void)_updateLoading;
- (void)_reloadState;
- (id)_contentAnimation;
- (id)_shrinkAnimation;
- (bool)_shouldAnimateFromState:(long long)arg1 toState:(long long)arg2;
- (void)_authorizationStatusChanged:(id)arg1;
- (void)setUserTrackingView:(id)arg1;
- (id)userTrackingView;
- (id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2;
- (id)initWithTarget:(id)arg1 userTrackingView:(id)arg2 imageView:(id)arg3 button:(id)arg4;
- (void)_goToNextMode:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_updateState;
- (id)imageView;

@end
