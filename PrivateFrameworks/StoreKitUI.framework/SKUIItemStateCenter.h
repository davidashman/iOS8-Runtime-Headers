/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSHashTable, NSString, SSAppPurchaseHistoryDatabase, NSMutableDictionary, NSCountedSet, NSMutableArray, NSObject<OS_dispatch_queue>, SSDownloadManager, SSSoftwareUpdatesStore;

@interface SKUIItemStateCenter : NSObject <SSDownloadManagerObserver> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _appInstallRestricted;
    SSSoftwareUpdatesStore *_appUpdatesStore;
    BOOL _canAccessAppUpdates;
    BOOL _canAccessPurchaseHistory;
    SSDownloadManager *_downloadManager;
    NSMutableArray *_finishLoadBlocks;
    long long _gratisState;
    long long _loadCount;
    NSMutableDictionary *_itemStates;
    NSObject<OS_dispatch_queue> *_mediaLibraryQueue;
    NSMutableArray *_mediaLibraries;
    NSCountedSet *_observedLibraryItems;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
    long long _parentalControlsRank;
    SSAppPurchaseHistoryDatabase *_purchaseHistoryDatabase;
    BOOL _runningInStoreDemoMode;
}

@property(getter=isApplicationInstallRestricted,readonly) bool applicationInstallRestricted;
@property(getter=isGratisEligible,readonly) bool gratisEligible;
@property(readonly) long long parentalControlsRank;
@property(getter=isRunningInStoreDemoMode,readonly) bool runningInStoreDemoMode;
@property(readonly) SSSoftwareUpdatesStore * appUpdatesStore;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)defaultCenter;

- (void)_reloadDownloadManager;
- (void)_restrictionsChangedNotification:(id)arg1;
- (id)_setStateFlag:(unsigned long long)arg1 forItemsWithIdentifiers:(id)arg2 sendNotification:(bool)arg3;
- (void)purchaseTone:(id)arg1 withProperties:(id)arg2 clientContext:(id)arg3 completionBlock:(id)arg4;
- (id)gratisEligibleItemIdentifiers;
- (void)findLibraryItemsForContentIdentifiers:(id)arg1 options:(id)arg2 completionBlock:(id)arg3;
- (void)endObservingLibraryItems:(id)arg1;
- (void)beginObservingLibraryItems:(id)arg1;
- (void)addManifestDownloadWithURL:(id)arg1 placeholderMetadata:(id)arg2;
- (void)removeMediaLibrary:(id)arg1;
- (void)reloadMediaLibrary:(id)arg1;
- (void)reloadGratisEligibilityWithBundleIdentifiers:(id)arg1 clientContext:(id)arg2;
- (void)purchaseItems:(id)arg1 withCompletionBlock:(id)arg2;
- (id)performActionForItem:(id)arg1 withCompletionBlock:(id)arg2;
- (bool)isItemRestrictedWithParentalControlsRank:(long long)arg1;
- (bool)isGratisEligible;
- (void)finishLoadingWithCompletionBlock:(id)arg1;
- (void)addMediaLibrary:(id)arg1;
- (id)_setStateFlag:(unsigned long long)arg1 forOnlyItemsWithIdentifiers:(id)arg2 sendNotification:(bool)arg3;
- (void)_setInstalledItems:(id)arg1;
- (void)_setPurchaseHistoryItemsWithIdentifiers:(id)arg1;
- (id)_purchaseHistoryDatabase;
- (void)_removePurchasingItemsForPurchases:(id)arg1;
- (void)_notifyObserversOfPurchasesResponses:(id)arg1;
- (void)_replacePurchasingItem:(id)arg1 withDownloadIDs:(id)arg2;
- (void)_enumerateAvailableItemsForLibraryItems:(id)arg1 usingBlock:(id)arg2;
- (void)_updatesStoreChangeNotification:(id)arg1;
- (void)_notifyObserversOfRestrictionsChange;
- (void)_notifyObserversOfMediaLibraryChange;
- (id)_copyItemsStatesForLibraryItems:(id)arg1;
- (void)_notifyObserversOfStateChanges:(id)arg1;
- (void)reloadFromServerWithCompletionBlock:(id)arg1;
- (void)performActionForLibraryItem:(id)arg1;
- (void)getUpdatesWithCompletionBlock:(id)arg1;
- (void)_setAvailableUpdatesWithUpdates:(id)arg1 decrementLoadCount:(bool)arg2;
- (id)appUpdatesStore;
- (void)_reloadMediaLibraryStateForItems:(id)arg1;
- (id)_appUpdatesStore;
- (id)_removeState:(unsigned long long)arg1 forItemIdentifier:(id)arg2;
- (void)_notifyObserversOfStateChange:(id)arg1;
- (void)_reloadStateForObservedMediaLibraryItems;
- (void)_setGratisIdentifiers:(id)arg1 error:(id)arg2;
- (id)_newPurchasesWithItems:(id)arg1;
- (void)purchaseItems:(id)arg1 withClientContext:(id)arg2 completionBlock:(id)arg3;
- (void)_performPurchases:(id)arg1 withClientContext:(id)arg2 completionBlock:(id)arg3;
- (id)_newPurchaseWithItem:(id)arg1 offer:(id)arg2;
- (id)_newPurchasesWithBundleItem:(id)arg1 bundleOffer:(id)arg2;
- (void)cancelDownloadForItemWithIdentifier:(long long)arg1;
- (void)purchaseItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(id)arg4;
- (id)metricsActionTypeForItem:(id)arg1;
- (id)performActionForItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(id)arg4;
- (id)performActionForItem:(id)arg1 clientContext:(id)arg2 completionBlock:(id)arg3;
- (id)stateForItemWithIdentifier:(long long)arg1;
- (long long)parentalControlsRank;
- (bool)isApplicationInstallRestricted;
- (void)_fireFinishLoadBlocksIfNecessary;
- (void)_reloadSoftwareLibrary;
- (void)_reloadPurchaseHistory;
- (void)_reloadAppUpdatesStore;
- (id)_addState:(unsigned long long)arg1 forItemIdentifier:(id)arg2;
- (void)_setDownloads:(id)arg1;
- (void)reloadFromServer;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)addDownloads:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (id)init;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (bool)isRunningInStoreDemoMode;

@end
