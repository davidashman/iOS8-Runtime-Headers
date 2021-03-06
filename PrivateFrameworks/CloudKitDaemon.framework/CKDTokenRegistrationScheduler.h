/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableDictionary, NSObject<OS_dispatch_source>, NSString, NSObject<OS_dispatch_queue>, CKDURLRequest;

@interface CKDTokenRegistrationScheduler : NSObject <CKDSystemAvailabilityWatcher> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_callbackBlocks;
    NSMutableDictionary *_callbackTimers;
    NSObject<OS_dispatch_source> *_scheduleTimer;
    CKDURLRequest *_request;
}

@property(retain) NSObject<OS_dispatch_queue> * queue;
@property(retain) NSMutableDictionary * callbackBlocks;
@property(retain) NSMutableDictionary * callbackTimers;
@property(retain) NSObject<OS_dispatch_source> * scheduleTimer;
@property(retain) CKDURLRequest * request;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)sharedScheduler;

- (void)setScheduleTimer:(id)arg1;
- (id)scheduleTimer;
- (void)setCallbackTimers:(id)arg1;
- (void)setCallbackBlocks:(id)arg1;
- (void)tokenRefreshChanged;
- (void)_removeToken:(id)arg1 appContainerTuple:(id)arg2 apsEnvironmentString:(id)arg3 usesAPSPublicToken:(long long)arg4 completionBlock:(id)arg5;
- (void)_refreshToken:(id)arg1 appContainerTuple:(id)arg2 apsEnvironmentString:(id)arg3 usesAPSPublicToken:(long long)arg4 completionBlock:(id)arg5;
- (id)callbackBlocks;
- (id)callbackTimers;
- (void)refreshAllClientsNow;
- (void)scheduleTokenRefresh;
- (void)handlePublicPushTokenDidUpdate:(id)arg1;
- (void)handlePushTokenDidUpdate:(id)arg1;
- (void)_scheduleTokenRefresh;
- (void)ensureTokenRefreshForAppContainerTuple:(id)arg1 apsEnvironmentString:(id)arg2 useAPSPublicToken:(bool)arg3 completionBlock:(id)arg4;
- (void)forceTokenRefreshForAllClients;
- (void)unregisterTokenForAppContainerTuple:(id)arg1;
- (void)systemAvailabilityChanged:(bool)arg1;
- (void)setRequest:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)queue;
- (id)init;
- (id)request;
- (void)dealloc;
- (void).cxx_destruct;

@end
