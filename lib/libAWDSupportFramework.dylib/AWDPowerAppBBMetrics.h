/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSMutableArray;

@interface AWDPowerAppBBMetrics : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    NSMutableArray *_appPowers;
    struct { 
        unsigned int timestamp : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property(retain) NSMutableArray * appPowers;


- (id)appPowers;
- (id)appPowerAtIndex:(unsigned long long)arg1;
- (void)clearAppPowers;
- (unsigned long long)appPowersCount;
- (void)addAppPower:(id)arg1;
- (void)setAppPowers:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
