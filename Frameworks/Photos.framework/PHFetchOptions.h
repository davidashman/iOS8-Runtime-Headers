/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Photos.framework/Photos
 */

@class NSPredicate, NSArray, NSString;

@interface PHFetchOptions : NSObject <NSCopying> {
    bool_includeHiddenAssets;
    bool_includeAllBurstAssets;
    bool_wantsIncrementalChangeDetails;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned long long _fetchPropertyHint;
    long long _chunkSizeForFetch;
    NSString *_transientIdentifier;
    NSPredicate *_internalPredicate;
    NSArray *_internalSortDescriptors;
    NSArray *_customObjectIDSortOrder;
}

@property(retain) NSPredicate * predicate;
@property(retain) NSArray * sortDescriptors;
@property bool includeHiddenAssets;
@property bool includeAllBurstAssets;
@property bool wantsIncrementalChangeDetails;
@property unsigned long long fetchPropertyHint;
@property long long chunkSizeForFetch;
@property(retain) NSString * transientIdentifier;
@property(retain) NSPredicate * internalPredicate;
@property(retain) NSArray * internalSortDescriptors;
@property(retain) NSArray * customObjectIDSortOrder;

+ (id)fetchOptionsWithInclusiveDefaults;

- (bool)wantsIncrementalChangeDetails;
- (long long)chunkSizeForFetch;
- (bool)includeHiddenAssets;
- (bool)includeAllBurstAssets;
- (id)customObjectIDSortOrder;
- (void)setTransientIdentifier:(id)arg1;
- (void)setFetchPropertyHint:(unsigned long long)arg1;
- (unsigned long long)fetchPropertyHint;
- (void)setInternalSortDescriptors:(id)arg1;
- (id)internalSortDescriptors;
- (id)internalPredicate;
- (void)setIncludeAllBurstAssets:(bool)arg1;
- (void)setCustomObjectIDSortOrder:(id)arg1;
- (void)setInternalPredicate:(id)arg1;
- (void)setIncludeHiddenAssets:(bool)arg1;
- (id)transientIdentifier;
- (void)setChunkSizeForFetch:(long long)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;
- (id)predicate;
- (void)setWantsIncrementalChangeDetails:(bool)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setPredicate:(id)arg1;

@end
