/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIScrollView;

@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer  {
    UIScrollView *_scrollView;
    SEL _scrollViewAction;
    unsigned int _hasParentScrollView : 1;
}

@property UIScrollView * scrollView;


- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setDelegate:(id)arg1;
- (id)scrollView;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)setScrollView:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (double)_hysteresis;

@end
