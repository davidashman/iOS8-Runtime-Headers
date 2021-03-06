/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDPushKeepAliveSent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _connectionType;
    unsigned int _dualChannelState;
    NSString *_guid;
    unsigned int _keepAliveACKDuration;
    int _linkQuality;
    unsigned int _nextKeepAliveInterval;
    unsigned int _timeSinceLastKeepAlive;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int dualChannelState : 1; 
        unsigned int keepAliveACKDuration : 1; 
        unsigned int linkQuality : 1; 
        unsigned int nextKeepAliveInterval : 1; 
        unsigned int timeSinceLastKeepAlive : 1; 
    } _has;
}

@property(readonly) bool hasGuid;
@property(retain) NSString * guid;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasConnectionType;
@property unsigned int connectionType;
@property bool hasLinkQuality;
@property int linkQuality;
@property bool hasTimeSinceLastKeepAlive;
@property unsigned int timeSinceLastKeepAlive;
@property bool hasNextKeepAliveInterval;
@property unsigned int nextKeepAliveInterval;
@property bool hasKeepAliveACKDuration;
@property unsigned int keepAliveACKDuration;
@property bool hasDualChannelState;
@property unsigned int dualChannelState;


- (unsigned int)keepAliveACKDuration;
- (unsigned int)nextKeepAliveInterval;
- (unsigned int)timeSinceLastKeepAlive;
- (bool)hasKeepAliveACKDuration;
- (void)setHasKeepAliveACKDuration:(bool)arg1;
- (void)setKeepAliveACKDuration:(unsigned int)arg1;
- (bool)hasNextKeepAliveInterval;
- (void)setHasNextKeepAliveInterval:(bool)arg1;
- (void)setNextKeepAliveInterval:(unsigned int)arg1;
- (bool)hasTimeSinceLastKeepAlive;
- (void)setHasTimeSinceLastKeepAlive:(bool)arg1;
- (void)setTimeSinceLastKeepAlive:(unsigned int)arg1;
- (unsigned int)dualChannelState;
- (bool)hasDualChannelState;
- (void)setHasDualChannelState:(bool)arg1;
- (void)setDualChannelState:(unsigned int)arg1;
- (bool)hasLinkQuality;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setLinkQuality:(int)arg1;
- (bool)hasConnectionType;
- (void)setHasConnectionType:(bool)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasGuid;
- (bool)hasTimestamp;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)linkQuality;
- (unsigned int)connectionType;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setGuid:(id)arg1;
- (id)guid;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
