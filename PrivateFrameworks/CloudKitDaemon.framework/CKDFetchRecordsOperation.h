/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSSet, NSMutableDictionary, NSDictionary, CKDRecordCache, NSMutableArray, NSMapTable, NSObject<OS_dispatch_group>;

@interface CKDFetchRecordsOperation : CKDDatabaseOperation  {
    bool_useCachedEtags;
    bool_shouldFetchAssetContent;
    NSArray *_fullRecordsToFetch;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _recordFetchProgressBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _recordFetchCompletionBlock;

    NSArray *_recordIDsToFetch;
    NSMutableDictionary *_cachedRecords;
    NSSet *_desiredKeySet;
    NSDictionary *_recordIDsToVersionETags;
    NSDictionary *_desiredPackageFileIndices;
    NSObject<OS_dispatch_group> *_fetchRecordsGroup;
    NSMutableDictionary *_assetFetchGroupsByRecord;
    NSMutableDictionary *_errorsByRecordID;
    NSMutableArray *_assetsToFetch;
    NSMutableArray *_packagesToFetch;
    NSMapTable *_desiredPackageFileIndexSetsByPackage;
    NSDictionary *_signaturesOfAssetsByRecordIDAndKey;
    NSSet *_assetFieldNamesToPublishURLs;
    unsigned long long _requestedTTL;
    unsigned long long _URLOptions;
    CKDRecordCache *_cache;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

@property bool useCachedEtags;
@property(retain) NSArray * fullRecordsToFetch;
@property(copy) id recordFetchProgressBlock;
@property(copy) id recordFetchCompletionBlock;
@property(retain) NSArray * recordIDsToFetch;
@property(retain) NSMutableDictionary * cachedRecords;
@property(retain) NSSet * desiredKeySet;
@property(retain) NSDictionary * recordIDsToVersionETags;
@property(retain) NSDictionary * desiredPackageFileIndices;
@property(retain) NSObject<OS_dispatch_group> * fetchRecordsGroup;
@property(retain) NSMutableDictionary * assetFetchGroupsByRecord;
@property(retain) NSMutableDictionary * errorsByRecordID;
@property(retain) NSMutableArray * assetsToFetch;
@property(retain) NSMutableArray * packagesToFetch;
@property(retain) NSMapTable * desiredPackageFileIndexSetsByPackage;
@property(retain) NSDictionary * signaturesOfAssetsByRecordIDAndKey;
@property bool shouldFetchAssetContent;
@property(retain) NSSet * assetFieldNamesToPublishURLs;
@property unsigned long long requestedTTL;
@property unsigned long long URLOptions;
@property(retain) CKDRecordCache * cache;
@property(retain) NSDictionary * webSharingIdentityDataByRecordID;


- (void)setDesiredPackageFileIndexSetsByPackage:(id)arg1;
- (void)setPackagesToFetch:(id)arg1;
- (void)setErrorsByRecordID:(id)arg1;
- (void)setAssetFetchGroupsByRecord:(id)arg1;
- (void)setFetchRecordsGroup:(id)arg1;
- (void)setCachedRecords:(id)arg1;
- (void)_didFetchPackage:(id)arg1 withError:(id)arg2;
- (id)packagesToFetch;
- (void)_didFetchAsset:(id)arg1 withError:(id)arg2;
- (id)recordFetchProgressBlock;
- (id)desiredPackageFileIndexSetsByPackage;
- (void)_enqueuePackage:(id)arg1 forRecord:(id)arg2;
- (void)_enqueueAsset:(id)arg1 forRecord:(id)arg2 ifSignatureMatches:(id)arg3;
- (void)_decryptPropertiesOnRecord:(id)arg1;
- (void)_continueHandleFetchedRecord:(id)arg1;
- (void)setError:(id)arg1 forRecordID:(id)arg2;
- (id)recordFetchCompletionBlock;
- (void)_enqueueAssetContentFetchesForRecord:(id)arg1;
- (id)_assetFetchGroupForRecord:(id)arg1;
- (id)errorForRecordID:(id)arg1;
- (id)assetFetchGroupsByRecord;
- (id)errorsByRecordID;
- (id)fullRecordsToFetch;
- (id)fetchRecordsGroup;
- (void)_handleRecordFetch:(id)arg1 recordID:(id)arg2 etagMatched:(bool)arg3 responseCode:(id)arg4;
- (id)cachedRecords;
- (bool)useCachedEtags;
- (void)_fetchPackages;
- (id)assetFieldNamesToPublishURLs;
- (void)setUseCachedEtags:(bool)arg1;
- (void)setAssetFieldNamesToPublishURLs:(id)arg1;
- (void)_fetchRecords;
- (void)setDesiredKeySet:(id)arg1;
- (id)desiredKeySet;
- (void)setRecordIDsToFetch:(id)arg1;
- (id)recordIDsToFetch;
- (void)setFullRecordsToFetch:(id)arg1;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (void)setAssetsToFetch:(id)arg1;
- (void)_fetchAssets;
- (id)assetsToFetch;
- (void)setRecordFetchCompletionBlock:(id)arg1;
- (void)setRecordFetchProgressBlock:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)setWebSharingIdentityDataByRecordID:(id)arg1;
- (id)webSharingIdentityDataByRecordID;
- (void)setSignaturesOfAssetsByRecordIDAndKey:(id)arg1;
- (id)signaturesOfAssetsByRecordIDAndKey;
- (void)setDesiredPackageFileIndices:(id)arg1;
- (id)desiredPackageFileIndices;
- (void)setRecordIDsToVersionETags:(id)arg1;
- (id)recordIDsToVersionETags;
- (void)setURLOptions:(unsigned long long)arg1;
- (unsigned long long)URLOptions;
- (void)setRequestedTTL:(unsigned long long)arg1;
- (unsigned long long)requestedTTL;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (bool)shouldFetchAssetContent;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (id)cache;
- (void).cxx_destruct;
- (void)setCache:(id)arg1;

@end
