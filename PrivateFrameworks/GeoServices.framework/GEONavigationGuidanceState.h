/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationGuidanceState : PBCodable <NSCopying> {
    int _navigationState;
    int _trackedTransportType;
    struct { 
        unsigned int navigationState : 1; 
        unsigned int trackedTransportType : 1; 
    } _has;
}

@property bool hasTrackedTransportType;
@property int trackedTransportType;
@property bool hasNavigationState;
@property int navigationState;


- (bool)hasNavigationState;
- (void)setHasNavigationState:(bool)arg1;
- (bool)hasTrackedTransportType;
- (void)setHasTrackedTransportType:(bool)arg1;
- (id)initWithTransportType:(int)arg1;
- (void)setTrackedTransportType:(int)arg1;
- (int)trackedTransportType;
- (void)setNavigationState:(int)arg1;
- (int)navigationState;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
