/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSURL, CKDServerConfiguration, NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSBundle, NSMutableArray, CKDFlowControlManager, CKDAccount, CKContainerID, NSString, CKDPCSManager, CKDMMCS, CKDMescalSession, NSObject<OS_dispatch_queue>, NSArray, CKAccountInfo, CKDZoneGatekeeper;

@interface CKDClientContext : NSObject <CKLoggingProtocol> {
    bool_canAccessAccounts;
    bool_hasDataContainer;
    bool_canAccessProtectionData;
    bool_canSetDeviceIdentifier;
    bool_accountRefreshInProgress;
    bool_accountReloadRequired;
    bool_sandboxed;
    CKDServerConfiguration *_config;
    NSURL *_publicCloudDBURL;
    NSURL *_publicShareServiceURL;
    NSURL *_publicDeviceServiceURL;
    NSString *_containerScopedUserID;
    CKContainerID *_containerID;
    NSBundle *_applicationBundle;
    NSString *_applicationBundleID;
    NSString *_applicationVersion;
    NSURL *_applicationIcon;
    NSString *_applicationDisplayName;
    NSString *_applicationContainerPath;
    NSString *_applicationContainerCloudKitDirectory;
    NSString *_applicationCachesDirectory;
    NSString *_applicationMMCSDirectory;
    NSString *_applicationAssetMetaDirectory;
    NSString *_applicationAssetDownloadDirectory;
    NSString *_applicationPackageCacheDirectory;
    NSString *_applicationRecordCacheDirectory;
    NSArray *_sandboxExtensions;
    NSString *_containerHardwareIDHash;
    long long _type;
    long long _usesAPSPublicToken;
    CKDAccount *_account;
    CKAccountInfo *_accountInfoOverride;
    CKDFlowControlManager *_flowControlManager;
    CKDMMCS *_MMCS;
    CKDPCSManager *_pcsManager;
    CKDZoneGatekeeper *_foregroundZoneGatekeeper;
    CKDZoneGatekeeper *_backgroundZoneGatekeeper;
    CKDMescalSession *_mescalSession;
    NSMutableDictionary *_fakeErrorByClassName;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSObject<OS_dispatch_queue> *_accountLoaderQueue;
    NSString *_contextID;
    NSMutableArray *_oldApplicationCaches;
    NSString *_applicationAssetDbDirectory;
}

@property(retain) CKDServerConfiguration * config;
@property(retain) NSURL * publicCloudDBURL;
@property(retain) NSURL * publicShareServiceURL;
@property(retain) NSURL * publicDeviceServiceURL;
@property(retain) NSString * containerScopedUserID;
@property(readonly) CKContainerID * containerID;
@property(readonly) NSBundle * applicationBundle;
@property(readonly) NSString * applicationBundleID;
@property(retain) NSString * applicationVersion;
@property(readonly) NSURL * applicationIcon;
@property(readonly) NSString * applicationDisplayName;
@property(retain) NSString * applicationContainerPath;
@property(retain) NSString * applicationContainerCloudKitDirectory;
@property(retain) NSString * applicationCachesDirectory;
@property(retain) NSString * applicationMMCSDirectory;
@property(readonly) NSString * applicationAssetMetaDirectory;
@property(retain) NSString * applicationAssetDownloadDirectory;
@property(retain) NSString * applicationPackageCacheDirectory;
@property(retain) NSString * applicationRecordCacheDirectory;
@property(readonly) NSArray * sandboxExtensions;
@property(readonly) NSString * containerHardwareIDHash;
@property(readonly) long long type;
@property(setter=setAPSEnvironmentString:,retain) NSString * apsEnvironmentString;
@property long long usesAPSPublicToken;
@property(retain) CKDAccount * account;
@property(readonly) CKAccountInfo * accountInfoOverride;
@property bool canAccessAccounts;
@property bool hasDataContainer;
@property bool canAccessProtectionData;
@property bool canSetDeviceIdentifier;
@property(retain) CKDFlowControlManager * flowControlManager;
@property(retain) CKDMMCS * MMCS;
@property(retain) CKDPCSManager * pcsManager;
@property(retain) CKDZoneGatekeeper * foregroundZoneGatekeeper;
@property(retain) CKDZoneGatekeeper * backgroundZoneGatekeeper;
@property(retain) CKDMescalSession * mescalSession;
@property(retain) NSMutableDictionary * fakeErrorByClassName;
@property(retain) NSObject<OS_dispatch_semaphore> * sema;
@property(retain) NSObject<OS_dispatch_queue> * accountLoaderQueue;
@property bool accountRefreshInProgress;
@property bool accountReloadRequired;
@property(getter=isSandboxed) bool sandboxed;
@property(readonly) NSString * contextID;
@property(retain) NSMutableArray * oldApplicationCaches;
@property(retain) NSString * applicationAssetDbDirectory;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)sharedContextWithAppContainerTuple:(id)arg1;
+ (id)contextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;
+ (id)_sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;
+ (id)applicationContainerPathForBundleID:(id)arg1 bundleURL:(id*)arg2 type:(long long*)arg3;
+ (id)sharedContexts;
+ (id)sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;

