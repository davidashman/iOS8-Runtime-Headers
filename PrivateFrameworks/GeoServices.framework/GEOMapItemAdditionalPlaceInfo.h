/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOMapItemAdditionalPlaceInfo : NSObject  {
    NSString *_name;
    int _placeType;
    double _areaInMeters;
}

@property(readonly) NSString * name;
@property(readonly) int placeType;
@property(readonly) double areaInMeters;


- (int)placeType;
- (double)areaInMeters;
- (id)initWithName:(id)arg1 placeType:(int)arg2 areaInMeters:(double)arg3;
- (id)name;
- (void)dealloc;

@end
