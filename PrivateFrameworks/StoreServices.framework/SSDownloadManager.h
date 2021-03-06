/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, SSDownloadManagerOptions, NSObject<OS_dispatch_queue>, SSXPCConnection, NSMutableSet;

@interface SSDownloadManager : NSObject  {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSArray *_activeDownloads;
    bool_activeDownloadsChanged;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    SSXPCConnection *_connection;
    NSArray *_downloads;
    bool_downloadsChanged;
    bool_isUsingNetwork;
    SSXPCConnection *_observerConnection;
    NSObject<OS_dispatch_queue> *_observerQueue;
    struct __CFArray { } *_observers;
    SSDownloadManagerOptions *_options;
    NSMutableSet *_removedDownloads;
}

@property(readonly) SSDownloadManagerOptions * managerOptions;
@property(readonly) NSArray * activeDownloads;
@property(readonly) NSArray * downloads;
@property(getter=isUsingNetwork,readonly) bool usingNetwork;

+ (id)ITunesDownloadKinds;
+ (id)allStoreDownloadKinds;
+ (id)softwareDownloadManager;
+ (void)reevaluateBackgroundDownloadsForBundleIdentifiers:(id)arg1;
+ (id)IPodDownloadManager;
+ (id)EBookDownloadManager;
+ (void)setDownloadHandler:(id)arg1;
+ (void)removePersistenceIdentifier:(id)arg1;
+ (void)retryAllRestoreDownloads;
+ (id)softwareDownloadKinds;
+ (id)IPodDownloadKinds;
+ (id)EBookDownloadKinds;
+ (void)_sendGlobalHandler:(id)arg1;
+ (void)_triggerDownloads;
+ (void)reconnectToLSApplicationWorkspace;

- (void)_pauseDownloads:(id)arg1 completionBlock:(id)arg2;
- (void)setDownloads:(id)arg1 completionBlock:(id)arg2;
- (void)moveDownload:(id)arg1 beforeDownload:(id)arg2 completionBlock:(id)arg3;
- (void)insertDownloads:(id)arg1 beforeDownload:(id)arg2 completionBlock:(id)arg3;
- (void)insertDownloads:(id)arg1 afterDownload:(id)arg2 completionBlock:(id)arg3;
- (void)cancelAllDownloadsWithCompletionBlock:(id)arg1;
- (id)activeDownloads;
- (id)_newOptionsDictionary;
- (void)_sendMessageToObservers:(SEL)arg1;
- (id)_copyDownloadKindsUsingNetwork;
- (void)_handleDownloadStatesChanged:(id)arg1;
- (void)_handleDownloadsChanged:(id)arg1;
- (void)_handleDownloadKindsUsingNetworkChanged:(id)arg1;
- (void)_sendDownloadsChanged:(id)arg1;
- (void)_loadDownloadKindsUsingNetwork;
- (void)_reloadIsUsingNetworkWithDownloadKinds:(id)arg1;
- (void)_sendObserverConnection;
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;
- (void)_handleReply:(id)arg1 forDownloads:(id)arg2 message:(id)arg3 isRetry:(bool)arg4 block:(id)arg5;
- (void)setDownloads:(id)arg1 forKinds:(id)arg2 completionBlock:(id)arg3;
- (void)_pauseDownloads:(id)arg1 forced:(bool)arg2 completionBlock:(id)arg3;
- (void)_moveDownload:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(id)arg4;
- (id)_copyDownloads;
- (void)_sendMessage:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_insertDownloads:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(id)arg4;
- (id)_copyDownloadsForMessage:(long long)arg1 downloadIDs:(id)arg2;
- (void)_connectAsObserver;
- (id)_initSSDownloadManager;
- (id)_XPCConnection;
- (void)_finishDownloads:(id)arg1;
- (void)_willFinishDownloads:(id)arg1;
- (void)_handleDownloadsRemoved:(id)arg1;
- (void)reloadFromServer;
- (bool)isUsingNetwork;
- (id)downloads;
- (id)managerOptions;
- (bool)canCancelDownload:(id)arg1;
- (id)initWithDownloadKinds:(id)arg1;
- (void)moveDownload:(id)arg1 afterDownload:(id)arg2 completionBlock:(id)arg3;
- (void)pauseDownloads:(id)arg1 completionBlock:(id)arg2;
- (id)initWithManagerOptions:(id)arg1;
- (void)resumeDownloads:(id)arg1 completionBlock:(id)arg2;
- (void)addDownloads:(id)arg1 completionBlock:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)getDownloadsUsingBlock:(id)arg1;
- (void)cancelDownloads:(id)arg1 completionBlock:(id)arg2;
- (void)finishDownloads:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)dealloc;

@end
