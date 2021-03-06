/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTNetworkSupport : NSObject  {
    bool_enableCriticalReliability;
    bool_criticalReliabilityEnabledState;
}

@property(readonly) bool allowAnyNetwork;
@property(readonly) bool validNetworkEnabled;
@property(readonly) bool validNetworkActive;
@property(readonly) bool validNetworkReachable;
@property(readonly) bool wiFiActiveAndReachable;
@property(readonly) bool willSearchForNetwork;
@property(readonly) bool dataActiveAndReachable;
@property(readonly) bool networkEnabled;
@property(readonly) bool networkActive;
@property(readonly) bool networkReachable;
@property bool enableCriticalReliability;

+ (id)sharedInstance;

- (bool)dataActiveAndReachable;
- (bool)willSearchForNetwork;
- (bool)validNetworkActive;
- (bool)validNetworkEnabled;
- (void)_tryToEnableReliability;
- (void)_reallySetCriticalReliability:(bool)arg1;
- (void)_setReliabilityTimeoutInterval;
- (bool)enableCriticalReliability;
- (bool)networkReachable;
- (bool)networkActive;
- (bool)networkEnabled;
- (bool)wiFiActiveAndReachable;
- (void)_clearReliabilityTimeoutInterval;
- (bool)validNetworkReachable;
- (void)setEnableCriticalReliability:(bool)arg1;
- (bool)allowAnyNetwork;

@end
