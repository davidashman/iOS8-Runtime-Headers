/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface EDPivotDataField : NSObject  {
    long long mBaseField;
    unsigned long long mBaseItem;
    unsigned long long mFieldId;
    unsigned long long mNumFmtId;
    NSString *mName;
    int mFormat;
}

+ (id)pivotDataField;

- (void)setShowDataAs:(int)arg1;
- (int)showDataAs;
- (void)setFieldId:(unsigned long long)arg1;
- (unsigned long long)fieldId;
- (void)setBaseItem:(unsigned long long)arg1;
- (unsigned long long)baseItem;
- (void)setBaseField:(long long)arg1;
- (long long)baseField;
- (void)setNumFmtId:(unsigned long long)arg1;
- (unsigned long long)numFmtId;
- (void)setName:(id)arg1;
- (id)init;
- (id)name;
- (void)dealloc;

@end
