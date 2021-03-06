/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class BRCCloudFileProvider, BRCVersionsFileProvider, NSString, NSError, NSDate, BRCAccountHandler, BRCAccountSession, NSXPCListenerEndpoint, NSXPCListener, NSObject<OS_dispatch_source>, NSObject<OS_dispatch_group>;

@interface BRCDaemon : NSObject <NSXPCListenerDelegate, BRCAccountHandlerDelegate> {
    NSObject<OS_dispatch_source> *_sigIntSrc;
    NSObject<OS_dispatch_source> *_sigQuitSrc;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    NSObject<OS_dispatch_group> *_ipcBlockerGroup;
    NSXPCListener *_xpcListener;
    bool_unitTestMode;
    bool_resumed;
    BRCAccountSession *_accountSession;
    BRCCloudFileProvider *_fileProvider;
    BRCVersionsFileProvider *_versionsProvider;
    BRCAccountHandler *_accountHandler;
    bool_disableAccountChangesHandling;
    bool_disableAppsChangesHandling;
    NSString *_logsDirPath;
    NSString *_appSupportDirPath;
    NSString *_cacheDirPath;
    NSString *_rootDirPath;
    Class _containerClass;
    NSError *_loggedOutError;
    NSString *_ubiquityTokenSalt;
    unsigned long long _forceIsGreedyState;
    NSDate *_startupDate;
}

@property bool disableAccountChangesHandling;
@property bool disableAppsChangesHandling;
@property unsigned long long forceIsGreedyState;
@property(retain) NSString * logsDirPath;
@property(retain) NSString * appSupportDirPath;
@property(retain) NSString * cacheDirPath;
@property(retain) NSString * rootDirPath;
@property(readonly) BRCAccountHandler * accountHandler;
@property(retain) BRCAccountSession * accountSession;
@property(retain) NSError * loggedOutError;
@property(readonly) NSXPCListenerEndpoint * endpoint;
@property(readonly) NSString * ubiquityTokenSalt;
@property(readonly) NSDate * startupDate;
@property(retain) Class containerClass;
@property(readonly) BRCCloudFileProvider * fileProvider;
@property(readonly) BRCVersionsFileProvider * versionsProvider;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)daemon;

- (void)setForceIsGreedyState:(unsigned long long)arg1;
- (unsigned long long)forceIsGreedyState;
- (void)setDisableAppsChangesHandling:(bool)arg1;
- (bool)disableAppsChangesHandling;
- (void)setDisableAccountChangesHandling:(bool)arg1;
- (bool)disableAccountChangesHandling;
- (void)setContainerClass:(Class)arg1;
- (Class)containerClass;
- (void)setRootDirPath:(id)arg1;
- (void)setCacheDirPath:(id)arg1;
- (id)cacheDirPath;
- (void)setAppSupportDirPath:(id)arg1;
- (void)setLogsDirPath:(id)arg1;
- (id)logsDirPath;
- (bool)status:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (bool)selfCheck:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)setUp;
- (void)setUpAnonymousListener;
- (void)waitForConfiguration;
- (id)loggedOutError;
- (void)exitWithCode:(int)arg1;
- (bool)_haveRequiredKernelFeatures;
- (void)setUpSandbox;
- (void)_initSignals;
- (void)handleExitSignal:(int)arg1;
- (void)accountHandler:(id)arg1 didChangeSessionTo:(id)arg2;
- (void)accountHandler:(id)arg1 willChangeSessionFrom:(id)arg2;
- (void)setLoggedOutError:(id)arg1;
- (id)ubiquityTokenSalt;
- (id)rootDirPath;
- (id)appSupportDirPath;
- (id)accountHandler;
- (id)versionsProvider;
- (id)startupDate;
- (void)setAccountSession:(id)arg1;
- (id)accountSession;
- (id)endpoint;
- (void)resume;
- (id)init;
- (id)fileProvider;
- (void).cxx_destruct;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
