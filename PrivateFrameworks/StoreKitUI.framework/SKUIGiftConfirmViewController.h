/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIFocusedTouchGestureRecognizer, SKUIGiftConfirmView, SKUIGiftPurchaseRequest;

@interface SKUIGiftConfirmViewController : SKUIGiftStepViewController  {
    SKUIGiftConfirmView *_confirmView;
    bool_isShowingConfirmation;
    SKUIGiftPurchaseRequest *_purchaseRequest;
    SKUIFocusedTouchGestureRecognizer *_touchRecognizer;
}


- (void)_finishPurchaseWithResult:(bool)arg1 errorMessage:(id)arg2;
- (void)_showSuccessPage;
- (void)_cancelBuyConfirmation:(id)arg1;
- (void)_removeCancelGestureRecognizer;
- (void)_setShowingConfirmation:(bool)arg1 animated:(bool)arg2;
- (void)_purchaseGift;
- (void)_buyButtonAction:(id)arg1;
- (void)_termsButtonAction:(id)arg1;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;

@end
