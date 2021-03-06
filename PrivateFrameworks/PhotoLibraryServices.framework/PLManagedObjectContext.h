/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSObject<OS_xpc_object>, <PLManagedObjectContextPTPNotificationDelegate>, NSMutableDictionary, PLMergePolicy, NSMutableSet, PLDelayedFiledSystemDeletions, NSMutableArray, PLPhotoLibrary, NSMapTable;

@interface PLManagedObjectContext : NSManagedObjectContext  {
    bool_hasMetadataChanges;
    bool_isConnectedToChangeHub;
    bool_mergingChanges;
    bool_savingDuringMerge;
    bool_isInitializingSingletons;
    bool_isBackingALAssetsLibrary;
    bool_suspendClientServerTransactions;
    PLMergePolicy *_mergePolicy;
    PLDelayedFiledSystemDeletions *_delayedDeletions;
    NSMutableArray *_delayedMomentAssetUpdates;
    NSMapTable *_delayedMomentAssetDeletions;
    NSMutableSet *_delayedCloudFeedDeletionEntries;
    NSMutableArray *_delayedCloudFeedAlbumUpdates;
    NSMutableArray *_delayedCloudFeedAssetInserts;
    NSMutableArray *_delayedCloudFeedAssetUpdates;
    NSMutableArray *_delayedCloudFeedCommentInserts;
    NSMutableArray *_delayedCloudFeedInvitationRecordUpdates;
    NSMutableArray *_delayedDupeAnalysisNormalInserts;
    NSMutableArray *_delayedDupeAnalysisCloudInserts;
    NSMutableSet *_delayedAssetsForFileSystemPersistency;
    NSMutableDictionary *_delayedSearchIndexUpdateUUIDs;
    NSMutableSet *_avalancheUUIDsForUpdate;
    NSMutableArray *_uuidForCloudDeletion;
    NSMutableArray *_albumUuidForCloudDeletion;
    NSMutableSet *_delayedAlbumOrderUpdates;
    NSMutableSet *_delayedAlbumCountUpdates;
    NSMutableDictionary *_updatedObjectsAttributes;
    NSMutableDictionary *_updatedObjectsRelationships;
    PLPhotoLibrary *_photoLibrary;
    <PLManagedObjectContextPTPNotificationDelegate> *_ptpNotificationDelegate;
    bool_regenerateVideoThumbnails;
    int _changeSource;
    NSObject<OS_xpc_object> *changeHubConnection;
}

@property PLPhotoLibrary * photoLibrary;
@property(readonly) bool isUserInterfaceContext;
@property bool regenerateVideoThumbnails;
@property bool hasMetadataChanges;
@property bool suspendClientServerTransactions;
@property int changeSource;
@property(readonly) bool mergingChanges;
@property(readonly) bool savingDuringMerge;
@property bool isInitializingSingletons;
@property NSObject<OS_xpc_object> * changeHubConnection;
@property(retain) PLDelayedFiledSystemDeletions * delayedDeletions;
@property <PLManagedObjectContextPTPNotificationDelegate> * ptpNotificationDelegate;
@property bool isBackingALAssetsLibrary;

