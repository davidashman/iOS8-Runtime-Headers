/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString, NSMutableDictionary;

@interface CKFetchRecordVersionsOperation : CKDatabaseOperation  {
    bool_isDeleted;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    NSString *_minimumVersionETag;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fetchRecordVersionsProgressBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fetchRecordVersionsCompletionBlock;

    NSMutableDictionary *_recordErrors;
}

@property(copy) NSArray * recordIDs;
@property(copy) NSArray * desiredKeys;
@property(copy) NSString * minimumVersionETag;
@property(copy) id fetchRecordVersionsProgressBlock;
@property(copy) id fetchRecordVersionsCompletionBlock;
@property(retain) NSMutableDictionary * recordErrors;
@property bool isDeleted;


- (void)setIsDeleted:(bool)arg1;
- (id)initWithRecordIDs:(id)arg1;
- (void)setFetchRecordVersionsProgressBlock:(id)arg1;
- (void)setFetchRecordVersionsCompletionBlock:(id)arg1;
- (id)fetchRecordVersionsCompletionBlock;
- (id)fetchRecordVersionsProgressBlock;
- (void)setMinimumVersionETag:(id)arg1;
- (id)minimumVersionETag;
- (void)setRecordIDs:(id)arg1;
- (id)recordIDs;
- (id)desiredKeys;
- (void)setRecordErrors:(id)arg1;
- (id)recordErrors;
- (void)setDesiredKeys:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)isDeleted;
- (void).cxx_destruct;

@end
