/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemNotificationAvailabilityResponse : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _supportedProblemTypes;
    int _statusCode;
    struct { 
        unsigned int statusCode : 1; 
    } _has;
}

@property bool hasStatusCode;
@property int statusCode;
@property(readonly) unsigned long long supportedProblemTypesCount;
@property(readonly) int* supportedProblemTypes;


- (void)setSupportedProblemTypes:(int*)arg1 count:(unsigned long long)arg2;
- (int*)supportedProblemTypes;
- (void)addSupportedProblemType:(int)arg1;
- (int)supportedProblemTypeAtIndex:(unsigned long long)arg1;
- (void)clearSupportedProblemTypes;
- (unsigned long long)supportedProblemTypesCount;
- (bool)hasStatusCode;
- (void)setHasStatusCode:(bool)arg1;
- (void)setStatusCode:(int)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)statusCode;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
