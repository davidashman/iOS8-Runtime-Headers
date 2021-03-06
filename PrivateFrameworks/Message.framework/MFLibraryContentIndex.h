/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSObject<OS_dispatch_group>, NSString, _MFLibraryContentIndexResultsCache, NSMutableArray, _MFContentIndexWrapper, NSObject<OS_dispatch_queue>, NSMutableIndexSet, <MFLibraryContentIndexDataSource>;

@interface MFLibraryContentIndex : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_path;
    NSString *_indexName;
    double _startNonIdle;
    long long _state;
    NSMutableArray *_pendingIndexableItems;
    NSMutableIndexSet *_pendingRemovals;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_indexingQueue;
    unsigned long long _throttledBatchSize;
    <MFLibraryContentIndexDataSource> *_dataSource;
    NSObject<OS_dispatch_queue> *_dataSourceQueue;
    NSObject<OS_dispatch_queue> *_utilityPriorityQueue;
    NSObject<OS_dispatch_queue> *_foregroundPriorityQueue;
    _MFContentIndexWrapper *_contentIndexWrapper;
    int _invalidated;
    _MFLibraryContentIndexResultsCache *_resultsCache;
    unsigned int _isForeground : 1;
    unsigned int _refreshing : 1;
    unsigned int _shouldReopen : 1;
    unsigned int _processPendingChangesScheduled : 1;
}


- (void)_dataSourceIndexItemsNeedingRefreshWithLimit:(unsigned long long)arg1;
- (void)_invalidateResultsCache;
- (void)_dataSourceAssignTransactionIdentifier:(unsigned int)arg1 forDocumentIdentifiers:(id)arg2;
- (unsigned int)_addItem:(id)arg1 toContentIndex:(struct __CXIndex { }*)arg2;
- (id)_consumeBatchOfSize:(unsigned long long)arg1;
- (void)_dataSourceInvalidateItemsGreaterThanTransactionId:(unsigned int)arg1;
- (id)_indexFullPath;
- (struct __CXQuery { }*)_createQueryFromCriterion:(id)arg1 mailboxIDs:(id)arg2 contentIndex:(struct __CXIndex { }*)arg3;
- (struct __CXQueryNode { }*)_createQueryNodeFromMailboxIDs:(id)arg1;
- (struct __CXQueryNode { }*)_createQueryNodeFromCriterion:(id)arg1;
- (id)_copyContentIndex;
- (void)_transitionToNextState;
- (void)_processRefreshRequest;
- (void)forceReopen;
- (void)_processRemovals:(struct __CXIndex { }*)arg1;
- (void)_processIndexingBatch:(struct __CXIndex { }*)arg1;
- (id)_copyContentIndex_indexingQueue;
- (void)scheduleProcessPendingItems;
- (void)_transitionToNextStatePaused:(bool)arg1;
- (void)_markInvalidated;
- (void)_updateDataSourceQueueTargetIsForeground:(bool)arg1;
- (void)removeItemsWithDocumentIdentifiers:(id)arg1;
- (void)indexItems:(id)arg1;
- (void)applicationWillResume;
- (void)invalidateAndWait;
- (id)initWithPath:(id)arg1 indexName:(id)arg2 dataSource:(id)arg3;
- (bool)isSearchable;
- (id)documentIdentifiersMatchingCriterion:(id)arg1 mailboxIDs:(id)arg2;
- (void)setTargetQueue:(id)arg1;
- (void)resume;
- (void)refresh;
- (void)wait;
- (void)suspend;
- (void)dealloc;
- (void)applicationWillSuspend;

@end
