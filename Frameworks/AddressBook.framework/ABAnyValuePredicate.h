/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABAnyValuePredicate : ABPredicate  {
    int _property;
}

@property int property;


- (void)setProperty:(int)arg1;
- (int)property;
- (id)queryGroupByProperties;
- (id)queryJoinsInCompound:(bool)arg1;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (id)queryWhereString;
- (id)init;
- (bool)isValid;

@end
