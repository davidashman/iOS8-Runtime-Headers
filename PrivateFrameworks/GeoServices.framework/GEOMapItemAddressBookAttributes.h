/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOMapItemAddressBookAttributes : PBCodable <NSCopying> {
    int _addressType;
    NSString *_name;
    NSString *_spokenName;
    bool_isMe;
    struct { 
        unsigned int addressType : 1; 
        unsigned int isMe : 1; 
    } _has;
}

@property bool hasAddressType;
@property int addressType;
@property(readonly) bool hasName;
@property(retain) NSString * name;
@property(readonly) bool hasSpokenName;
@property(retain) NSString * spokenName;
@property bool hasIsMe;
@property bool isMe;


- (bool)hasIsMe;
- (void)setHasIsMe:(bool)arg1;
- (bool)hasAddressType;
- (void)setHasAddressType:(bool)arg1;
- (void)setAddressType:(int)arg1;
- (bool)isMe;
- (int)addressType;
- (void)setIsMe:(bool)arg1;
- (id)spokenName;
- (bool)hasSpokenName;
- (void)setSpokenName:(id)arg1;
- (bool)hasName;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
