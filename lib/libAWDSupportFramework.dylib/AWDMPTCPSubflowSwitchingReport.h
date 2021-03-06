/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDMPTCPSubflowSwitchingReport : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    int _switchCount;
    NSString *_switchFromInterfaceName;
    NSString *_switchToInterfaceName;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int switchCount : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property(readonly) bool hasSwitchFromInterfaceName;
@property(retain) NSString * switchFromInterfaceName;
@property(readonly) bool hasSwitchToInterfaceName;
@property(retain) NSString * switchToInterfaceName;
@property bool hasSwitchCount;
@property int switchCount;


- (int)switchCount;
- (id)switchToInterfaceName;
- (id)switchFromInterfaceName;
- (bool)hasSwitchCount;
- (void)setHasSwitchCount:(bool)arg1;
- (void)setSwitchCount:(int)arg1;
- (bool)hasSwitchToInterfaceName;
- (bool)hasSwitchFromInterfaceName;
- (void)setSwitchToInterfaceName:(id)arg1;
- (void)setSwitchFromInterfaceName:(id)arg1;
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
