/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLIndexMapper, NSURL, NSDate, NSPredicate, NSDictionary, NSMutableIndexSet, NSOrderedSet, <NSObject><NSCopying>, NSString, NSObject<PLAlbumProtocol>, NSMutableOrderedSet, NSIndexSet, PLManagedAsset, NSArray, NSNumber, UIImage;

@interface PLFilteredAlbum : NSObject <PLUserEditableAlbumProtocol, PLCloudSharedAlbumProtocol, PLIndexMapperDataSource, PLIndexMappingCache> {
    PLIndexMapper *_indexMapper;
    NSMutableIndexSet *_filteredIndexes;
    bool_backingAlbumSupportsEdits;
    bool_backingAlbumSupportsCloudShared;
    NSMutableOrderedSet *_weak_assets;
    boolisObservingContextChanges;
    int filter;
    struct NSObject { Class x1; } *_backingAlbum;
    NSPredicate *predicate;
    NSArray *_filterParameters;
}

@property int filter;
@property(readonly) NSArray * filterParameters;
@property(retain,readonly) PLIndexMapper * indexMapper;
@property(retain) NSObject<PLAlbumProtocol> * backingAlbum;
@property(retain) NSPredicate * predicate;
@property bool isObservingContextChanges;
@property NSMutableOrderedSet * _assets;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(retain,readonly) NSString * uuid;
@property(retain,readonly) NSString * title;
@property(copy,readonly) NSString * localizedTitle;
@property(retain,readonly) NSOrderedSet * assets;
@property(readonly) unsigned long long approximateCount;
@property(readonly) unsigned long long assetsCount;
@property(readonly) unsigned long long photosCount;
@property(readonly) unsigned long long videosCount;
@property(readonly) bool isEmpty;
@property(retain) PLManagedAsset * keyAsset;
@property(retain) PLManagedAsset * secondaryKeyAsset;
@property(retain) PLManagedAsset * tertiaryKeyAsset;
@property(readonly) bool canShowComments;
@property(readonly) bool canShowAvalancheStacks;
@property(copy,readonly) NSArray * localizedLocationNames;
@property(retain,readonly) NSDate * startDate;
@property(retain,readonly) NSDate * endDate;
@property(retain,readonly) NSNumber * kind;
@property(readonly) int kindValue;
@property(retain,readonly) NSMutableOrderedSet * mutableAssets;
@property bool hasUnseenContentBoolValue;
@property(copy,readonly) NSString * name;
@property(retain,readonly) UIImage * posterImage;
@property(readonly) bool isLibrary;
@property(readonly) bool isCameraAlbum;
@property(readonly) bool isPanoramasAlbum;
@property(readonly) bool isWallpaperAlbum;
@property(readonly) bool isPhotoStreamAlbum;
@property(readonly) bool isCloudSharedAlbum;
@property(readonly) bool isPendingPhotoStreamAlbum;
@property(readonly) bool isStandInAlbum;
@property(readonly) bool isFolder;
@property(readonly) bool isOwnedCloudSharedAlbum;
@property(readonly) bool isFamilyCloudSharedAlbum;
@property(readonly) bool isMultipleContributorCloudSharedAlbum;
@property(readonly) bool isRecentlyAddedAlbum;
@property(readonly) bool canContributeToCloudSharedAlbum;
@property(readonly) bool shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(retain) NSString * importSessionID;
@property(retain,readonly) NSURL * groupURL;
@property(copy,readonly) id sortingComparator;
@property int pendingItemsCount;
@property int pendingItemsType;
@property(retain,readonly) NSMutableOrderedSet * userEditableAssets;
@property(retain) NSString * cloudGUID;
@property(retain) NSDictionary * cloudMetadata;
@property(retain) NSString * cloudOwnerFirstName;
@property(retain) NSString * cloudOwnerLastName;
@property(retain) NSString * cloudOwnerFullName;
@property(retain) NSString * cloudOwnerEmail;
@property(retain) NSString * cloudOwnerHashedPersonID;
@property(retain) NSDate * cloudSubscriptionDate;
@property(retain) NSString * publicURL;
@property(retain) NSOrderedSet * invitationRecords;
@property(retain) NSNumber * unseenAssetsCount;
@property unsigned long long unseenAssetsCountIntegerValue;
@property(retain) NSNumber * cloudPublicURLEnabled;
@property(retain) NSNumber * cloudPublicURLEnabledLocal;
@property(retain) NSNumber * cloudMultipleContributorsEnabled;
@property(retain) NSNumber * cloudMultipleContributorsEnabledLocal;
@property(retain) NSDate * cloudLastInterestingChangeDate;
@property(retain) NSDate * cloudCreationDate;
@property(retain) NSDate * cloudLastContributionDate;
@property(retain) NSString * cloudPersonID;
@property(readonly) int cloudRelationshipStateValue;
@property(readonly) int cloudRelationshipStateLocalValue;
@property(retain,readonly) NSString * localizedSharedWithLabel;
@property(retain,readonly) NSOrderedSet * cloudAlbumSubscriberRecords;
@property(retain,readonly) NSDate * cloudFirstRecentBatchDate;
@property bool cloudNotificationsEnabled;
@property(copy,readonly) NSIndexSet * filteredIndexes;
@property(copy,readonly) <NSObject><NSCopying> * cachedIndexMapState;

