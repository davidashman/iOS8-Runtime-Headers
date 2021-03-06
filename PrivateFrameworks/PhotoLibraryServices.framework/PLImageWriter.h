/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSCountedSet, NSRecursiveLock, PLXPCTransaction, NSMutableDictionary, NSMutableArray;

@interface PLImageWriter : NSObject <PLPhotoBakedThumbnailsDelegate> {
    NSMutableArray *_highPriorityJobs;
    NSCountedSet *_unfinishedHighPriorityJobs;
    unsigned long long _highPrioritySequentialJobCount;
    NSMutableArray *_lowPriorityJobs;
    NSCountedSet *_unfinishedLowPriorityJobs;
    NSRecursiveLock *_jobsLock;
    int _unfinishedJobCount;
    int _jobQueueAvailabilityToken;
    bool_writerThreadRunning;
    bool_databaseIsCorrupt;
    PLXPCTransaction *_transaction;
    NSMutableDictionary *_inProgressAvalancheFds;
}

+ (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext { }*)arg2;
+ (bool)setAdjustmentsForNewPhoto:(id)arg1 withEffectFilterName:(id)arg2 filteredImagePath:(id)arg3 isSubstandardRender:(bool)arg4;
+ (void)decorateThumbnailInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2 duration:(id)arg3 inContext:(struct CGContext { }*)arg4 format:(int)arg5;
+ (id)sharedWriter;

- (void)setAvalancheInProgress:(bool)arg1 uuid:(id)arg2;
- (id)uuidFromIncomingFilename:(id)arg1;
- (bool)canEnqueueJob:(id)arg1;
- (void)_processJob:(id)arg1;
- (void)_processDaemonJob:(id)arg1;
- (void)_processCrashRecoveryJob:(id)arg1;
- (void)_processAutodeleteEmptyAlbumJob:(id)arg1;
- (void)_processIngestedSyncedAssetJob:(id)arg1;
- (void)_processSavePhotoStreamImageToCameraRollJob:(id)arg1;
- (void)_processReenqueueAssetUUIDsToPhotoStreamJob:(id)arg1;
- (void)_enablePhotoStreamJob:(id)arg1;
- (void)_processDeletePhotoStreamAssetsWithUUIDs:(id)arg1;
- (void)_processSyncedVideoSaveJob:(id)arg1;
- (void)_processImportImageJob:(id)arg1;
- (void)_processAvalancheJob:(id)arg1;
- (void)_processBatchImageJob:(id)arg1;
- (void)_processVideoSaveJob:(id)arg1;
- (void)_processVideoJob:(id)arg1;
- (bool)_sufficientDiskSpaceToCopyVideoAtPath:(id)arg1;
- (void)_setAdjustmentsForNewVideo:(id)arg1 withAdjustmentsDictionary:(id)arg2;
- (void)_decorateThumbnail:(id)arg1;
- (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)_handleAvalancheCrashRecovery:(id)arg1;
- (id)pathForNewAssetPathAtAlbumDirectoryPath:(id)arg1 assetType:(unsigned int)arg2 extension:(id)arg3;
- (void)_processDeletePhotoStreamDataJob:(id)arg1;
- (void)_processImageJob:(id)arg1;
- (void)_decrementJobCount:(id)arg1;
- (void)_removeInProgressExtendedAttributesForFileAtURL:(id)arg1;
- (void)_removeTransientKeys:(id)arg1;
- (id)cameraAssetPathForNewAssetWithExtension:(id)arg1;
- (void)_writerThread;
- (void)_incrementJobCount:(id)arg1;
- (bool)_isHighPriorityJob:(id)arg1;
- (void)_postJobQueueNotificationIsAvailable:(bool)arg1;
- (bool)enqueueJob:(id)arg1;
- (id)init;
- (void)dealloc;

@end
