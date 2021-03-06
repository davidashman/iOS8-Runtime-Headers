/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, <GEOMapAccessRestrictions>;

@interface GEOMapAccess : GEOMapRequestManager  {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    <GEOMapAccessRestrictions> *_restrictions;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _tileErrorHandler;

}

@property(readonly) bool allowsNetworkTileLoad;
@property <GEOMapAccessRestrictions> * restrictions;
@property(copy) id tileErrorHandler;

+ (id)realisticMap;
+ (bool)supportsRealisticMap;

- (id)findRoadTilesWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 tileHander:(id)arg3 completionHandler:(id)arg4;
- (void)setTileErrorHandler:(id)arg1;
- (id)tileErrorHandler;
- (id)buildMapEdgeFrom:(const struct { struct { /* ? */ } *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1 edgeHandler:(id)arg2;
- (id)findRoadsWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 handler:(id)arg3 completionHandler:(id)arg4;
- (id)findClosestRoadAtCoordinate:(struct { double x1; double x2; })arg1 roadHandler:(id)arg2 completionHandler:(id)arg3;
- (id)findClosestNamedFeaturesAtCoordinate:(struct { double x1; double x2; })arg1 roadHandler:(id)arg2 pointHandler:(id)arg3 polygonHandler:(id)arg4 completionHandler:(id)arg5;
- (id)findRoadEdgesWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 edgeHandler:(id)arg3 completionHandler:(id)arg4;
- (void)setCallbackQueue:(id)arg1;
- (bool)allowsNetworkTileLoad;
- (void)setRestrictions:(id)arg1;
- (id)restrictions;
- (id)init;
- (id)callbackQueue;
- (void)dealloc;

@end
