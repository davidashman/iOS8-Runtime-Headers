/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class UIBarButtonItem, NSURL, NSHTTPURLResponse, UINavigationController, AAGrandSlamSigner, NSMutableArray, NSString, UIActivityIndicatorView, UIToolbar, UINavigationItem, NSArray, AASetupAssistantService, RUILoader, <AAUIChildAccountCreationDelegate>;

@interface AAUIChildAccountCreationController : NSObject <RUIObjectModelDelegate> {
    AASetupAssistantService *_setupService;
    AAGrandSlamSigner *_grandSlamSigner;
    NSURL *_launchingURL;
    NSMutableArray *_objectModels;
    RUILoader *_loader;
    NSHTTPURLResponse *_currentResponse;
    UIActivityIndicatorView *_spinnerView;
    UIBarButtonItem *_originalRightBarButtonItem;
    UINavigationItem *_navigationItemShowingSpinner;
    NSArray *_originalEnabledToolbarItems;
    NSArray *_originalToolbarItems;
    UIToolbar *_originalToolbar;
    bool_isShowingSpinner;
    bool_isPendingDismissal;
    <AAUIChildAccountCreationDelegate> *_delegate;
    UINavigationController *_navigationController;
}

@property <AAUIChildAccountCreationDelegate> * delegate;
@property UINavigationController * navigationController;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)objectModelPressedBack:(id)arg1;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)objectModelDidChange:(id)arg1;
- (void)loadRemoteUI;
- (void)_showActivitySpinnerInToolbar:(id)arg1;
- (bool)_pressedLink:(id)arg1 comesFromBarButtonItem:(id)arg2 objectModel:(id)arg3;
- (void)_createChildAccount;
- (void)_renewCredentialsWithCompletionHandler:(id)arg1;
- (void)_cleanupRemoteUILoader;
- (void)_displayConnectionErrorAndCancel;
- (void)_hideActivitySpinner;
- (void)_startRemoteUILoaderWithRequest:(id)arg1;
- (id)_spinnerView;
- (void)_showActivitySpinnerInNavigationBar;
- (void)_popObjectModelAnimated:(bool)arg1;
- (void)_addHeadersToRequest:(id)arg1;
- (id)initWithGrandSlamSigner:(id)arg1;
- (void)_cancel;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)setNavigationController:(id)arg1;
- (id)navigationController;

@end
