/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString, NSMutableArray;

@interface AWDMMCSError : PBCodable <NSCopying> {
    int _code;
    NSString *_domain;
    NSMutableArray *_underlyingErrors;
    struct { 
        unsigned int code : 1; 
    } _has;
}

@property(readonly) bool hasDomain;
@property(retain) NSString * domain;
@property bool hasCode;
@property int code;
@property(retain) NSMutableArray * underlyingErrors;


- (bool)hasCode;
- (id)underlyingErrors;
- (void)setHasCode:(bool)arg1;
- (id)underlyingErrorsAtIndex:(unsigned long long)arg1;
- (void)clearUnderlyingErrors;
- (unsigned long long)underlyingErrorsCount;
- (void)addUnderlyingErrors:(id)arg1;
- (void)setUnderlyingErrors:(id)arg1;
- (bool)hasDomain;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setCode:(int)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)code;
- (id)domain;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)setDomain:(id)arg1;

@end
