/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPRecordSaveRequestConflictLoserUpdate, NSString, NSMutableArray, CKDPRecord;

@interface CKDPRecordSaveRequest : PBRequest <NSCopying> {
    CKDPRecordSaveRequestConflictLoserUpdate *_conflictLoserUpdate;
    NSMutableArray *_conflictLosersToResolves;
    NSString *_etag;
    NSMutableArray *_fieldsToDeleteIfExistOnMerges;
    CKDPRecord *_record;
    NSString *_recordProtectionInfoTag;
    int _saveSemantics;
    NSString *_zoneProtectionInfoTag;
    bool_merge;
    struct { 
        unsigned int saveSemantics : 1; 
        unsigned int merge : 1; 
    } _has;
}

@property(readonly) bool hasRecord;
@property(retain) CKDPRecord * record;
@property bool hasMerge;
@property bool merge;
@property(retain) NSMutableArray * fieldsToDeleteIfExistOnMerges;
@property(readonly) bool hasEtag;
@property(retain) NSString * etag;
@property(readonly) bool hasConflictLoserUpdate;
@property(retain) CKDPRecordSaveRequestConflictLoserUpdate * conflictLoserUpdate;
@property bool hasSaveSemantics;
@property int saveSemantics;
@property(readonly) bool hasZoneProtectionInfoTag;
@property(retain) NSString * zoneProtectionInfoTag;
@property(readonly) bool hasRecordProtectionInfoTag;
@property(retain) NSString * recordProtectionInfoTag;
@property(retain) NSMutableArray * conflictLosersToResolves;

+ (id)options;

- (void)setConflictLosersToResolves:(id)arg1;
- (id)conflictLosersToResolves;
- (id)recordProtectionInfoTag;
- (id)conflictLoserUpdate;
- (void)setFieldsToDeleteIfExistOnMerges:(id)arg1;
- (id)fieldsToDeleteIfExistOnMerges;
- (bool)merge;
- (bool)hasRecordProtectionInfoTag;
- (bool)hasSaveSemantics;
- (void)setHasSaveSemantics:(bool)arg1;
- (void)setSaveSemantics:(int)arg1;
- (int)saveSemantics;
- (bool)hasConflictLoserUpdate;
- (bool)hasMerge;
- (void)setHasMerge:(bool)arg1;
- (void)setMerge:(bool)arg1;
- (id)conflictLosersToResolveAtIndex:(unsigned long long)arg1;
- (void)clearConflictLosersToResolves;
- (unsigned long long)conflictLosersToResolvesCount;
- (void)setRecordProtectionInfoTag:(id)arg1;
- (void)setConflictLoserUpdate:(id)arg1;
- (id)fieldsToDeleteIfExistOnMergeAtIndex:(unsigned long long)arg1;
- (void)clearFieldsToDeleteIfExistOnMerges;
- (unsigned long long)fieldsToDeleteIfExistOnMergesCount;
- (void)addConflictLosersToResolve:(id)arg1;
- (void)addFieldsToDeleteIfExistOnMerge:(id)arg1;
- (bool)hasRecord;
- (id)zoneProtectionInfoTag;
- (bool)hasZoneProtectionInfoTag;
- (void)setZoneProtectionInfoTag:(id)arg1;
- (void)setRecord:(id)arg1;
- (bool)hasEtag;
- (void)setEtag:(id)arg1;
- (id)etag;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (id)record;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