+ (void)handleUnknownMergeEvent;
+ (void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)arg1 completionHandler:(id)arg2;
+ (void)delayedAlbumCountUpdatesFromChangeHubEvent:(id)arg1 countUpdates:(id*)arg2;
+ (void)delayedAlbumOrderingUpdatesFromChangeHubEvent:(id)arg1 orderingUpdates:(id*)arg2;
+ (void)delayedSearchIndexUpdatesFromChangeHubEvent:(id)arg1 updates:(id*)arg2;
+ (void)delayedAssetsForFileSystemPersistencyUpdatesFromChangeHubEvent:(id)arg1 assetUpdates:(id*)arg2;
+ (void)delayedDupeAnalysisDataFromChangeHubEvent:(id)arg1 normalInserts:(id*)arg2 cloudInserts:(id*)arg3;
+ (void)delayedCloudFeedDataFromChangeHubEvent:(id)arg1 albumUpdates:(id*)arg2 assetInserts:(id*)arg3 assetUpdates:(id*)arg4 commentInserts:(id*)arg5 invitationRecordUpdates:(id*)arg6 deletionEntries:(id*)arg7;
+ (void)delayedMomentDataFromChangeHubEvent:(id)arg1 insertsAndUpdates:(id*)arg2 deletes:(id*)arg3;
+ (id)relationshipNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2;
+ (id)attributeNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2;
+ (bool)hasConfiguredPhotoLibrary;
+ (bool)hasAtLeastOneAsset;
+ (void)moveOldStoreAside;
+ (id)contextForDatabaseCreation:(const char *)arg1;
+ (bool)assetsLibraryLoggingEnabled;
+ (id)allContextsNotIdenticalTo:(void*)arg1;
+ (void)mergeChangesFromRemoteContextSave:(id)arg1 intoAllContextsNotIdenticalTo:(id)arg2 completionHandler:(id)arg3;
+ (unsigned long long)indexValueForRelationshipNames:(id)arg1 entity:(id)arg2;
+ (unsigned long long)indexValueForAttributeNames:(id)arg1 entity:(id)arg2;
+ (id)_relationshipNamesByIndexByEntityNames;
+ (id)_indexesByRelationshipNamesByEntityNames;
+ (id)_propertyNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2 propertyNamesByIndexByEntityNames:(id)arg3;
+ (id)_attributeNamesByIndexByEntityNames;
+ (unsigned long long)_indexValueForPropertyNames:(id)arg1 entityName:(id)arg2 indexesByPropertyNamesByEntityNames:(id)arg3;
+ (id)_indexesByAttributeNamesByEntityNames;
+ (void)__prepareEntityPropertyLookups;
+ (bool)canMergeRemoteChanges;
+ (bool)_rebuildAndRetryPersistentStoreWithURL:(id)arg1 options:(id)arg2 coordinator:(id)arg3 forced:(bool)arg4;
+ (bool)_openAndMigrateStoreWithURL:(id)arg1 options:(id)arg2 coordinator:(id)arg3 forceSourceModelVersion:(id)arg4;
+ (void)getStoreURL:(id*)arg1 options:(id*)arg2;
+ (bool)useModelMigratorToCreateDatabase;
+ (void)recordVersion:(int)arg1 forStore:(id)arg2 extraMetadata:(id)arg3;
+ (bool)moveStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (void)getStoreURL:(id*)arg1 options:(id*)arg2 forFileURL:(id)arg3;
+ (void)configurePersistentStoreCoordinator:(id)arg1;
+ (id)sharedPersistentStoreCoordinator;
+ (id)contextForPhotoLibrary:(id)arg1 name:(const char *)arg2;
+ (bool)databaseIsMissing;
+ (bool)storeIsOldEnough;
+ (id)databasePath;
+ (id)managedObjectModel;
+ (id)managedObjectModelURL;

