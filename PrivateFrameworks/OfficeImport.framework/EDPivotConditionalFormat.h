/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection;

@interface EDPivotConditionalFormat : NSObject  {
    unsigned long long mPriority;
    int mType;
    int mScope;
    EDCollection *mPivotAreas;
}

+ (id)pivotConditionalFormat;

- (id)pivotAreas;
- (int)scope;
- (void)setScope:(int)arg1;
- (id)init;
- (void)setType:(int)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (unsigned long long)priority;
- (int)type;
- (void)dealloc;

@end
