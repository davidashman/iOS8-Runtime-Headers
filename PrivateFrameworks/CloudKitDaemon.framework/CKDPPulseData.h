/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPDate, CKDPIdentifier;

@interface CKDPPulseData : PBCodable <NSCopying> {
    long long _customState;
    long long _stateTTLMillis;
    CKDPDate *_lastCustom;
    CKDPDate *_lastEdited;
    CKDPDate *_lastInvisible;
    CKDPDate *_lastViewed;
    int _state;
    CKDPIdentifier *_user;
    struct { 
        unsigned int customState : 1; 
        unsigned int stateTTLMillis : 1; 
        unsigned int state : 1; 
    } _has;
}

@property(readonly) bool hasUser;
@property(retain) CKDPIdentifier * user;
@property bool hasState;
@property int state;
@property bool hasCustomState;
@property long long customState;
@property bool hasStateTTLMillis;
@property long long stateTTLMillis;
@property(readonly) bool hasLastViewed;
@property(retain) CKDPDate * lastViewed;
@property(readonly) bool hasLastEdited;
@property(retain) CKDPDate * lastEdited;
@property(readonly) bool hasLastCustom;
@property(retain) CKDPDate * lastCustom;
@property(readonly) bool hasLastInvisible;
@property(retain) CKDPDate * lastInvisible;


- (bool)hasLastInvisible;
- (bool)hasLastCustom;
- (bool)hasLastEdited;
- (bool)hasLastViewed;
- (bool)hasStateTTLMillis;
- (void)setHasStateTTLMillis:(bool)arg1;
- (long long)stateTTLMillis;
- (bool)hasCustomState;
- (void)setHasCustomState:(bool)arg1;
- (long long)customState;
- (bool)hasUser;
- (bool)hasState;
- (void)setHasState:(bool)arg1;
- (void)setStateTTLMillis:(long long)arg1;
- (void)setCustomState:(long long)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setLastInvisible:(id)arg1;
- (id)lastInvisible;
- (void)setLastCustom:(id)arg1;
- (id)lastCustom;
- (void)setLastEdited:(id)arg1;
- (id)lastEdited;
- (void)setLastViewed:(id)arg1;
- (id)lastViewed;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setUser:(id)arg1;
- (id)user;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setState:(int)arg1;
- (int)state;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
