/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPGenericShieldStyleInfo : PBCodable <NSCopying> {
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _textDropShadowOffsets;
    unsigned int _backgroundColor;
    unsigned int _borderColor;
    int _style;
    unsigned int _textColor;
    unsigned int _textDropShadowColor;
    float _textDropShadowSize;
    unsigned int _textStrokeColor;
    float _textStrokeSize;
    struct { 
        unsigned int backgroundColor : 1; 
        unsigned int borderColor : 1; 
        unsigned int style : 1; 
        unsigned int textColor : 1; 
        unsigned int textDropShadowColor : 1; 
        unsigned int textDropShadowSize : 1; 
        unsigned int textStrokeColor : 1; 
        unsigned int textStrokeSize : 1; 
    } _has;
}

@property bool hasStyle;
@property int style;
@property bool hasBackgroundColor;
@property unsigned int backgroundColor;
@property bool hasBorderColor;
@property unsigned int borderColor;
@property bool hasTextColor;
@property unsigned int textColor;
@property bool hasTextStrokeSize;
@property float textStrokeSize;
@property bool hasTextStrokeColor;
@property unsigned int textStrokeColor;
@property(readonly) unsigned long long textDropShadowOffsetsCount;
@property(readonly) float* textDropShadowOffsets;
@property bool hasTextDropShadowSize;
@property float textDropShadowSize;
@property bool hasTextDropShadowColor;
@property unsigned int textDropShadowColor;


- (bool)hasTextDropShadowColor;
- (void)setHasTextDropShadowColor:(bool)arg1;
- (void)setTextDropShadowColor:(unsigned int)arg1;
- (bool)hasTextDropShadowSize;
- (void)setHasTextDropShadowSize:(bool)arg1;
- (void)setTextDropShadowSize:(float)arg1;
- (void)setTextDropShadowOffsets:(float*)arg1 count:(unsigned long long)arg2;
- (float*)textDropShadowOffsets;
- (bool)hasTextStrokeColor;
- (void)setHasTextStrokeColor:(bool)arg1;
- (void)setTextStrokeColor:(unsigned int)arg1;
- (bool)hasTextStrokeSize;
- (void)setHasTextStrokeSize:(bool)arg1;
- (void)setTextStrokeSize:(float)arg1;
- (bool)hasTextColor;
- (void)setHasTextColor:(bool)arg1;
- (void)addTextDropShadowOffset:(float)arg1;
- (void)clearTextDropShadowOffsets;
- (bool)hasBorderColor;
- (void)setHasBorderColor:(bool)arg1;
- (bool)hasBackgroundColor;
- (void)setHasBackgroundColor:(bool)arg1;
- (float)textDropShadowSize;
- (float)textDropShadowOffsetAtIndex:(unsigned long long)arg1;
- (unsigned long long)textDropShadowOffsetsCount;
- (float)textStrokeSize;
- (unsigned int)textDropShadowColor;
- (unsigned int)textStrokeColor;
- (bool)hasStyle;
- (void)setHasStyle:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setBackgroundColor:(unsigned int)arg1;
- (void)setStyle:(int)arg1;
- (unsigned int)borderColor;
- (unsigned int)backgroundColor;
- (int)style;
- (void)setBorderColor:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned int)textColor;
- (void)setTextColor:(unsigned int)arg1;

@end
