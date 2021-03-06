/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSMutableDictionary, NSData, ML3DatabaseConnection, NSMutableArray, ML3MusicLibrary;

@interface ML3SortMap : NSObject  {
    ML3DatabaseConnection *_connection;
    ML3MusicLibrary *_library;
    NSMutableDictionary *_nameOrders;
    NSMutableArray *_entries;
    NSData *_minSortKey;
    NSData *_maxSortKey;
    long long _smallestNameDelta;
}


- (id)_sortKeyString:(id)arg1;
- (long long)_sortKeyDistance:(id)arg1 sortKey2:(id)arg2 offset:(unsigned long long)arg3;
- (id)_maxSortKeyForEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { }*)arg2;
- (id)_minSortKeyForEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { }*)arg2;
- (long long)_maxNameOrderForSortMapEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { }*)arg2;
- (long long)_minNameOrderForSortMapEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { }*)arg2;
- (bool)loadExistingSortedEntries;
- (bool)_insertSortedNameEntriesIntoSortMap:(id)arg1;
- (id)_sortedNameEntriesToInsertForNames:(id)arg1;
- (id)nameOrders;
- (bool)commitUpdates;
- (bool)insertStringsIntoSortMap:(id)arg1 didReSortMap:(bool*)arg2;
- (id)initWithConnection:(id)arg1 library:(id)arg2;
- (void).cxx_destruct;

@end
