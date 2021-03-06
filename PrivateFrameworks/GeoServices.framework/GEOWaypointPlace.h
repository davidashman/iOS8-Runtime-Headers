/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, NSMutableArray;

@interface GEOWaypointPlace : PBCodable <NSCopying> {
    GEOLatLng *_center;
    NSMutableArray *_roadAccessPoints;
}

@property(readonly) bool hasCenter;
@property(retain) GEOLatLng * center;
@property(retain) NSMutableArray * roadAccessPoints;


- (id)roadAccessPoints;
- (void)copyTo:(id)arg1;
- (bool)hasCenter;
- (void)mergeFrom:(id)arg1;
- (id)roadAccessPointAtIndex:(unsigned long long)arg1;
- (void)clearRoadAccessPoints;
- (unsigned long long)roadAccessPointsCount;
- (void)addRoadAccessPoint:(id)arg1;
- (void)setRoadAccessPoints:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)center;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)setCenter:(id)arg1;

@end
