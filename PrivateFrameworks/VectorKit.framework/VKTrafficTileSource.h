/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKTileSource, VKTrafficDynamicTileSource, NSString, VKTileKeyMap, VKTileKeyList, VKTileCache;

@interface VKTrafficTileSource : VKTileSetBackedTileSource <VKTileSourceClient> {
    VKTileKeyList *_building;
    VKTileKeyMap *_pendingTraffic;
    VKTileSource *_roadTileSource;
    VKTrafficDynamicTileSource *_dynamicTileSource;
    VKTileCache *_recentTrafficTiles;
}

@property(retain) VKTileSource * roadTileSource;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)sawTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (bool)canFetchTrafficTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)_generatedTraffic:(id)arg1;
- (void)decodeData:(id)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (void)didFailToLoadTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 error:(id)arg2;
- (void)failedToDecodeSourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)fetchedTile:(id)arg1 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)dirtyTilesFromTileSource:(id)arg1;
- (void)tileSource:(id)arg1 dirtyTilesWithinRect:(const struct { double x1; double x2; double x3; double x4; }*)arg2 level:(long long)arg3;
- (bool)tileSource:(id)arg1 keyIsNeeded:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)tileSource:(id)arg1 invalidateKeys:(id)arg2;
- (void)tileSource:(id)arg1 invalidateKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)tileSource:(id)arg1 didFailToLoadTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2 error:(id)arg3;
- (void)tileSource:(id)arg1 didFailToDecodeTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)tileSource:(id)arg1 didFetchTile:(id)arg2 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (bool)tileSourceMayUseNetwork:(id)arg1;
- (bool)canFetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)fetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)invalidateTilesFromTileSource:(id)arg1;
- (void)tileSource:(id)arg1 invalidateTilesWithState:(unsigned long long)arg2;
- (void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)willStartLoadingTiles;
- (id)roadTileSource;
- (id)initWithSkeletonTileSet:(id)arg1 dynamicTileSet:(id)arg2 tileGroupIdentifier:(unsigned int)arg3 locale:(id)arg4;
- (void)setRoadTileSource:(id)arg1;
- (void)setSharedResources:(id)arg1;
- (long long)maximumZoomLevel;
- (void)setStyleManager:(id)arg1;
- (id)tileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)clearCaches;
- (void)dealloc;
- (void)setContentScale:(double)arg1;

@end
