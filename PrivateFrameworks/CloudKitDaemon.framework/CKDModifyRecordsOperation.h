/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSData, NSArray, CKDProtocolTranslator, CKDRecordCache, NSMutableDictionary, NSDictionary, NSObject<OS_dispatch_group>;

@interface CKDModifyRecordsOperation : CKDDatabaseOperation  {
    CKDProtocolTranslator *_translator;
    bool_retryPCSFailures;
    bool_canSetPreviousProtectionEtag;
    bool_retriedRecords;
    bool_shouldOnlySaveAssetContent;
    bool_haveOutstandingMetadatas;
    bool_atomic;
    int _numPCSRetries;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _saveProgressBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _saveCompletionBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _deleteCompletionBlock;

    NSArray *_recordsToSave;
    NSArray *_recordIDsToDelete;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSDictionary *_conflictLosersToResolveByRecordID;
    NSDictionary *_metadatasByRecordID;
    NSMutableDictionary *_modifyMetadatasByZoneID;
    long long _savePolicy;
    NSData *_clientChangeTokenData;
    NSMutableDictionary *_recordsByServerID;
    CKDRecordCache *_cache;
}

@property bool retryPCSFailures;
@property bool canSetPreviousProtectionEtag;
@property(copy) id saveProgressBlock;
@property(copy) id saveCompletionBlock;
@property(copy) id deleteCompletionBlock;
@property unsigned long long state;
@property(retain) NSObject<OS_dispatch_group> * stateTransitionGroup;
@property(retain) NSArray * recordsToSave;
@property(retain) NSArray * recordIDsToDelete;
@property(retain) NSDictionary * recordIDsToDeleteToEtags;
@property(retain) NSDictionary * conflictLosersToResolveByRecordID;
@property(retain) NSDictionary * metadatasByRecordID;
@property(retain) NSMutableDictionary * modifyMetadatasByZoneID;
@property int numPCSRetries;
@property long long savePolicy;
@property(copy) NSData * clientChangeTokenData;
@property(retain) NSMutableDictionary * recordsByServerID;
@property(retain) CKDRecordCache * cache;
@property bool retriedRecords;
@property bool shouldOnlySaveAssetContent;
@property bool haveOutstandingMetadatas;
@property bool atomic;
@property(readonly) CKDProtocolTranslator * translator;


- (void)setRetriedRecords:(bool)arg1;
- (bool)retriedRecords;
- (void)setRecordsByServerID:(id)arg1;
- (void)setModifyMetadatasByZoneID:(id)arg1;
- (void)_fetchPCSDataForMetadata:(id)arg1;
- (void)_loadPCSDataForMetadata:(id)arg1;
- (void)_createAndSavePCSForMetadata:(id)arg1 withZonePCSData:(id)arg2;
- (void)_handlePCSData:(id)arg1 forMetadata:(id)arg2 withError:(id)arg3;
- (bool)_canSetPreviousProtectionEtag;
- (bool)canSetPreviousProtectionEtag;
- (void)_performSavePackages:(id)arg1;
- (void)_performSaveAssets:(id)arg1;
- (bool)_addAssetToSave:(id)arg1 withRecordKey:(id)arg2 record:(id)arg3 error:(id*)arg4;
- (id)_wrapAssetKey:(id)arg1 forRecord:(id)arg2 withError:(id*)arg3;
- (id)saveProgressBlock;
- (bool)_wrapEncryptedDataOnRecord:(id)arg1;
- (bool)_wrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2 forField:(id)arg3;
- (void)_handleDecryptionFailure:(id)arg1 forRecordID:(id)arg2;
- (void)setMetadatasByRecordID:(id)arg1;
- (id)_createModifyRequestWithRecordsToSave:(id)arg1 recordsToDelete:(id)arg2 recordsToDeleteToEtags:(id)arg3 metadatasByRecordID:(id)arg4;
- (id)metadatasByRecordID;
- (void)_handleRecordDeleted:(id)arg1 metadata:(id)arg2 responseCode:(id)arg3;
- (void)_handleRecordSaved:(id)arg1 metadata:(id)arg2 etag:(id)arg3 dateStatistics:(id)arg4 responseCode:(id)arg5 keysAssociatedWithETag:(id)arg6 recordForOplockFailure:(id)arg7 serverRecord:(id)arg8;
- (void)_clearProtectionDataForRecord:(id)arg1;
- (bool)retryPCSFailures;
- (id)recordsByServerID;
- (void)_performCallbacksForAtomicZoneMetadatas:(id)arg1;
- (void)_performCallbacksForNonAtomicZoneMetadatas:(id)arg1;
- (void)setHaveOutstandingMetadatas:(bool)arg1;
- (void)setNumPCSRetries:(int)arg1;
- (id)modifyMetadatasByZoneID;
- (int)numPCSRetries;
- (bool)haveOutstandingMetadatas;
- (void)_continueRecordsModify;
- (void)_verifyRecordEncryption;
- (bool)_prepareRecordsForSave;
- (void)_saveOnlyAssetContent;
- (void)_savePackages;
- (void)_fetchRecordPCSData;
- (bool)_topoSortRecords;
- (void)_performMetadataCallbacks;
- (id)deleteCompletionBlock;
- (id)saveCompletionBlock;
- (bool)_saveAssets;
- (void)setCanSetPreviousProtectionEtag:(bool)arg1;
- (void)setRetryPCSFailures:(bool)arg1;
- (id)translator;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (void)setSaveProgressBlock:(id)arg1;
- (void)setDeleteCompletionBlock:(id)arg1;
- (void)setSaveCompletionBlock:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)setConflictLosersToResolveByRecordID:(id)arg1;
- (id)conflictLosersToResolveByRecordID;
- (void)setAtomic:(bool)arg1;
- (bool)atomic;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (id)recordIDsToDeleteToEtags;
- (void)setShouldOnlySaveAssetContent:(bool)arg1;
- (bool)shouldOnlySaveAssetContent;
- (void)setSavePolicy:(long long)arg1;
- (long long)savePolicy;
- (void)setRecordIDsToDelete:(id)arg1;
- (id)recordIDsToDelete;
- (void)setRecordsToSave:(id)arg1;
- (id)recordsToSave;
- (void)setClientChangeTokenData:(id)arg1;
- (id)clientChangeTokenData;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (id)cache;
- (void).cxx_destruct;
- (void)setCache:(id)arg1;

@end
