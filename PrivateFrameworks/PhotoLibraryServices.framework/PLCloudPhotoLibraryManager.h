/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSObject<OS_dispatch_source>, NSString, PLCloudTaskManager, NSMutableArray, CPLLibraryManager, NSObject<OS_dispatch_queue>, PLPhotoLibrary, NSObject<OS_xpc_object>;

@interface PLCloudPhotoLibraryManager : NSObject <CPLResourceProgressDelegate, CPLLibraryManagerDelegate, PLForegroundObserver> {
    NSMutableArray *_uploadBatchArray;
    unsigned long long _lastKnownChangeHubEventIndex;
    NSString *_lastKnownStoreUUID;
    bool_wasRebuild;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_xpc_object> *_hubConnection;
    unsigned char _nodeUUID[16];
    NSMutableArray *_cameraAsset;
    bool_processingChange;
    unsigned long long _mode;
    bool_pushOnIdle;
    bool_pullOnIdle;
    bool_modeChangePending;
    bool_closeLibrary;
    bool_initialUpload;
    unsigned long long _uploadCounterCheck;
    unsigned long long _downloadCounterCheck;
    NSMutableArray *_downloadedDeleteUuid;
    PLPhotoLibrary *_photoLibrary;
    CPLLibraryManager *_cplLibrary;
    bool_stopping;
    bool_stopped;
    bool_needToResume;
    bool_needSoftReset;
    bool_pausing;
    unsigned long long _defaultResourceDownloadType;
    PLCloudTaskManager *_taskManager;
    NSObject<OS_dispatch_source> *_unpauseDispatchTimer;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)descriptionForResourceType:(unsigned long long)arg1;

