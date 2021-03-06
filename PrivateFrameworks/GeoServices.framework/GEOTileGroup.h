/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileGroup : PBCodable <NSCopying> {
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; } *_regionalResourceIndexs;
    unsigned long long _regionalResourceIndexsCount;
    unsigned long long _regionalResourceIndexsSpace;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _attributionIndexs;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _fontIndexs;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _iconIndexs;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _styleSheetIndexs;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _textureIndexs;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _xmlIndexs;
    struct { unsigned int x1; unsigned int x2; } *_tileSets;
    unsigned long long _tileSetsCount;
    unsigned long long _tileSetsSpace;
    unsigned int _attributionBadgeIndex;
    unsigned int _identifier;
    struct { 
        unsigned int attributionBadgeIndex : 1; 
    } _has;
}

@property unsigned int identifier;
@property(readonly) unsigned long long tileSetsCount;
@property(readonly) struct { unsigned int x1; unsigned int x2; }* tileSets;
@property(readonly) unsigned long long styleSheetIndexsCount;
@property(readonly) unsigned int* styleSheetIndexs;
@property(readonly) unsigned long long textureIndexsCount;
@property(readonly) unsigned int* textureIndexs;
@property(readonly) unsigned long long fontIndexsCount;
@property(readonly) unsigned int* fontIndexs;
@property(readonly) unsigned long long iconIndexsCount;
@property(readonly) unsigned int* iconIndexs;
@property(readonly) unsigned long long regionalResourceIndexsCount;
@property(readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; }* regionalResourceIndexs;
@property(readonly) unsigned long long xmlIndexsCount;
@property(readonly) unsigned int* xmlIndexs;
@property bool hasAttributionBadgeIndex;
@property unsigned int attributionBadgeIndex;
@property(readonly) unsigned long long attributionIndexsCount;
@property(readonly) unsigned int* attributionIndexs;


- (unsigned int)attributionBadgeIndex;
- (void)setAttributionIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int*)attributionIndexs;
- (bool)hasAttributionBadgeIndex;
- (void)setHasAttributionBadgeIndex:(bool)arg1;
- (void)setAttributionBadgeIndex:(unsigned int)arg1;
- (void)setXmlIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int*)xmlIndexs;
- (void)setRegionalResourceIndexs:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; }*)arg1 count:(unsigned long long)arg2;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; }*)regionalResourceIndexs;
- (void)setIconIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int*)iconIndexs;
- (void)setFontIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int*)fontIndexs;
- (void)setTextureIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int*)textureIndexs;
- (void)setStyleSheetIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int*)styleSheetIndexs;
- (void)setTileSets:(struct { unsigned int x1; unsigned int x2; }*)arg1 count:(unsigned long long)arg2;
- (void)addAttributionIndex:(unsigned int)arg1;
- (unsigned int)attributionIndexAtIndex:(unsigned long long)arg1;
- (void)clearAttributionIndexs;
- (unsigned long long)attributionIndexsCount;
- (void)addXmlIndex:(unsigned int)arg1;
- (unsigned int)xmlIndexAtIndex:(unsigned long long)arg1;
- (void)clearXmlIndexs;
- (unsigned long long)xmlIndexsCount;
- (void)addRegionalResourceIndex:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; })arg1;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; })regionalResourceIndexAtIndex:(unsigned long long)arg1;
- (unsigned long long)regionalResourceIndexsCount;
- (void)addIconIndex:(unsigned int)arg1;
- (unsigned int)iconIndexAtIndex:(unsigned long long)arg1;
- (void)clearIconIndexs;
- (unsigned long long)iconIndexsCount;
- (void)addFontIndex:(unsigned int)arg1;
- (unsigned int)fontIndexAtIndex:(unsigned long long)arg1;
- (void)clearFontIndexs;
- (unsigned long long)fontIndexsCount;
- (void)addTextureIndex:(unsigned int)arg1;
- (unsigned int)textureIndexAtIndex:(unsigned long long)arg1;
- (void)clearTextureIndexs;
- (unsigned long long)textureIndexsCount;
- (void)addStyleSheetIndex:(unsigned int)arg1;
- (unsigned int)styleSheetIndexAtIndex:(unsigned long long)arg1;
- (void)clearStyleSheetIndexs;
- (unsigned long long)styleSheetIndexsCount;
- (void)clearRegionalResourceIndexs;
- (struct { unsigned int x1; unsigned int x2; }*)tileSets;
- (struct { unsigned int x1; unsigned int x2; })tileSetAtIndex:(unsigned long long)arg1;
- (void)clearTileSets;
- (unsigned long long)tileSetsCount;
- (void)addTileSet:(struct { unsigned int x1; unsigned int x2; })arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (unsigned int)identifier;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
