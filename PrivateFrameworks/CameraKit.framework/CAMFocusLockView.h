/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class CAKeyframeAnimation;

@interface CAMFocusLockView : CAMFocusView  {
    CAKeyframeAnimation *_lockBoundsAnimation;
}


- (void)animateScaleDownWithCompletion:(id)arg1;
- (void)animateLock;
- (id)_createLockBoundsAnimation;
- (id)_createBoundsAnimation;
- (void)startAnimatingContents:(bool)arg1 bounds:(bool)arg2 fadeIn:(bool)arg3;
- (void).cxx_destruct;
- (double)fadeInDuration;

@end
