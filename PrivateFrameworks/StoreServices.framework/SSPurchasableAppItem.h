/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchasableAppItem : SSPurchasableItem  {
}

+ (id)sortByNameKey;
+ (id)allItemsFromDatabase:(id)arg1 forAccount:(long long)arg2 sortedBy:(id)arg3 sortAscending:(bool)arg4;
+ (id)itemsFromDatabase:(id)arg1 forAccount:(long long)arg2 matching:(id)arg3 sortedBy:(id)arg4 sortAscending:(bool)arg5;
+ (id)allPropertyKeys;
+ (id)databaseTable;

- (bool)isNewsstand;
- (long long)iTunesVersion;
- (id)humanReadableVersion;
- (id)redownloadParams;
- (bool)supportsIPhone;
- (bool)supportsIPad;
- (unsigned int)minimumOS;
- (id)longTitle;
- (bool)isFamilyShareable;
- (id)iconTitle;
- (long long)contentRatingFlags;
- (id)category;
- (id)accountIdentifier;
- (id)iconURL;
- (id)companyName;
- (id)bundleID;
- (id)description;

@end