- (void)setApplicationAssetDbDirectory:(id)arg1;
- (void)setOldApplicationCaches:(id)arg1;
- (void)setAccountLoaderQueue:(id)arg1;
- (void)setSema:(id)arg1;
- (id)sema;
- (void)setMescalSession:(id)arg1;
- (id)mescalSession;
- (void)setBackgroundZoneGatekeeper:(id)arg1;
- (void)setForegroundZoneGatekeeper:(id)arg1;
- (void)setPcsManager:(id)arg1;
- (bool)canSetDeviceIdentifier;
- (void)setHasDataContainer:(bool)arg1;
- (void)setCanAccessAccounts:(bool)arg1;
- (bool)canAccessAccounts;
- (long long)usesAPSPublicToken;
- (id)containerHardwareIDHash;
- (void)setApplicationRecordCacheDirectory:(id)arg1;
- (void)setApplicationPackageCacheDirectory:(id)arg1;
- (void)setApplicationAssetDownloadDirectory:(id)arg1;
- (id)applicationAssetMetaDirectory;
- (void)setApplicationMMCSDirectory:(id)arg1;
- (void)setApplicationCachesDirectory:(id)arg1;
- (void)setApplicationContainerCloudKitDirectory:(id)arg1;
- (id)applicationContainerCloudKitDirectory;
- (void)setApplicationContainerPath:(id)arg1;
- (id)applicationBundle;
- (void)setPublicDeviceServiceURL:(id)arg1;
- (id)publicDeviceServiceURL;
- (void)setPublicShareServiceURL:(id)arg1;
- (id)publicShareServiceURL;
- (void)setPublicCloudDBURL:(id)arg1;
- (id)publicCloudDBURL;
- (void)performRequest:(id)arg1;
- (bool)setupAssetTransfersWithClientProxy:(id)arg1 error:(id*)arg2;
- (id)apsEnvironmentString;
- (bool)setupMMCSWrapperWithError:(id*)arg1;
- (void)setMMCS:(id)arg1;
- (id)applicationMMCSDirectory;
- (id)initWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;
- (id)_issueSandboxExtensionForPath:(id)arg1 error:(id*)arg2;
- (id)applicationPackageCacheDirectory;
- (id)applicationAssetDbDirectory;
- (id)applicationAssetDownloadDirectory;
- (id)applicationCachesDirectory;
- (id)oldApplicationCaches;
- (bool)accountReloadRequired;
- (void)setAccountRefreshInProgress:(bool)arg1;
- (id)accountLoaderQueue;
- (void)setAccountReloadRequired:(bool)arg1;
- (bool)accountRefreshInProgress;
- (bool)_createAssetDirectoriesAndIssueExtensionsIfNeeded:(bool)arg1 error:(id*)arg2;
- (bool)hasDataContainer;
- (void)_createCacheDirectoryIfNecessary;
- (void)_purgeOldCacheDirectories;
- (void)_determineHardwareInfo;
- (void)_loadApplicationContainerPathAndTypeWithClientProxy:(id)arg1;
- (void)reloadAccount;
- (void)setSandboxed:(bool)arg1;
- (id)MMCS;
- (id)backgroundZoneGatekeeper;
- (id)foregroundZoneGatekeeper;
- (void)setCanSetDeviceIdentifier:(bool)arg1;
- (void)setCanAccessProtectionData:(bool)arg1;
- (void)setFakeErrorByClassName:(id)arg1;
- (void)setUsesAPSPublicToken:(long long)arg1;
- (void)setAPSEnvironmentString:(id)arg1;
- (id)fakeErrorByClassName;
- (id)pcsManager;
- (id)applicationIcon;
- (id)applicationDisplayName;
- (void)tearDownAssetTransfers;
- (id)applicationRecordCacheDirectory;
- (id)applicationContainerPath;
- (bool)canAccessProtectionData;
- (bool)isSandboxed;
- (void)setConfig:(id)arg1;
- (id)applicationVersion;
- (id)applicationBundleID;
- (void)logWithFile:(const char *)arg1 function:(const char *)arg2 line:(int)arg3 level:(int)arg4 section:(id)arg5 format:(id)arg6;
- (void)setFlowControlManager:(id)arg1;
- (void)setContainerScopedUserID:(id)arg1;
- (id)containerScopedUserID;
- (id)flowControlManager;
- (void)clearAuthTokensForRecordWithID:(id)arg1 inScope:(long long)arg2;
- (void)clearRecordCacheWithDatabaseScope:(long long)arg1;
- (void)clearAssetCacheWithDatabaseScope:(long long)arg1;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2;
- (id)accountInfoOverride;
- (id)containerID;
- (void)showUserNotification:(struct __CFUserNotification { }*)arg1 withCompletionBlock:(id)arg2;
- (id)CKPropertiesDescription;
- (id)account;
- (void)setAccount:(id)arg1;
- (id)contextID;
- (id)sandboxExtensions;
- (long long)type;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (void)setApplicationVersion:(id)arg1;
- (id)config;

@end
