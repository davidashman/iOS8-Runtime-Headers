/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, CKRecordID, CKRecord;

@interface CKDRecordResponse : NSObject  {
    CKRecordID *_recordID;
    NSString *_etag;
    CKRecord *_record;
}

@property(retain) CKRecordID * recordID;
@property(retain) NSString * etag;
@property(retain) CKRecord * record;


- (void)setRecord:(id)arg1;
- (void)setEtag:(id)arg1;
- (id)etag;
- (void)setRecordID:(id)arg1;
- (id)CKPropertiesDescription;
- (id)record;
- (id)recordID;
- (void).cxx_destruct;
- (id)description;

@end
