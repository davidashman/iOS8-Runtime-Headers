/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class FBApplicationInfo, BKSProcessAssertion, FBApplicationProcessExitContext, <FBApplicationProcessDelegate>, NSMutableArray, BKSApplicationDataStore, NSString, FBProcessExecutionContext, BSMachSendRight, NSMutableSet, FBProcessCPUStatistics, FBApplicationWatchdog, BKSProcess;

@interface FBApplicationProcess : FBProcess <BKSProcessDelegate, BSWatchdogDelegate> {
    BKSApplicationDataStore *_dataStore;
    NSMutableSet *_allowedLockedFilePaths;
    NSMutableArray *_queuedSceneBlocksToExecuteAfterLaunch;
    FBApplicationProcessExitContext *_exitContext;
    FBProcessExecutionContext *_executionContext;
    FBApplicationWatchdog *_watchdog;
    bool_bootstrapped;
    bool_bootstrapFailed;
    bool_isBeingDebugged;
    bool_hasFinishedLaunching;
    double _launchWatchdogTimeRemaining;
    int _pendingExit;
    BSMachSendRight *_taskNamePort;
    BSMachSendRight *_taskPort;
    BSMachSendRight *_gsEventPort;
    long long _terminationReason;
    int _defaultSceneSuspendType;
    FBProcessCPUStatistics *_cpuStatistics;
    double _execTime;
    BKSProcess *_bksProcess;
    BKSProcessAssertion *_launchProcessAssertion;
    BKSProcessAssertion *_continuousProcessAssertion;
    bool_beingDebugged;
    bool_supportsBackgroundTaskAssertions;
    bool_supportsSuspendOnLock;
    bool_recordingAudio;
    bool_nowPlayingWithAudio;
    bool_connectedToExternalAccessory;
    FBApplicationInfo *_applicationInfo;
}

@property(retain,readonly) FBApplicationInfo * applicationInfo;
@property(retain) FBProcessExecutionContext * executionContext;
@property(retain,readonly) FBApplicationProcessExitContext * exitContext;
@property(getter=isBeingDebugged) bool beingDebugged;
@property(getter=isRecordingAudio) bool recordingAudio;
@property(getter=isNowPlayingWithAudio) bool nowPlayingWithAudio;
@property(getter=isConnectedToExternalAccessory) bool connectedToExternalAccessory;
@property <FBApplicationProcessDelegate> * delegate;
@property(getter=_queue_hasFinishedLaunching,readonly) bool hasFinishedLaunching;
@property(getter=_queue_defaultSuspendType,readonly) int defaultSuspendType;
@property(getter=_queue_cpuStatistics,retain,readonly) FBProcessCPUStatistics * cpuStatistics;
@property(getter=_queue_execTime,readonly) double execTime;
@property(getter=_queue_launchWatchdogTimeRemaining,readonly) double launchWatchdogTimeRemaining;
@property(getter=_queue_terminationReason,readonly) long long terminationReason;
@property(getter=_queue_supportsSuspendOnLock,readonly) bool supportsSuspendOnLock;
@property(getter=_queue_supportsBackgroundTaskAssertions,readonly) bool supportsBackgroundTaskAssertions;
@property(getter=_queue_taskPort,setter=_queue_setTaskPort:) BSMachSendRight * taskPort;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)deleteAllJobs;

