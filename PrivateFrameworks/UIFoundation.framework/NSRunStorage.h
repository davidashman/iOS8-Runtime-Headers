/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSRunStorage : NSObject <NSCopying> {
    unsigned long long _count;
    unsigned long long _elementSize;
    unsigned long long _numBlocks;
    unsigned long long _maxBlocks;
    unsigned long long _indexDeltaStartBlock;
    long long _indexDelta;
    struct _NSRunBlock { unsigned long long x1; unsigned char x2[0]; } *_runs;
    unsigned long long _cachedBlock;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _cachedBlockRange;
    unsigned long long _gapBlockIndex;
}

+ (void)_setConsistencyCheckingEnabled:(bool)arg1 superCheckEnabled:(bool)arg2;
+ (void)initialize;

- (void)_consistencyCheck:(long long)arg1;
- (void)_moveGapAndMergeWithBlockRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_ensureCapacity:(unsigned long long)arg1;
- (void)_consistencyError:(long long)arg1 startAtZeroError:(bool)arg2 cacheError:(bool)arg3 inconsistentBlockError:(bool)arg4;
- (void)_moveGapToBlockIndex:(unsigned long long)arg1;
- (void*)elementAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (unsigned long long)elementSize;
- (void)_reallocData:(unsigned long long)arg1;
- (id)initWithRunStorage:(id)arg1;
- (void)_deallocData;
- (void)_allocData:(unsigned long long)arg1;
- (void)replaceElementsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withElement:(void*)arg2 coalesceRuns:(bool)arg3;
- (id)initWithElementSize:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (void)removeElementsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 coalesceRuns:(bool)arg2;
- (void)insertElement:(void*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 coalesceRuns:(bool)arg3;
- (id)init;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
