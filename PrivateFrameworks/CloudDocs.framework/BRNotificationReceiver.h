/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class BRNotificationQueue, NSString, NSMutableDictionary, NSMutableArray, <BRNotificationReceiverDelegate>, NSObject<OS_dispatch_source>, NSObject<OS_dispatch_queue>;

@interface BRNotificationReceiver : NSObject <BRReachabilityObserver, BRItemNotificationReceiving> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_ipcQueue;
    NSObject<OS_dispatch_queue> *_invalidationQueue;
    BRNotificationQueue *_notifs;
    NSMutableArray *_senders;
    int _gatherDones;
    <BRNotificationReceiverDelegate> *_delegate;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _receivedChanges;
    unsigned long long _batchingChanges;
    double _batchingDelay;
    unsigned long long _lastBatchTime;
    NSMutableDictionary *_progressObserverByID;
    NSMutableDictionary *_itemInTransferByID;
}

@property(readonly) unsigned long long pendingCount;
@property unsigned long long batchingChanges;
@property double batchingDelay;
@property(retain) <BRNotificationReceiverDelegate> * delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setBatchingDelay:(double)arg1;
- (double)batchingDelay;
- (void)setBatchingChanges:(unsigned long long)arg1;
- (unsigned long long)batchingChanges;
- (void)enableUpdatesFromIPCAfterStitching;
- (void)disableUpdatesFromIPCBeforeStitching;
- (void)receiveStitchingUpdates:(id)arg1;
- (oneway void)invalidateAndDontNotifyDelegate;
- (bool)watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3;
- (unsigned long long)pendingCount;
- (void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(id)arg4;
- (void)_receiveUpdates:(id)arg1;
- (void)invalidateAndNotify:(bool)arg1;
- (id)_getSender;
- (void)dequeue:(unsigned long long)arg1 block:(id)arg2;
- (void)_signalSourceIfNeeded;
- (void)reachabilityMonitor:(id)arg1 didChangeReachabilityStatusTo:(bool)arg2;
- (void)resume;
- (void)flush;
- (id)init;
- (void)setDelegate:(id)arg1;
- (oneway void)invalidate;
- (id)delegate;
- (void)suspend;
- (void)finalize;
- (void)dealloc;

@end
