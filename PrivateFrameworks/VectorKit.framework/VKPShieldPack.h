/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableArray;

@interface VKPShieldPack : PBCodable <NSCopying> {
    NSMutableArray *_atlas;
    NSMutableArray *_shields;
}

@property(retain) NSMutableArray * atlas;
@property(retain) NSMutableArray * shields;


- (id)shieldsAtIndex:(unsigned long long)arg1;
- (void)clearShields;
- (unsigned long long)shieldsCount;
- (void)addShields:(id)arg1;
- (void)setShields:(id)arg1;
- (void)clearAtlas;
- (unsigned long long)atlasCount;
- (void)addAtlas:(id)arg1;
- (void)setAtlas:(id)arg1;
- (id)atlasAtIndex:(unsigned long long)arg1;
- (id)atlas;
- (id)shields;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
