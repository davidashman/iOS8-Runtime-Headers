/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/StoreKit.framework/StoreKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SKRemoteStorePageViewController, SKStoreProductViewController, _UIAsyncInvocation, NSString, SKInvocationQueueProxy<SKUIServiceStorePageViewController>;

@interface SKStorePageViewController : UIViewController <SKStoreProductViewControllerDelegate> {
    _UIAsyncInvocation *_cancelRequest;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _loadBlock;

    SKStoreProductViewController *_productPageViewController;
    SKRemoteStorePageViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceStorePageViewController> *_serviceProxy;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)_showProductPageWithItemIdentifier:(id)arg1;
- (void)loadPageWithURLBagKey:(id)arg1 completionBlock:(id)arg2;
- (void)loadPageWithURL:(id)arg1 completionBlock:(id)arg2;
- (void)_didLoadWithResult:(bool)arg1 error:(id)arg2;
- (void)_dismissProductPageViewController;
- (void)_prepareToLoadWithCompletionBlock:(id)arg1;
- (void)_didFinishWithResult:(id)arg1 error:(id)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)_requestRemoteViewController;
- (void)dealloc;
- (void)_addRemoteView;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;

@end
