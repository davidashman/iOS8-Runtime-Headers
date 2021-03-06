/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSArray, NSString, ML3DatabaseDistantConnection;

@interface ML3DatabaseDistantResult : ML3DatabaseResult  {
    NSArray *_cachedRows;
    ML3DatabaseDistantConnection *_distantConnection;
    NSString *_sql;
    NSArray *_parameters;
}

@property(readonly) ML3DatabaseDistantConnection * distantConnection;
@property(readonly) NSString * sql;
@property(readonly) NSArray * parameters;


- (id)distantConnection;
- (bool)_fetchRowsIfEmpty;
- (void)_localEnumerateRowsWithBlock:(id)arg1;
- (void)_remoteEnumerateRowsWithBlock:(id)arg1;
- (id)initWithDistantConnection:(id)arg1 sql:(id)arg2 parameters:(id)arg3;
- (id)initWithStatement:(id)arg1;
- (id)columnNameIndexMap;
- (unsigned long long)indexForColumnName:(id)arg1;
- (id)parameters;
- (id)sql;
- (void)enumerateRowsWithBlock:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
