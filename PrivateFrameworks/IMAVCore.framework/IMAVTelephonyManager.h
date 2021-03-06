/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVTelephonyManager : NSObject  {
    bool_isDesignatedAudioServiceProvider;
    bool_isDesignatedVideoServiceProvider;
    struct __CFMachPort { } *_ctServerMachPort;
    struct __CFUUID { } *_ctAudioToken;
    struct __CFUUID { } *_ctVideoToken;
}

@property(readonly) unsigned int callState;

+ (id)numberToDialForNumber:(id)arg1 dialAssist:(bool*)arg2;
+ (id)sharedInstance;

- (bool)_wantsBreakBeforeMake;
- (void)stopWatchingForCTRequests;
- (void)startWatchingForCTRequests;
- (void)_chatStateChanged:(id)arg1;
- (void)notifyCallEndedForChat:(id)arg1;
- (void)notifyMissedCallForChat:(id)arg1;
- (void)notifyCallStartedForChat:(id)arg1;
- (void)notifyCallConnectingForChat:(id)arg1;
- (void)notifyCallConnectedForChat:(id)arg1;
- (void)_disconnectCSCallWithID:(id)arg1;
- (bool)_unregisterCTRequestService;
- (bool)_disconnectCTServerConnection;
- (bool)_registerCTRequestService;
- (bool)_breakCSCallsIfNecessary;
- (bool)_isOnCallToID:(id)arg1;
- (void)_notifyMissedCallForInviteFromID:(id)arg1 isVideo:(bool)arg2;
- (bool)_reconnectCTServerConnectionIfNecessary;
- (void)_cleanupMachInfo;
- (bool)_setupCTServerConnection;
- (unsigned int)callState;
- (id)init;
- (void)dealloc;

@end
