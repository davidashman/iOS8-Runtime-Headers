/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDate, NSString, NSArray, PLManagedAsset, NSOrderedSet, UIImage, NSDictionary, NSURL, NSMutableOrderedSet, NSNumber;

@interface PLCloudSharedAlbum : PLManagedAlbum <PLCloudSharedAlbumProtocol> {
    bool_deleteFromDBOnly;
}

@property(retain) NSOrderedSet * assets;
@property short cloudAlbumSubtype;
@property(retain) NSNumber * cloudRelationshipState;
@property(retain) NSNumber * cloudRelationshipStateLocal;
@property(retain) NSNumber * isOwned;
@property(retain) NSNumber * hasUnseenContent;
@property(retain) NSNumber * cloudOwnerEmailKey;
@property bool cloudNotificationsEnabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(retain,readonly) NSString * uuid;
@property(retain,readonly) NSString * title;
@property(copy,readonly) NSString * localizedTitle;
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

+ (id)cloudOwnerDisplayNameWithFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 emailKey:(id)arg4 includingEmail:(bool)arg5 allowsEmail:(bool)arg6;
+ (id)localizedSharedByLabelWithFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 emailKey:(id)arg4 isOwned:(bool)arg5 allowsEmail:(bool)arg6;
+ (id)cloudSharedAlbumWithGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)allCloudSharedAlbumsInLibrary:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;

- (void)persistRecoveryMetadata;
- (id)albumDirectoryPath;
- (void)deleteFromDatabaseOnly;
- (id)_expectedKeyAssets:(id)arg1;
- (void)publishBatchOfOriginalAssets:(id)arg1 withBatchCommentText:(id)arg2 andTrimmedVideoPathInfo:(id)arg3 isNewAlbum:(bool)arg4;
- (id)sortingComparator;
- (bool)canContributeToCloudSharedAlbum;
- (bool)isMultipleContributorCloudSharedAlbum;
- (bool)isFamilyCloudSharedAlbum;
- (bool)isOwnedCloudSharedAlbum;
- (void)setHasUnseenContentBoolValue:(bool)arg1;
- (bool)hasUnseenContentBoolValue;
- (id)cloudFirstRecentBatchDate;
- (id)cloudAlbumSubscriberRecords;
- (id)localizedSharedWithLabel;
- (int)cloudRelationshipStateLocalValue;
- (int)cloudRelationshipStateValue;
- (void)setUnseenAssetsCountIntegerValue:(unsigned long long)arg1;
- (unsigned long long)unseenAssetsCountIntegerValue;
- (void)setCloudOwnerEmail:(id)arg1;
- (id)cloudOwnerEmail;
- (void)userDeleteSubscriberRecord:(id)arg1;
- (void)getUnseenStartMarkerIndex:(unsigned long long*)arg1 count:(unsigned long long*)arg2 showsProgress:(bool*)arg3;
- (void)updateCloudLastContributionDateWithDate:(id)arg1;
- (void)updateCloudLastInterestingChangeDateWithDate:(id)arg1;
- (id)cloudOwnerDisplayNameIncludingEmail:(bool)arg1 allowsEmail:(bool)arg2;
- (id)localizedSharedByLabelAllowsEmail:(bool)arg1;
- (void)delete;
- (void)willSave;
- (void)prepareForDeletion;
- (void)awakeFromInsert;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerSubject:(id)arg1;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;

@end
