/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class NSDictionary, ACAccountStore, NSObject<OS_dispatch_group>, NotesDataCollectorLogger;

@interface NotesDataCollector : NSObject  {
    bool_automaticCollectionOn;
    NotesDataCollectorLogger *_logger;
    ACAccountStore *_accountStore;
    NSDictionary *_accountTypesPerIdentifierCache;
    NSObject<OS_dispatch_group> *_logDispatchGroup;
}

@property(retain) NotesDataCollectorLogger * logger;
@property(getter=isAutomaticCollectionOn) bool automaticCollectionOn;
@property(retain) ACAccountStore * accountStore;
@property(copy) NSDictionary * accountTypesPerIdentifierCache;
@property(retain) NSObject<OS_dispatch_group> * logDispatchGroup;

+ (void)clearSharedCollector;
+ (id)sharedCollector;

- (void)setLogDispatchGroup:(id)arg1;
- (void)logNoteActivityType:(id)arg1;
- (void)stopAutomaticCollection;
- (id)classifyStoresByType:(id)arg1;
- (id)freshContext;
- (void)logStoreDeltaCount:(long long)arg1 forType:(id)arg2;
- (void)logNoteDeltaCount:(long long)arg1 forStoreType:(id)arg2;
- (void)logNoteCreationDeltaCountWithAppIdentifier:(long long)arg1;
- (void)logNoteDeltaCount:(long long)arg1;
- (void)logChanges:(id)arg1;
- (void)browseAddedAndDeletedObjectsWithEntity:(id)arg1 inManagedObjectContext:(id)arg2 objectHandler:(id)arg3;
- (id)existingStoreForNote:(id)arg1;
- (void)logDeltaCountForChangedStoresInContext:(id)arg1;
- (void)logDeltaCountForChangedNotesInContext:(id)arg1;
- (id)storeTypeForAccountType:(int)arg1 accountIdentifier:(id)arg2;
- (id)existingAccountForStore:(id)arg1;
- (void)setAccountTypesPerIdentifierCache:(id)arg1;
- (bool)isAppleAccountIdentifier:(id)arg1;
- (id)accountTypesPerIdentifierCache;
- (void)logNoteCountPerStore;
- (void)logStoreCount;
- (void)logTotalNoteCount;
- (id)logDispatchGroup;
- (void)performInitialCollectionIfNeeded;
- (void)noteContextWillSaveNotification:(id)arg1;
- (void)setAutomaticCollectionOn:(bool)arg1;
- (bool)isAutomaticCollectionOn;
- (void)startAutomaticCollection;
- (void)setLogger:(id)arg1;
- (id)logger;
- (id)accountStore;
- (void)setAccountStore:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
