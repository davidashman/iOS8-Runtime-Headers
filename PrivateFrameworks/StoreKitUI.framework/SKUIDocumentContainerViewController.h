/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIView, NSString, NSArray, IKAppDocument, NSSet, SSVLoadURLOperation, NSDictionary, SKUINavigationBarController, NSValue, UIViewController, NSNumber;

@interface SKUIDocumentContainerViewController : SKUIViewController <IKAppDocumentDelegate, SKUIModalSourceViewProvider, SKUINavigationPaletteProvider> {
    UIViewController *_beforeErrorChildViewController;
    UIViewController *_childViewController;
    NSArray *_defaultLeftBarButtonItems;
    IKAppDocument *_document;
    SSVLoadURLOperation *_loadURLOperation;
    SKUINavigationBarController *_navigationBarController;
    NSNumber *_orientationAtDisappear;
    NSNumber *_pageResponseAbsoluteTime;
    NSSet *_personalizationItems;
    NSDictionary *_presentationOptions;
    NSArray *_searchBarControllers;
    NSValue *_sizeAtDisappear;
    unsigned long long _templateViewElementType;
    NSString *_urlString;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) UIView * navigationPaletteView;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void)documentDidUpdate:(id)arg1;
- (void)document:(id)arg1 runTestWithName:(id)arg2 options:(id)arg3;
- (void)documentScrollToTop:(id)arg1;
- (id)impressionableViewElementsForDocument:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (void)_finishLegacyProtocolOperationForResponse:(id)arg1 dataProvider:(id)arg2 dictionary:(id)arg3;
- (id)_millisecondsFromTimeInterval:(double)arg1;
- (void)_networkTypeChangeNotification:(id)arg1;
- (void)_redirectToURL:(id)arg1;
- (void)_finishLoadOperationWithResponse:(id)arg1 error:(id)arg2;
- (void)_reloadForNetworkTypeChange;
- (void)_reloadNavigationPalette;
- (void)_setChildViewController:(id)arg1;
- (void)_sendOnViewAttributesChangeWithAttributes:(id)arg1;
- (id)_navigationBarViewElement;
- (void)_reloadDefaultBarButtonItems;
- (void)_reloadNavigationBarController;
- (void)_enqueueLoadURLOperation;
- (id)_newViewControllerWithTemplateElement:(id)arg1 options:(id)arg2 clientContext:(id)arg3;
- (id)_sidepackViewControllerWithOptions:(id)arg1 clientContext:(id)arg2;
- (id)navigationPaletteView;
- (id)initWithDocument:(id)arg1 options:(id)arg2 clientContext:(id)arg3;
- (void)_showAccountViewControllerWithURL:(id)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(id)arg2;
- (void)skui_viewWillAppear:(bool)arg1;
- (void)_forceOrientationBackToSupportedOrientation;
- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (id)contentScrollView;
- (void)viewWillAppear:(bool)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)reloadData;

@end
