/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSMutableArray;

@interface AWDWiFiMetricsManagerAwdlUsage : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _appRxBytes;
    unsigned int _appTxBytes;
    unsigned int _cachedPeersNotAssociated;
    unsigned int _cachedPeersOn24G;
    unsigned int _cachedPeersOn5G;
    unsigned int _cachedPeersOnDFS;
    unsigned int _flags;
    unsigned int _ifPacketFailures;
    unsigned int _ifRxBytes;
    unsigned int _ifTxBytes;
    unsigned int _numOfCachedPeers;
    unsigned int _numOfPeers;
    unsigned int _peerInfraChannel;
    unsigned int _periodInMinutes;
    unsigned int _selfInfraChannel;
    NSMutableArray *_states;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int appRxBytes : 1; 
        unsigned int appTxBytes : 1; 
        unsigned int cachedPeersNotAssociated : 1; 
        unsigned int cachedPeersOn24G : 1; 
        unsigned int cachedPeersOn5G : 1; 
        unsigned int cachedPeersOnDFS : 1; 
        unsigned int flags : 1; 
        unsigned int ifPacketFailures : 1; 
        unsigned int ifRxBytes : 1; 
        unsigned int ifTxBytes : 1; 
        unsigned int numOfCachedPeers : 1; 
        unsigned int numOfPeers : 1; 
        unsigned int peerInfraChannel : 1; 
        unsigned int periodInMinutes : 1; 
        unsigned int selfInfraChannel : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasSelfInfraChannel;
@property unsigned int selfInfraChannel;
@property bool hasPeerInfraChannel;
@property unsigned int peerInfraChannel;
@property bool hasNumOfPeers;
@property unsigned int numOfPeers;
@property bool hasNumOfCachedPeers;
@property unsigned int numOfCachedPeers;
@property bool hasCachedPeersOn24G;
@property unsigned int cachedPeersOn24G;
@property bool hasCachedPeersOn5G;
@property unsigned int cachedPeersOn5G;
@property bool hasCachedPeersOnDFS;
@property unsigned int cachedPeersOnDFS;
@property bool hasCachedPeersNotAssociated;
@property unsigned int cachedPeersNotAssociated;
@property bool hasFlags;
@property unsigned int flags;
@property bool hasIfPacketFailures;
@property unsigned int ifPacketFailures;
@property bool hasIfRxBytes;
@property unsigned int ifRxBytes;
@property bool hasIfTxBytes;
@property unsigned int ifTxBytes;
@property bool hasAppRxBytes;
@property unsigned int appRxBytes;
@property bool hasAppTxBytes;
@property unsigned int appTxBytes;
@property bool hasPeriodInMinutes;
@property unsigned int periodInMinutes;
@property(retain) NSMutableArray * states;


- (unsigned int)periodInMinutes;
- (unsigned int)appTxBytes;
- (unsigned int)appRxBytes;
- (unsigned int)ifTxBytes;
- (unsigned int)ifRxBytes;
- (unsigned int)ifPacketFailures;
- (unsigned int)cachedPeersNotAssociated;
- (unsigned int)cachedPeersOnDFS;
- (unsigned int)cachedPeersOn5G;
- (unsigned int)cachedPeersOn24G;
- (unsigned int)numOfCachedPeers;
- (unsigned int)numOfPeers;
- (unsigned int)peerInfraChannel;
- (unsigned int)selfInfraChannel;
- (bool)hasPeriodInMinutes;
- (void)setHasPeriodInMinutes:(bool)arg1;
- (void)setPeriodInMinutes:(unsigned int)arg1;
- (bool)hasAppTxBytes;
- (void)setHasAppTxBytes:(bool)arg1;
- (void)setAppTxBytes:(unsigned int)arg1;
- (bool)hasAppRxBytes;
- (void)setHasAppRxBytes:(bool)arg1;
- (void)setAppRxBytes:(unsigned int)arg1;
- (bool)hasIfTxBytes;
- (void)setHasIfTxBytes:(bool)arg1;
- (void)setIfTxBytes:(unsigned int)arg1;
- (bool)hasIfRxBytes;
- (void)setHasIfRxBytes:(bool)arg1;
- (void)setIfRxBytes:(unsigned int)arg1;
- (bool)hasIfPacketFailures;
- (void)setHasIfPacketFailures:(bool)arg1;
- (void)setIfPacketFailures:(unsigned int)arg1;
- (bool)hasFlags;
- (void)setHasFlags:(bool)arg1;
- (bool)hasCachedPeersNotAssociated;
- (void)setHasCachedPeersNotAssociated:(bool)arg1;
- (void)setCachedPeersNotAssociated:(unsigned int)arg1;
- (bool)hasCachedPeersOnDFS;
- (void)setHasCachedPeersOnDFS:(bool)arg1;
- (void)setCachedPeersOnDFS:(unsigned int)arg1;
- (bool)hasCachedPeersOn5G;
- (void)setHasCachedPeersOn5G:(bool)arg1;
- (void)setCachedPeersOn5G:(unsigned int)arg1;
- (bool)hasCachedPeersOn24G;
- (void)setHasCachedPeersOn24G:(bool)arg1;
- (void)setCachedPeersOn24G:(unsigned int)arg1;
- (bool)hasNumOfCachedPeers;
- (void)setHasNumOfCachedPeers:(bool)arg1;
- (void)setNumOfCachedPeers:(unsigned int)arg1;
- (bool)hasNumOfPeers;
- (void)setHasNumOfPeers:(bool)arg1;
- (void)setNumOfPeers:(unsigned int)arg1;
- (bool)hasPeerInfraChannel;
- (void)setHasPeerInfraChannel:(bool)arg1;
- (void)setPeerInfraChannel:(unsigned int)arg1;
- (bool)hasSelfInfraChannel;
- (void)setHasSelfInfraChannel:(bool)arg1;
- (void)setSelfInfraChannel:(unsigned int)arg1;
- (id)statesAtIndex:(unsigned long long)arg1;
- (void)clearStates;
- (unsigned long long)statesCount;
- (void)addStates:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setStates:(id)arg1;
- (id)states;
- (void)setFlags:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned int)flags;

@end
