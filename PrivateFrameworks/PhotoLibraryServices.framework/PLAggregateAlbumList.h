/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, NSMutableOrderedSet;

@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer> {
    NSMutableOrderedSet *_allAlbums;
    NSMutableOrderedSet *_childAlbumLists;
    int _filter;
}

@property int filter;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) unsigned long long containersCount;
@property(readonly) unsigned long long albumsCount;
@property(readonly) bool isFolder;
@property(copy,readonly) id albumsSortingComparator;
@property(readonly) unsigned long long unreadAlbumsCount;
@property(retain,readonly) NSString * _prettyDescription;
@property(retain,readonly) NSString * _typeDescription;

+ (struct NSObject { Class x1; }*)albumListWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;

- (void)_invalidateAllAlbums;
- (id)initWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;
- (void)assetContainerListDidChange:(id)arg1;
- (unsigned long long)unreadAlbumsCount;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)updateAlbumsOrderIfNeeded;
- (bool)needsReordering;
- (void)setNeedsReordering;
- (bool)albumHasFixedOrder:(struct NSObject { Class x1; }*)arg1;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (id)albumsSortingComparator;
- (bool)canEditAlbums;
- (bool)hasAtLeastOneAlbum;
- (short)albumListType;
- (unsigned long long)containersCount;
- (id)containersRelationshipName;
- (bool)canEditContainers;
- (id)_prettyDescription;
- (unsigned long long)albumsCount;
- (id)photoLibrary;
- (id)albums;
- (bool)isFolder;
- (id)containers;
- (id)managedObjectContext;
- (id)identifier;
- (id)_typeDescription;
- (int)filter;
- (bool)isEmpty;
- (void)dealloc;
- (void)setFilter:(int)arg1;

@end
