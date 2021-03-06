/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMDaemonListener, NSString, NSProtocolChecker, NSRecursiveLock, NSArray, NSMutableDictionary, NSLock, IMRemoteObject<IMRemoteDaemonProtocol>, IMLocalObject, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface IMDaemonController : NSObject  {
    id _delegate;
    IMRemoteObject<IMRemoteDaemonProtocol> *_remoteObject;
    NSMutableDictionary *_listenerMap;
    IMLocalObject *_localObject;
    IMDaemonListener *_daemonListener;
    NSMutableArray *_services;
    NSProtocolChecker *_protocol;
    NSString *_listenerID;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    NSRecursiveLock *_connectionLock;
    NSArray *_servicesToAllow;
    NSArray *_servicesToDeny;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSLock *_blockingLock;
    bool_hasCheckedForDaemon;
    bool_preventReconnect;
    bool_inBlockingConnect;
    bool_acquiringDaemonConnection;
    bool_autoReconnect;
    bool_blocksConnectionAtResume;
    bool_hasBeenSuspended;
    unsigned int _gMyFZListenerCapabilities;
    unsigned int _cachedCapabilities;
    unsigned int _lastUpdatedCapabilities;
}

@property(readonly) IMDaemonListener * listener;
@property(readonly) bool isConnected;
@property(readonly) unsigned int capabilities;
@property(setter=_setServicesToAllow:,retain) NSArray * _servicesToAllow;
@property(setter=_setServicesToDeny:,retain) NSArray * _servicesToDeny;
@property(setter=_setListenerID:,retain) NSString * _listenerID;
@property id delegate;
@property(setter=_setBlocksConnectionAtResume:) bool _blocksConnectionAtResume;
@property(readonly) bool isConnecting;
@property(setter=__setCapabilities:) unsigned int _capabilities;
@property(setter=_setAutoReconnect:) bool _autoReconnect;
@property(readonly) NSObject<OS_dispatch_queue> * _remoteMessageQueue;

+ (void)_setApplicationWillTerminate;
+ (bool)_applicationWillTerminate;
+ (void)_blockUntilSendQueueIsEmpty;
+ (id)sharedInstance;
+ (id)sharedController;

- (void)localObjectDiedNotification:(id)arg1;
- (void)_setListenerID:(id)arg1;
- (id)_listenerID;
- (id)_remoteMessageQueue;
- (void)_agentDidLaunchNotification:(id)arg1;
- (void)_noteSetupComplete;
- (void)blockUntilConnected;
- (bool)setCapabilities:(unsigned int)arg1 forListenerID:(id)arg2;
- (bool)removeListenerID:(id)arg1;
- (void)_handleDaemonException:(id)arg1;
- (bool)_autoReconnect;
- (bool)connectToDaemon;
- (void)_disconnectFromDaemonWithForce:(bool)arg1;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (void)_listenerSetUpdated;
- (bool)hasListenerForID:(id)arg1;
- (void)disconnectFromDaemon;
- (void)_setCapabilities:(unsigned int)arg1;
- (bool)connectToDaemonWithLaunch:(bool)arg1;
- (void)_blockUntilSendQueueIsEmpty;
- (void)_remoteObjectCleanup;
- (void)_localObjectCleanup;
- (void)_setAutoReconnect:(bool)arg1;
- (void)_setServicesToDeny:(id)arg1;
- (void)_setServicesToAllow:(id)arg1;
- (void)setDaemonLogsOutWithoutStatusListeners:(bool)arg1;
- (void)setDaemonTerminatesWithoutListeners:(bool)arg1;
- (void)listener:(id)arg1 setValue:(id)arg2 ofPersistentProperty:(id)arg3;
- (void)listener:(id)arg1 setValue:(id)arg2 ofProperty:(id)arg3;
- (void)listener:(id)arg1 setListenerCapabilities:(unsigned int)arg2;
- (bool)_acquiringDaemonConnection;
- (void)_setBlocksConnectionAtResume:(bool)arg1;
- (void)setMyStatus:(unsigned long long)arg1 message:(id)arg2;
- (void)setMyProfile:(id)arg1;
- (void)setMyPicture:(id)arg1 smallPictureData:(id)arg2;
- (id)_remoteObject;
- (bool)addListenerID:(id)arg1 capabilities:(unsigned int)arg2;
- (void)disconnectFromDaemonWithForce:(bool)arg1;
- (bool)__isRemoteObjectValidOnQueue:(id)arg1;
- (void)setMyStatus:(unsigned long long)arg1 message:(id)arg2 forAccount:(id)arg3;
- (bool)connectToDaemonWithLaunch:(bool)arg1 capabilities:(unsigned int)arg2 blockUntilConnected:(bool)arg3;
- (void)_connectToDaemonWithLaunch:(bool)arg1 capabilities:(unsigned int)arg2;
- (bool)_makeConnectionWithLaunch:(bool)arg1 completionBlock:(id)arg2;
- (void)remoteObjectDiedNotification:(id)arg1;
- (bool)__isLocalObjectValidOnQueue:(id)arg1;
- (bool)_blocksConnectionAtResume;
- (bool)remoteObjectExists;
- (bool)localObjectExists;
- (void)__setCapabilities:(unsigned int)arg1;
- (void)_addressBookChanged:(id)arg1;
- (id)_servicesToDeny;
- (id)_servicesToAllow;
- (void)sendABInformationToDaemon;
- (bool)isConnecting;
- (unsigned int)capabilities;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (bool)isConnected;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)listener;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (unsigned int)_capabilities;

@end
