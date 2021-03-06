/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, CKShareID;

@interface CKDModifyShareCommentsOperation : CKDOperation  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _saveCompletionBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _deleteCompletionBlock;

    CKShareID *_shareID;
    NSArray *_commentsToSave;
    NSArray *_commentIDsToDelete;
}

@property(copy) id saveCompletionBlock;
@property(copy) id deleteCompletionBlock;
@property(retain) CKShareID * shareID;
@property(retain) NSArray * commentsToSave;
@property(retain) NSArray * commentIDsToDelete;


- (void)_handleDeleteProgressWithCommentID:(id)arg1 result:(id)arg2;
- (void)_handleSaveProgressWithComment:(id)arg1 result:(id)arg2;
- (id)deleteCompletionBlock;
- (id)saveCompletionBlock;
- (void)setDeleteCompletionBlock:(id)arg1;
- (void)setSaveCompletionBlock:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)setCommentIDsToDelete:(id)arg1;
- (id)commentIDsToDelete;
- (void)setCommentsToSave:(id)arg1;
- (id)commentsToSave;
- (void)setShareID:(id)arg1;
- (id)shareID;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void).cxx_destruct;

@end
