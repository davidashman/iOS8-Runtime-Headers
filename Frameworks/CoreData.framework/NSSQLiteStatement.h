/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLiteStatement : NSSQLStatement  {
    struct sqlite3_stmt { } *_cachedSQLiteStatement;
}


- (void)setCachedSQLiteStatement:(struct sqlite3_stmt { }*)arg1;
- (void)clearCaches;
- (struct sqlite3_stmt { }*)cachedSQLiteStatement;
- (void)finalize;
- (void)dealloc;

@end
