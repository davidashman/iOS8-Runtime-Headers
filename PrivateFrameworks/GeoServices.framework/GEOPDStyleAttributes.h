/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOPDStyleAttributes : PBCodable <NSCopying> {
    unsigned long long _customIconId;
    NSMutableArray *_attributes;
    struct { 
        unsigned int customIconId : 1; 
    } _has;
}

@property(retain) NSMutableArray * attributes;
@property bool hasCustomIconId;
@property unsigned long long customIconId;


- (unsigned long long)customIconId;
- (bool)hasCustomIconId;
- (void)setHasCustomIconId:(bool)arg1;
- (void)setCustomIconId:(unsigned long long)arg1;
- (id)attributeAtIndex:(unsigned long long)arg1;
- (void)clearAttributes;
- (unsigned long long)attributesCount;
- (void)addAttribute:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)attributes;
- (void)setAttributes:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
