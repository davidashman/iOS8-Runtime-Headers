/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSArray, NSObject<OS_dispatch_queue>, NSMutableArray, NSObject<OS_dispatch_group>;

@interface VKRasterOverlayTileSource : VKTileSource  {
    NSMutableArray *_overlays;
    NSObject<OS_dispatch_group> *_renderGroup;
    NSObject<OS_dispatch_queue> *_homeQ;
}

@property(readonly) NSArray * overlays;


- (void)invalidateRect:(const struct { double x1; double x2; double x3; double x4; }*)arg1 level:(long long)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_queueDraw:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)fetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (unsigned int)maximumDownloadZoomLevel;
- (bool)canFetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (unsigned int)minimumDownloadZoomLevel;
- (bool)cancelFetchForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (bool)maximumZoomLevelBoundsCamera;
- (bool)minimumZoomLevelBoundsCamera;
- (void)addOverlay:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (id)overlays;
- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2;
- (long long)tileSize;
- (void)_flush;
- (id)init;
- (void)invalidate;
- (void)dealloc;

@end