- (void)libraryManagerHasChangesToPull:(id)arg1;
- (void)libraryManager:(id)arg1 uploadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)libraryManager:(id)arg1 uploadDidStartForResourceTransferTask:(id)arg2;
- (void)libraryManager:(id)arg1 backgroundDownloadDidFailForResource:(id)arg2;
- (void)libraryManager:(id)arg1 backgroundDownloadDidFinishForResource:(id)arg2;
- (void)libraryManager:(id)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;
- (void)libraryManager:(id)arg1 downloadDidStartForResourceTransferTask:(id)arg2;
- (void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (bool)createPathIfNeeded:(id)arg1;
- (void)deleteResourcesIfSafe:(id)arg1 completionHandler:(id)arg2;
- (void)sizeOfResourcesToUploadDidChangeForLibraryManager:(id)arg1;
- (void)libraryManagerStatusDidChange:(id)arg1;
- (id)_copyTemporaryAssetToFinalPhotoLocationWithResourceIdentity:(id)arg1 withExtension:(id)arg2 withName:(id)arg3;
- (void)dumpStatusIncludingDaemon:(bool)arg1;
- (void)doSoftResetSync;
- (void)downloadAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(bool)arg3 clientBundleID:(id)arg4 taskDidBeginHandler:(id)arg5 progressBlock:(id)arg6 completionHandler:(id)arg7;
- (void)fetchPublicURLForAsset:(id)arg1 resourceType:(unsigned long long)arg2 completionHandler:(id)arg3;
- (bool)isResourceTransferTaskAliveWithTaskWithIdentifier:(id)arg1;
- (void)cancelResourceTransferTaskWithIdentifier:(id)arg1;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(bool)arg2 context:(id)arg3;
- (void)libraryManagerDidStartSynchronization:(id)arg1;
- (void)_addAlternateOriginalResource:(id)arg1 forAsset:(id)arg2;
- (void)_updateThumbnailDataForAsset:(id)arg1 withImageFileURL:(id)arg2;
- (void)_linkFileFrom:(id)arg1 to:(id)arg2;
- (void)_updateAsset:(id)arg1 withImageFileURL:(id)arg2;
- (short)_placeHolderKindFromCPLResourceType:(unsigned long long)arg1;
- (void)_updateWithCPLResource:(id)arg1;
- (void)_handleRelationRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleExpungedRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleDeleteRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleAssetRecords:(id)arg1 andMasterRecords:(id)arg2 inLibrary:(id)arg3;
- (void)_handleAlbumRecords:(id)arg1 inLibrary:(id)arg2;
- (void)processDownloadBatchWithSession:(id)arg1;
- (void)_runOnIsolationQueueAfterDelayInSeconds:(unsigned long long)arg1 withBlock:(id)arg2;
- (void)_cleanUploadedResources:(id)arg1;
- (bool)needResetSyncErrorType:(id)arg1;
- (id)lastKnownCloudVersionFromDisk;
- (void)_processUploadBatchWithStartupFailureCount:(unsigned long long)arg1;
- (id)createBatchesForChanges:(id)arg1 withContainerChangeForAsset:(bool)arg2;
- (id)filterCloudDeleteForKey:(const char *)arg1 fromEvent:(id)arg2;
- (void)sortRelationshipData:(id)arg1 forRelationshipUpdate:(id*)arg2 inManagedObjectContext:(id)arg3;
- (void)sortData:(id)arg1 withMode:(int)arg2 forAssets:(id*)arg3 adjustedAssets:(id*)arg4 andAlbums:(id*)arg5 andOrders:(id*)arg6 inManagedObjectContext:(id)arg7;
- (bool)asset:(id)arg1 isIn:(id)arg2;
- (bool)asset:(id)arg1 isInOrderList:(id)arg2;
- (bool)shouldProcessDuringInitialUpload:(id)arg1;
- (void)prepareEventForUploadProcess:(id)arg1;
- (void)sendAssets:(id)arg1 toBatchManager:(id)arg2;
- (void)sendAlbums:(id)arg1 toBatchManager:(id)arg2;
- (void)uploadToCloudForEvents:(id)arg1;
- (void)saveCPLPlistVersion:(id)arg1 forVersionKey:(id)arg2;
- (void)downloadResource:(id)arg1 highPriority:(bool)arg2 clientBundleID:(id)arg3 taskDidBeginHandler:(id)arg4 progressBlock:(id)arg5 completionHandler:(id)arg6;
- (void)_recoverFromPauseUnderDiskPressureIfNeeded;
- (void)saveStoreUUID:(id)arg1;
- (void)updateLastKnownIndexFromChangeHub;
- (unsigned int)registerToChangeHubNotification;
- (id)readCPLPlist;
- (unsigned long long)diskSpaceLevel;
- (void)_doResetSync:(bool)arg1;
- (void)stopAll;
- (void)closeCPLLibrary;
- (void)downloadFromCloud;
- (void)uploadFullPhotoLibraryToCloud;
- (void)processUploadBatch;
- (void)fetchNewEventsFromChangeHub;
- (void)openCPLLibrary;
- (void)unpause;
- (void)_processNextTransaction;
- (id)_debugNameForMode:(unsigned long long)arg1;
- (void)setupHubConnection;
- (void)deactivateCPLLibrary;
- (void)deleteCPLPlist;
- (void)resetFlags;
- (bool)_setupTimerForUnpause;
- (void)_stopUnpauseTimer;
- (void)unregisterToChangeHubNotification;
- (void)_resetCPLLibrary;
- (bool)_canExternallyTransitionToNewLibraryModeIgnoringPause:(bool)arg1;
- (void)_deactivateCPLLibrary;
- (void)_runBlockOnIsolationQueue:(id)arg1;
- (void)_cleanupCPLLibrary;
- (void)notifyCPLLibraryOnReset;
- (void)transitionToState:(unsigned long long)arg1;
- (id)getCPLState;
- (void)addLogMark:(id)arg1;
- (void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(id)arg2;
- (void)deleteExpiredTrashBinObjects;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)sync;
- (id)init;
- (void)dealloc;

@end
