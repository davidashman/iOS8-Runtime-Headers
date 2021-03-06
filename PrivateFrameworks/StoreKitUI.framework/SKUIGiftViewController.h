/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIGiftViewControllerDelegate>, SKUIGift, SKUIGiftComposeViewController, SKUIClientContext, NSOperationQueue, SKUIGiftConfiguration, UIViewController;

@interface SKUIGiftViewController : UINavigationController  {
    SKUIClientContext *_clientContext;
    SKUIGift *_gift;
    <SKUIGiftViewControllerDelegate> *_giftDelegate;
    SKUIGiftConfiguration *_giftConfiguration;
    NSOperationQueue *_operationQueue;
    UIViewController *_placeholderViewController;
    SKUIGiftComposeViewController *_rootViewController;
}

@property(copy,readonly) SKUIGift * gift;
@property(retain) SKUIClientContext * clientContext;
@property <SKUIGiftViewControllerDelegate> * giftDelegate;
@property(retain) NSOperationQueue * operationQueue;


- (id)initWithGift:(id)arg1;
- (void)setGiftDelegate:(id)arg1;
- (id)giftDelegate;
- (id)gift;
- (void)_clientContextDidLoadWithContext:(id)arg1 error:(id)arg2;
- (void)_configurationDidLoadWithResult:(bool)arg1 error:(id)arg2;
- (void)_finishGiftingWithResult:(bool)arg1;
- (void)_finishAuthenticateWithResponse:(id)arg1 error:(id)arg2;
- (void)_loadGiftConfiguration;
- (id)_localizedString:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (void)_cancelButtonAction:(id)arg1;
- (void).cxx_destruct;
- (id)operationQueue;
- (void)viewWillAppear:(bool)arg1;
- (void)setOperationQueue:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end