- (id)_queue_taskPort;
- (bool)isConnectedToExternalAccessory;
- (bool)isNowPlayingWithAudio;
- (bool)isRecordingAudio;
- (bool)_queue_supportsBackgroundTaskAssertions;
- (id)_queue_lockedFilePathsIgnoringAllowed;
- (void)executeBlockAfterLaunchCompletes:(id)arg1;
- (void)setConnectedToExternalAccessory:(bool)arg1;
- (void)noteWorkspaceLocked:(bool)arg1;
- (bool)bootstrapAndExec;
- (id)UIRemoteAppPortName;
- (id)GSEventPortName;
- (id)GSEventPort;
- (double)elapsedCPUTime;
- (id)exitContext;
- (bool)isBeingDebugged;
- (id)initWithApplicationInfo:(id)arg1 callOutQueue:(id)arg2;
- (void)_queue_setBeingDebugged:(bool)arg1;
- (id)_workspaceServer;
- (int)_queue_ourTaskStateForBKSTaskState:(int)arg1;
- (bool)_queue_shouldWatchdogWithDeclineReason:(id*)arg1;
- (void)_queue_watchdogTerminateWithReason:(int)arg1 format:(id)arg2;
- (void)_queue_forceCrashReportWithReason:(int)arg1 description:(id)arg2;
- (void)_queue_killWithSignal:(int)arg1;
- (bool)_queue_isBeingPtraced;
- (bool)_queue_supportsContinuousBackgroundMode;
- (bool)_queue_isSystemApplication;
- (int)_queue_effectiveVisibilityForVisibility:(int)arg1 underLock:(bool)arg2;
- (bool)_queue_consideredUnderLock;
- (int)_queue_bksVisibilityForVisibility:(int)arg1;
- (void)_queue_startWatchdogTimerOfType:(int)arg1 withDuration:(double)arg2;
- (void)_queue_takeLaunchProcessAssertion;
- (int)_queue_calculateDefaultSceneSuspendType;
- (void)_queue_setTaskPort:(id)arg1;
- (void)_queue_setSupportsSuspendOnLock:(bool)arg1;
- (void)_queue_setSupportsBackgroundTaskAssertions:(bool)arg1;
- (void)_queue_waitToExecOrExit;
- (void)_queue_setupBKSProcess;
- (void)_queue_setAllowedLockedFilePaths:(id)arg1;
- (id)_queue_internalDebugEnvironmentVariables;
- (void)_queue_doGracefulKillWithCompletion:(id)arg1 withWatchdog:(bool)arg2;
- (void)_queue_executeLaunchCompletionBlocks;
- (void)_queue_dropLaunchProcessAssertion;
- (void)_queue_dropContinuousProcessAssertion;
- (void)_queue_cancelWatchdogTimer;
- (unsigned long long)_queue_noteExitedForForceQuit:(bool)arg1;
- (void)_queue_processReallyDidExit;
- (void)_queue_invalidateBKSProcess;
- (bool)_queue_finishLaunch;
- (bool)_queue_bootstrapAndExec;
- (id)_queue_UIRemoteAppPortName;
- (id)_queue_GSEventPortName;
- (void)_queue_enumerateApplicationObserversWithBlock:(id)arg1;
- (void)_queue_killForReason:(long long)arg1 andReport:(bool)arg2 withDescription:(id)arg3 completion:(id)arg4;
- (void)setPendingExit:(bool)arg1;
- (void)killForReason:(long long)arg1 andReport:(bool)arg2 withDescription:(id)arg3 completion:(id)arg4;
- (id)_queue_executionContext;
- (bool)_queue_isBeingDebugged;
- (id)initWithApplicationInfo:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3;
- (bool)_queue_supportsSuspendOnLock;
- (double)_queue_launchWatchdogTimeRemaining;
- (void)_queue_executeBlockAfterLaunchCompletes:(id)arg1;
- (void)launchIfNecessary;
- (long long)_queue_terminationReason;
- (double)_queue_execTime;
- (id)_queue_cpuStatistics;
- (void)_queue_sceneNeedsGracefulExit:(id)arg1 withExitCompletion:(id)arg2;
- (int)_queue_defaultSuspendType;
- (bool)_queue_hasFinishedLaunching;
- (void)_queue_sceneLifecycleStateChanged:(id)arg1;
- (bool)isPendingExit;
- (id)initWithBundleID:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3;
- (void)_queue_processDidExit;
- (void)_queue_callExitObservers;
- (int)_queue_effectiveVisibilityForVisibility:(int)arg1;
- (void)_queue_setVisibility:(int)arg1;
- (void)_queue_setTaskState:(int)arg1;
- (id)_queue_name;
- (id)_createWorkspace;
- (int)_queue_effectiveVisibilityForSceneSettings:(id)arg1;
- (void)killForReason:(long long)arg1 andReport:(bool)arg2 withDescription:(id)arg3;
- (id)applicationInfo;
- (bool)isApplicationProcess;
- (id)_applicationWorkspace;
- (bool)isSystemApplicationProcess;
- (void)setRecordingAudio:(bool)arg1;
- (void)setNowPlayingWithAudio:(bool)arg1;
- (void)process:(id)arg1 isBeingDebugged:(bool)arg2;
- (void)processWillExpire:(id)arg1;
- (void)process:(id)arg1 taskStateDidChange:(int)arg2;
- (void)stop;
- (void)watchdogFired:(id)arg1;
- (void)watchdogCancelled:(id)arg1;
- (void)watchdogStarted:(id)arg1;
- (void)dealloc;
- (void)setExecutionContext:(id)arg1;
- (id)executionContext;
- (id)_workspace;

@end
