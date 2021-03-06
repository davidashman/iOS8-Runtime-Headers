/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDate, CPLResourceTransferTask, NSMutableDictionary;

@interface PLCloudPendingResourceTask : NSObject  {
    CPLResourceTransferTask *_transferTask;
    NSMutableDictionary *_pendingTasks;
    NSDate *_lastUpdated;
    bool_completed;
}


- (void)cancelAllTask;
- (void)keepAlive;
- (id)taskIDs;
- (void)reportCompletionWithError:(id)arg1;
- (id)addProgressBlock:(id)arg1 completionHandler:(id)arg2;
- (id)initWithProgressBlock:(id)arg1 completionHandler:(id)arg2 forTaskIdentifier:(id)arg3;
- (void)setTransferTask:(id)arg1;
- (id)lastUpdated;
- (void)cancelTaskWithIdentifier:(id)arg1;
- (void)reportProgress:(float)arg1;
- (void)dealloc;

@end
