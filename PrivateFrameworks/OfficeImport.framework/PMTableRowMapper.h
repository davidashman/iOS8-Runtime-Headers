/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTableRow, OADTable;

@interface PMTableRowMapper : CMMapper  {
    OADTable *mTable;
    OADTableRow *mRow;
    unsigned long long mRowIndex;
}


- (id)initWithOadTable:(id)arg1 rowIndex:(unsigned long long)arg2 parent:(id)arg3;
- (unsigned long long)cellCount;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (float)height;

@end
