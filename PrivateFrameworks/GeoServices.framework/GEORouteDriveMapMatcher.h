/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteDriveMapMatcher : GEORouteMapMatcher  {
}


- (double)_maxMatchDistance:(double)arg1 routeIndex:(unsigned int)arg2 useStrictMatch:(bool)arg3 timeSinceTunnel:(double)arg4;
- (id)_setupRouteMatchWithRawLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 matchParams:(const struct { double x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; struct { double x_3_1_1; double x_3_1_2; } x3; double x4; double x5; unsigned long long x6; boolx7; struct { unsigned long long x_8_1_1; double x_8_1_2; struct PolylineCoordinate { unsigned int x_3_2_1; float x_3_2_2; } x_8_1_3; struct { double x_4_2_1; double x_4_2_2; } x_8_1_4; } x8; }*)arg4;
- (struct { double x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; struct { double x_3_1_1; double x_3_1_2; } x3; double x4; double x5; unsigned long long x6; boolx7; struct { unsigned long long x_8_1_1; double x_8_1_2; struct PolylineCoordinate { unsigned int x_3_2_1; float x_3_2_2; } x_8_1_3; struct { double x_4_2_1; double x_4_2_2; } x_8_1_4; } x8; })_matchToRouteFromLocation:(id)arg1 trackedLocation:(id)arg2 distanceLeftToSearch:(double)arg3 maxDistance:(double)arg4;
- (id)matchToRouteWithLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 maxDistance:(double)arg4;

@end
