/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class NSString, _UIActionSlider, UIImageView, <TPSlidingButtonDelegateProtocol>, UIButton;

@interface TPSlidingButton : UIView <_UIActionSliderDelegate> {
    int _type;
    _UIActionSlider *_acceptButton;
    UIButton *_sideButtonRight;
    <TPSlidingButtonDelegateProtocol> *_delegate;
    UIImageView *_dialImageView;
}

@property(retain) _UIActionSlider * acceptButton;
@property(retain) UIButton * sideButtonRight;
@property int type;
@property <TPSlidingButtonDelegateProtocol> * delegate;
@property(retain) UIImageView * dialImageView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setDialImageView:(id)arg1;
- (void)setAcceptButton:(id)arg1;
- (struct CGSize { double x1; double x2; })_knobSize;
- (id)dialImageView;
- (id)acceptButton;
- (id)initWithSlidingButtonType:(int)arg1;
- (id)sideButtonRight;
- (void)setSideButtonRight:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)delegate;
- (void)dealloc;
- (void)actionSliderDidCompleteSlide:(id)arg1;
- (void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;

@end