- (void)setIsInitializingSingletons:(bool)arg1;
- (bool)isInitializingSingletons;
- (void)setRegenerateVideoThumbnails:(bool)arg1;
- (bool)regenerateVideoThumbnails;
- (int)changeSource;
- (void)setSuspendClientServerTransactions:(bool)arg1;
- (bool)savingDuringMerge;
- (void)setChangeHubConnection:(id)arg1;
- (id)changeHubConnection;
- (id)pl_fetchObjectsWithIDs:(id)arg1 rootEntity:(id)arg2;
- (void)appendDelayedAlbumCountUpdatesToXPCMessage:(id)arg1;
- (void)getDelayedAlbumCountUpdates:(id*)arg1;
- (void)appendDelayedAlbumOrderingUpdatesToXPCMessage:(id)arg1;
- (void)getDelayedAlbumOrderingUpdates:(id*)arg1;
- (id)getAndClearRecordedAlbumForCloudDeletion;
- (id)getAndClearRecordedAssetForCloudDeletion;
- (id)getAndClearRecordedAvalancheUUIDsForUpdate;
- (void)getDelayedSearchIndexUpdates:(id*)arg1;
- (void)appendDelayedSearchIndexUpdatesToXPCMessage:(id)arg1;
- (void)recordAdditionalAssetAttributesForSearchIndexUpdate:(id)arg1;
- (void)getDelayedAssetsForFilesystemPersistencyUpdates:(id*)arg1;
- (void)appendDelayedAssetsForFileSystemPersistencyUpdate:(id)arg1;
- (void)recordAssetForFileSystemPersistencyUpdate:(id)arg1;
- (void)appendDelayedDupeAnalysisToXPCMessage:(id)arg1;
- (void)getDelayedDupeAnalysisNormalInserts:(id*)arg1 cloudInserts:(id*)arg2;
- (void)appendDelayedCloudFeedDataToXPCMessage:(id)arg1;
- (void)getDelayedCloudFeedAlbumUpdates:(id*)arg1 assetInserts:(id*)arg2 assetUpdates:(id*)arg3 commentInserts:(id*)arg4 invitationRecordUpdates:(id*)arg5 deletionEntries:(id*)arg6;
- (void)recordInvitationRecordForCloudFeedUpdate:(id)arg1;
- (void)recordCommentForCloudFeedUpdate:(id)arg1;
- (void)recordAlbumForCloudFeedUpdate:(id)arg1;
- (void)appendDelayedMomentDataToXPCMessage:(id)arg1;
- (void)getDelayedMomentInsertsAndUpdates:(id*)arg1 deletes:(id*)arg2;
- (void)getAndClearUpdatedObjectsAttributes:(id*)arg1 relationships:(id*)arg2;
- (void)recordManagedObjectWillSave:(id)arg1;
- (void)_contextObjectsDidChange:(id)arg1;
- (void)_getInsertedIDs:(id)arg1 deletedIDs:(id)arg2 changedIDs:(id)arg3 ofEntityKind:(id)arg4 fromRemoteContextDidSaveNotification:(id)arg5;
- (void)_notifyALAssetsLibraryWithChanges:(id)arg1 usingObjectIDs:(bool)arg2;
- (id)ptpNotificationDelegate;
- (id)pl_fetchObjectsWithIDs:(id)arg1;
- (bool)_tooManyAssetChangesToHandle:(unsigned long long)arg1;
- (bool)isBackingALAssetsLibrary;
- (void)_recordAlbumUUIDForSearchIndexUpdate:(id)arg1 isInsert:(bool)arg2;
- (void)_recordAssetUUIDForSearchIndexUpdate:(id)arg1 isInsert:(bool)arg2;
- (void)_recordManagedObjectUUID:(id)arg1 forSearchIndexUpdateKey:(id)arg2;
- (void)_recordNormalAssetForDupeAnalyzis:(id)arg1;
- (void)_recordStreamAssetForDupeAnalyzis:(id)arg1;
- (bool)_isValidDelete:(id)arg1;
- (id)delayedDeletions;
- (bool)suspendClientServerTransactions;
- (void)_informPTPDelegateAboutChangesFromRemoteContextSaveNotification:(id)arg1;
- (void)disconnectFromChangeHub;
- (void)setDelayedDeletions:(id)arg1;
- (void)setPtpNotificationDelegate:(id)arg1;
- (void)tearDownLocalChangeNotifications;
- (void)setupLocalChangeNotifications;
- (void)connectToChangeHub;
- (id)initWithConcurrencyType:(unsigned long long)arg1 useSharedPersistentStoreCoordinator:(bool)arg2;
- (void)recordAssetForAlbumCountUpdate:(id)arg1;
- (void)registerFilesystemDeletionInfo:(id)arg1;
- (void)recordAssetForSearchIndexUpdate:(id)arg1;
- (void)recordAssetForCloudDeletion:(id)arg1;
- (void)recordAvalancheUUIDForUpdate:(id)arg1;
- (void)recordAssetForDupeAnalysis:(id)arg1;
- (void)recordAssetForCloudFeedUpdate:(id)arg1;
- (void)recordAssetForMomentUpdate:(id)arg1;
- (void)recordAlbumForSearchIndexUpdate:(id)arg1;
- (void)recordAlbumCountUpdate:(id)arg1;
- (void)recordAlbumForOrderingUpdate:(id)arg1;
- (void)recordAlbumForCloudDeletion:(id)arg1;
- (bool)mergingChanges;
- (void)setChangeSource:(int)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)withDispatchGroup:(id)arg1 performBlock:(id)arg2;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (id)globalValueForKey:(id)arg1;
- (id)photoLibrary;
- (bool)isUserInterfaceContext;
- (void)setHasMetadataChanges:(bool)arg1;
- (bool)hasMetadataChanges;
- (void)setIsBackingALAssetsLibrary:(bool)arg1;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(bool)arg2;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (bool)isReadOnly;
- (bool)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (bool)save:(id*)arg1;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (void)dealloc;

@end