+ (struct NSObject { Class x1; }*)unfilteredAlbum:(struct NSObject { Class x1; }*)arg1;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 intersectFilter:(int)arg2;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2;
+ (id)filteredIndexesInAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
+ (id)predicateForAlbumFilter:(int)arg1 parameters:(id)arg2;
+ (id)descriptionForAlbumFilter:(int)arg1 parameters:(id)arg2;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2 parameters:(id)arg3;

- (bool)isObservingContextChanges;
- (void)replaceFilteredAssetsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;
- (void)replaceObjectInFilteredAssetsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeFilteredAssetsAtIndexes:(id)arg1;
- (void)insertFilteredAssets:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromFilteredAssetsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inFilteredAssetsAtIndex:(unsigned long long)arg2;
- (void)getFilteredAssets:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)filteredAssetsAtIndexes:(id)arg1;
- (id)objectInFilteredAssetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexInFilteredAssetsOfObject:(id)arg1;
- (unsigned long long)countOfFilteredAssets;
- (id)indexMapper;
- (id)cachedIndexMapState;
- (id)currentStateForChange;
- (Class)derivedChangeNotificationClass;
- (bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (bool)shouldIncludeObjectAtIndex:(unsigned long long)arg1;
- (id)_editableBackingAlbum;
- (void)_commonInitWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
- (void)backingContextDidChange:(id)arg1;
- (void)setIsObservingContextChanges:(bool)arg1;
- (id)_cloudSharedBackingAlbum;
- (id)filteredIndexes;
- (id)_assets;
- (void)set_assets:(id)arg1;
- (void)setBackingAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)initWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
- (id)initWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2 parameters:(id)arg3;
- (struct NSObject { Class x1; }*)backingAlbum;
- (id)userEditableAssets;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4;
- (id)localizedLocationNames;
- (bool)canShowAvalancheStacks;
- (bool)canShowComments;
- (void)setTertiaryKeyAsset:(id)arg1;
- (id)tertiaryKeyAsset;
- (void)setSecondaryKeyAsset:(id)arg1;
- (id)secondaryKeyAsset;
- (void)setKeyAsset:(id)arg1;
- (id)keyAsset;
- (unsigned long long)videosCount;
- (unsigned long long)assetsCount;
- (unsigned long long)approximateCount;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (void)setPendingItemsType:(int)arg1;
- (int)pendingItemsType;
- (void)setPendingItemsCount:(int)arg1;
- (int)pendingItemsCount;
- (id)sortingComparator;
- (id)groupURL;
- (void)setImportSessionID:(id)arg1;
- (id)importSessionID;
- (void)setSlideshowSettings:(id)arg1;
- (id)slideshowSettings;
- (bool)shouldDeleteWhenEmpty;
- (bool)canContributeToCloudSharedAlbum;
- (bool)isMultipleContributorCloudSharedAlbum;
- (bool)isFamilyCloudSharedAlbum;
- (bool)isOwnedCloudSharedAlbum;
- (bool)isStandInAlbum;
- (bool)isPendingPhotoStreamAlbum;
- (bool)isPhotoStreamAlbum;
- (bool)isWallpaperAlbum;
- (bool)isPanoramasAlbum;
- (bool)isLibrary;
- (void)setHasUnseenContentBoolValue:(bool)arg1;
- (bool)hasUnseenContentBoolValue;
- (id)mutableAssets;
- (void)batchFetchAssets:(id)arg1;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;
- (void)setCloudNotificationsEnabled:(bool)arg1;
- (bool)cloudNotificationsEnabled;
- (id)cloudFirstRecentBatchDate;
- (id)cloudAlbumSubscriberRecords;
- (id)localizedSharedWithLabel;
- (int)cloudRelationshipStateLocalValue;
- (int)cloudRelationshipStateValue;
- (void)setCloudPersonID:(id)arg1;
- (id)cloudPersonID;
- (void)setCloudLastContributionDate:(id)arg1;
- (id)cloudLastContributionDate;
- (void)setCloudCreationDate:(id)arg1;
- (id)cloudCreationDate;
- (void)setCloudLastInterestingChangeDate:(id)arg1;
- (id)cloudLastInterestingChangeDate;
- (void)setCloudMultipleContributorsEnabledLocal:(id)arg1;
- (id)cloudMultipleContributorsEnabledLocal;
- (void)setCloudMultipleContributorsEnabled:(id)arg1;
- (id)cloudMultipleContributorsEnabled;
- (void)setCloudPublicURLEnabledLocal:(id)arg1;
- (id)cloudPublicURLEnabledLocal;
- (void)setCloudPublicURLEnabled:(id)arg1;
- (id)cloudPublicURLEnabled;
- (void)setUnseenAssetsCountIntegerValue:(unsigned long long)arg1;
- (unsigned long long)unseenAssetsCountIntegerValue;
- (void)setUnseenAssetsCount:(id)arg1;
- (id)unseenAssetsCount;
- (void)setInvitationRecords:(id)arg1;
- (id)invitationRecords;
- (void)setPublicURL:(id)arg1;
- (id)publicURL;
- (void)setCloudSubscriptionDate:(id)arg1;
- (id)cloudSubscriptionDate;
- (void)setCloudOwnerHashedPersonID:(id)arg1;
- (id)cloudOwnerHashedPersonID;
- (void)setCloudOwnerEmail:(id)arg1;
- (id)cloudOwnerEmail;
- (void)setCloudOwnerFullName:(id)arg1;
- (id)cloudOwnerFullName;
- (void)setCloudOwnerLastName:(id)arg1;
- (id)cloudOwnerLastName;
- (void)setCloudOwnerFirstName:(id)arg1;
- (id)cloudOwnerFirstName;
- (void)setCloudMetadata:(id)arg1;
- (id)cloudMetadata;
- (void)setCloudGUID:(id)arg1;
- (id)cloudGUID;
- (void)userDeleteSubscriberRecord:(id)arg1;
- (void)getUnseenStartMarkerIndex:(unsigned long long*)arg1 count:(unsigned long long*)arg2 showsProgress:(bool*)arg3;
- (void)updateCloudLastContributionDateWithDate:(id)arg1;
- (void)updateCloudLastInterestingChangeDateWithDate:(id)arg1;
- (id)cloudOwnerDisplayNameIncludingEmail:(bool)arg1 allowsEmail:(bool)arg2;
- (id)localizedSharedByLabelAllowsEmail:(bool)arg1;
- (bool)isCloudSharedAlbum;
- (bool)isCameraAlbum;
- (int)kindValue;
- (bool)isRecentlyAddedAlbum;
- (bool)isFolder;
- (unsigned long long)photosCount;
- (id)assets;
- (id)posterImage;
- (id)filterParameters;
- (id)kind;
- (id)uuid;
- (id)predicate;
- (id)title;
- (int)filter;
- (id)name;
- (bool)isEmpty;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)setPredicate:(id)arg1;
- (id)localizedTitle;
- (void)setFilter:(int)arg1;

@end
