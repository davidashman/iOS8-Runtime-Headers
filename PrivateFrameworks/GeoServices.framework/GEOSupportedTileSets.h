/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOSupportedTileSets : PBCodable <NSCopying> {
    NSMutableArray *_tileSets;
}

@property(retain) NSMutableArray * tileSets;


- (id)tileSets;
- (id)tileSetAtIndex:(unsigned long long)arg1;
- (void)clearTileSets;
- (unsigned long long)tileSetsCount;
- (void)addTileSet:(id)arg1;
- (void)setTileSets:(id)arg1;
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
