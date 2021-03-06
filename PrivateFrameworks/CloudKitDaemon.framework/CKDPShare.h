/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, NSData, CKDPShareIdentifier, NSMutableArray;

@interface CKDPShare : PBCodable <NSCopying> {
    NSData *_keyData;
    NSString *_keyVersion;
    NSMutableArray *_participants;
    NSData *_resource;
    NSString *_resourceProvider;
    int _resourceState;
    CKDPShareIdentifier *_shareId;
    struct { 
        unsigned int resourceState : 1; 
    } _has;
}

@property(readonly) bool hasShareId;
@property(retain) CKDPShareIdentifier * shareId;
@property(retain) NSMutableArray * participants;
@property(readonly) bool hasResourceProvider;
@property(retain) NSString * resourceProvider;
@property(readonly) bool hasResource;
@property(retain) NSData * resource;
@property bool hasResourceState;
@property int resourceState;
@property(readonly) bool hasKeyVersion;
@property(retain) NSString * keyVersion;
@property(readonly) bool hasKeyData;
@property(retain) NSData * keyData;


- (id)keyVersion;
- (int)resourceState;
- (id)resourceProvider;
- (bool)hasKeyVersion;
- (bool)hasResourceState;
- (void)setHasResourceState:(bool)arg1;
- (void)setResourceState:(int)arg1;
- (bool)hasResourceProvider;
- (void)setKeyVersion:(id)arg1;
- (void)setResourceProvider:(id)arg1;
- (id)keyData;
- (bool)hasKeyData;
- (void)setKeyData:(id)arg1;
- (void)setParticipants:(id)arg1;
- (id)shareId;
- (bool)hasShareId;
- (id)participantAtIndex:(unsigned long long)arg1;
- (void)clearParticipants;
- (unsigned long long)participantsCount;
- (void)setShareId:(id)arg1;
- (void)addParticipant:(id)arg1;
- (void)setResource:(id)arg1;
- (bool)hasResource;
- (id)resource;
- (id)participants;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
