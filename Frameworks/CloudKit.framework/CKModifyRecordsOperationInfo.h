/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSArray, NSData, NSDictionary;

@interface CKModifyRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    bool_atomic;
    bool_shouldOnlySaveAssetContent;
    NSArray *_recordsToSave;
    NSArray *_recordIDsToDelete;
    NSData *_clientChangeTokenData;
    long long _savePolicy;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSDictionary *_conflictLosersToResolveByRecordID;
}

@property(retain) NSArray * recordsToSave;
@property(retain) NSArray * recordIDsToDelete;
@property(retain) NSData * clientChangeTokenData;
@property bool atomic;
@property long long savePolicy;
@property bool shouldOnlySaveAssetContent;
@property(copy) NSDictionary * recordIDsToDeleteToEtags;
@property(retain) NSDictionary * conflictLosersToResolveByRecordID;

+ (bool)supportsSecureCoding;

- (void)setConflictLosersToResolveByRecordID:(id)arg1;
- (id)conflictLosersToResolveByRecordID;
- (void)setAtomic:(bool)arg1;
- (bool)atomic;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (id)recordIDsToDeleteToEtags;
- (void)setShouldOnlySaveAssetContent:(bool)arg1;
- (bool)shouldOnlySaveAssetContent;
- (void)setSavePolicy:(long long)arg1;
- (long long)savePolicy;
- (void)setRecordIDsToDelete:(id)arg1;
- (id)recordIDsToDelete;
- (void)setRecordsToSave:(id)arg1;
- (id)recordsToSave;
- (void)setClientChangeTokenData:(id)arg1;
- (id)clientChangeTokenData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;

@end
