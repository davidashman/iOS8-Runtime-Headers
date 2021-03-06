/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SSVPlatformContext, NSMapTable, NSDictionary, NSBundle, SKUIURLBag, NSMutableArray, SKUIStoreDialogController, SKUIURL, SUClientInterface, NSString, IKAppContext, NSArray, SKUILocalizedStringDictionary, SKUIApplicationController, SSURLBag;

@interface SKUIClientContext : NSObject <SUClientInterfaceDelegatePrivate> {
    NSString *_additionalPurchaseParameters;
    SKUIApplicationController *_applicationController;
    NSBundle *_bundle;
    SUClientInterface *_clientInterface;
    NSDictionary *_configurationDictionary;
    SKUIStoreDialogController *_dialogController;
    SKUILocalizedStringDictionary *_localizedStrings;
    NSString *_metricsConfigurationIdentifier;
    NSMapTable *_metricsPageContexts;
    NSMutableArray *_navigationHistory;
    NSString *_navigationHistoryPersistenceKey;
    NSString *_purchaseAffiliateIdentifier;
    SKUIURL *_purchaseReferrerURL;
    long long _purchaseURLBagType;
    IKAppContext *_scriptAppContext;
    NSString *_storeFrontIdentifier;
    SKUIURLBag *_urlBag;
    long long _userInterfaceIdiomOverride;
}

@property(readonly) SUClientInterface * clientInterface;
@property long long userInterfaceIdiomOverride;
@property(readonly) NSString * storeFrontIdentifier;
@property(readonly) SSURLBag * URLBag;
@property(copy) NSString * metricsConfigurationIdentifier;
@property(copy) SKUIURL * purchaseReferrerURL;
@property(readonly) NSArray * navigationHistory;
@property(copy) NSString * navigationHistoryPersistenceKey;
@property(readonly) SSVPlatformContext * platformContext;
@property(getter=_applicationController,setter=_setApplicationController:) SKUIApplicationController * _applicationController;
@property(getter=_scriptAppContext,setter=_setScriptAppContext:,retain) IKAppContext * _scriptAppContext;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)defaultContext;
+ (id)_configurationDictionaryWithBagDictionary:(id)arg1;
+ (id)_cachePathForStoreFrontIdentifier:(id)arg1;

- (id)initWithConfigurationDictionary:(id)arg1;
- (void)clientInterface:(id)arg1 dispatchXEvent:(id)arg2 completionBlock:(id)arg3;
- (void)clientInterface:(id)arg1 dispatchOnPageResponseWithData:(id)arg2 response:(id)arg3;
- (id)scriptInterfaceForClientInterface:(id)arg1;
- (void)clientInterface:(id)arg1 presentDialog:(id)arg2;
- (long long)userInterfaceIdiomOverride;
- (id)_scriptAppContext;
- (void)setPurchaseReferrerURL:(id)arg1;
- (id)purchaseReferrerURL;
- (void)setNavigationHistoryPersistenceKey:(id)arg1;
- (id)navigationHistoryPersistenceKey;
- (void)setMetricsConfigurationIdentifier:(id)arg1;
- (void)loadValueForConfigurationKey:(id)arg1 completionBlock:(id)arg2;
- (id)tabBarItemsForStyle:(long long)arg1;
- (void)pushNavigationHistoryPageIdentifier:(id)arg1;
- (id)navigationHistory;
- (void)_setValue:(id)arg1 forConfigurationKey:(id)arg2;
- (id)_navigationHistory;
- (id)metricsConfigurationIdentifier;
- (id)_applicationController;
- (void)_setScriptAppContext:(id)arg1;
- (void)_setApplicationController:(id)arg1;
- (id)localizedAlertWithError:(id)arg1;
- (void)sendOnPageResponseWithDocument:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4;
- (id)metricsPageContextForViewController:(id)arg1;
- (void)sendOnXEventWithDictionary:(id)arg1 completionBlock:(id)arg2;
- (void)getDefaultMetricsControllerWithCompletionBlock:(id)arg1;
- (id)localizedStringForKey:(id)arg1 inTable:(id)arg2;
- (id)platformContext;
- (void)customizePurchase:(id)arg1;
- (void)setUserInterfaceIdiomOverride:(long long)arg1;
- (void)setMetricsPageContext:(id)arg1 forViewController:(id)arg2;
- (void)_setPurchaseURLBagType:(long long)arg1;
- (void)_setPurchaseAffiliateIdentifier:(id)arg1;
- (void)_setAdditionalPurchaseParameters:(id)arg1;
- (id)valueForConfigurationKey:(id)arg1;
- (id)storeFrontIdentifier;
- (id)clientInterface;
- (id)URLBag;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)localizedStringForKey:(id)arg1;

@end
