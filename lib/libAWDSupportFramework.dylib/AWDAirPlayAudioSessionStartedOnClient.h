/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlayAudioSessionStartedOnClient : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _announceMs;
    unsigned int _authMs;
    unsigned int _bonjourMs;
    unsigned int _compressionType;
    unsigned int _connectMs;
    unsigned int _encryptionType;
    unsigned int _recordMs;
    NSString *_sessionUUID;
    unsigned int _setupAudioMs;
    unsigned int _setupScreenMs;
    int _status;
    unsigned int _transportType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int announceMs : 1; 
        unsigned int authMs : 1; 
        unsigned int bonjourMs : 1; 
        unsigned int compressionType : 1; 
        unsigned int connectMs : 1; 
        unsigned int encryptionType : 1; 
        unsigned int recordMs : 1; 
        unsigned int setupAudioMs : 1; 
        unsigned int setupScreenMs : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
    } _has;
}

@property(readonly) bool hasSessionUUID;
@property(retain) NSString * sessionUUID;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasStatus;
@property int status;
@property bool hasTransportType;
@property unsigned int transportType;
@property bool hasCompressionType;
@property unsigned int compressionType;
@property bool hasEncryptionType;
@property unsigned int encryptionType;
@property bool hasBonjourMs;
@property unsigned int bonjourMs;
@property bool hasConnectMs;
@property unsigned int connectMs;
@property bool hasAuthMs;
@property unsigned int authMs;
@property bool hasAnnounceMs;
@property unsigned int announceMs;
@property bool hasSetupAudioMs;
@property unsigned int setupAudioMs;
@property bool hasSetupScreenMs;
@property unsigned int setupScreenMs;
@property bool hasRecordMs;
@property unsigned int recordMs;


- (bool)hasStatus;
- (unsigned int)recordMs;
- (unsigned int)setupScreenMs;
- (unsigned int)setupAudioMs;
- (unsigned int)announceMs;
- (unsigned int)authMs;
- (unsigned int)connectMs;
- (unsigned int)bonjourMs;
- (unsigned int)compressionType;
- (bool)hasRecordMs;
- (void)setHasRecordMs:(bool)arg1;
- (void)setRecordMs:(unsigned int)arg1;
- (bool)hasSetupScreenMs;
- (void)setHasSetupScreenMs:(bool)arg1;
- (void)setSetupScreenMs:(unsigned int)arg1;
- (bool)hasSetupAudioMs;
- (void)setHasSetupAudioMs:(bool)arg1;
- (void)setSetupAudioMs:(unsigned int)arg1;
- (bool)hasAnnounceMs;
- (void)setHasAnnounceMs:(bool)arg1;
- (void)setAnnounceMs:(unsigned int)arg1;
- (bool)hasAuthMs;
- (void)setHasAuthMs:(bool)arg1;
- (void)setAuthMs:(unsigned int)arg1;
- (bool)hasConnectMs;
- (void)setHasConnectMs:(bool)arg1;
- (void)setConnectMs:(unsigned int)arg1;
- (bool)hasBonjourMs;
- (void)setHasBonjourMs:(bool)arg1;
- (void)setBonjourMs:(unsigned int)arg1;
- (bool)hasEncryptionType;
- (void)setHasEncryptionType:(bool)arg1;
- (bool)hasCompressionType;
- (void)setHasCompressionType:(bool)arg1;
- (void)setCompressionType:(unsigned int)arg1;
- (id)sessionUUID;
- (bool)hasSessionUUID;
- (void)setSessionUUID:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (bool)hasTimestamp;
- (bool)hasTransportType;
- (void)setTransportType:(unsigned int)arg1;
- (unsigned int)transportType;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setEncryptionType:(unsigned int)arg1;
- (unsigned int)encryptionType;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
