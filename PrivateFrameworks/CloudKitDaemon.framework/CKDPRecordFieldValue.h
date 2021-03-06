/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData, CKDPAsset, NSString, NSMutableArray, CKDPDate, CKDPLocationCoordinate, CKDPPackage, CKDPRecordReference;

@interface CKDPRecordFieldValue : PBCodable <NSCopying> {
    double _doubleValue;
    long long _signedValue;
    CKDPAsset *_assetValue;
    NSData *_bytesValue;
    CKDPDate *_dateValue;
    NSMutableArray *_listValues;
    CKDPLocationCoordinate *_locationValue;
    CKDPPackage *_packageValue;
    CKDPRecordReference *_referenceValue;
    NSString *_stringValue;
    int _type;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int signedValue : 1; 
        unsigned int type : 1; 
    } _has;
}

@property bool hasType;
@property int type;
@property(readonly) bool hasBytesValue;
@property(retain) NSData * bytesValue;
@property bool hasSignedValue;
@property long long signedValue;
@property bool hasDoubleValue;
@property double doubleValue;
@property(readonly) bool hasDateValue;
@property(retain) CKDPDate * dateValue;
@property(readonly) bool hasStringValue;
@property(retain) NSString * stringValue;
@property(readonly) bool hasLocationValue;
@property(retain) CKDPLocationCoordinate * locationValue;
@property(readonly) bool hasReferenceValue;
@property(retain) CKDPRecordReference * referenceValue;
@property(readonly) bool hasAssetValue;
@property(retain) CKDPAsset * assetValue;
@property(retain) NSMutableArray * listValues;
@property(readonly) bool hasPackageValue;
@property(retain) CKDPPackage * packageValue;


- (id)_descriptionForType:(int)arg1;
- (id)_prettyRepresentationFromObject:(id)arg1;
- (id)_prettyDictionaryRepresentation;
- (id)packageValue;
- (void)setListValues:(id)arg1;
- (id)listValues;
- (id)assetValue;
- (id)referenceValue;
- (id)locationValue;
- (long long)signedValue;
- (id)bytesValue;
- (bool)hasPackageValue;
- (bool)hasAssetValue;
- (bool)hasReferenceValue;
- (bool)hasLocationValue;
- (bool)hasDateValue;
- (bool)hasDoubleValue;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setDoubleValue:(double)arg1;
- (bool)hasSignedValue;
- (void)setHasSignedValue:(bool)arg1;
- (void)setSignedValue:(long long)arg1;
- (bool)hasBytesValue;
- (void)setPackageValue:(id)arg1;
- (id)listValueAtIndex:(unsigned long long)arg1;
- (void)clearListValues;
- (unsigned long long)listValuesCount;
- (void)setAssetValue:(id)arg1;
- (void)setReferenceValue:(id)arg1;
- (void)setLocationValue:(id)arg1;
- (void)setDateValue:(id)arg1;
- (void)setBytesValue:(id)arg1;
- (void)addListValue:(id)arg1;
- (bool)hasStringValue;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)hasType;
- (void)setStringValue:(id)arg1;
- (id)dateValue;
- (id)stringValue;
- (double)doubleValue;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setType:(int)arg1;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
