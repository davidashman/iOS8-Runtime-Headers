/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMapTable;

@interface DAPriorityManager : NSObject  {
    int _currentPriority;
    NSMapTable *_clientsToPriorityRequests;
    long long _foregroundDataclasses;
}

@property(retain) NSMapTable * clientsToPriorityRequests;
@property long long foregroundDataclasses;
@property(readonly) int currentPriority;

+ (void)vendPriorityManagers;
+ (id)sharedManager;

- (void)setForegroundDataclasses:(long long)arg1;
- (long long)foregroundDataclasses;
- (int)currentPriority;
- (void)setClientsToPriorityRequests:(id)arg1;
- (void)_setForegroundDataclasses:(long long)arg1;
- (int)_recalculatePriority;
- (id)clientsToPriorityRequests;
- (void)_SBApplicationStateChanged:(id)arg1;
- (void)_setNewPriority;
- (id)appIDsToDataclasses;
- (void)requestPriority:(int)arg1 forClient:(id)arg2 dataclasses:(long long)arg3;
- (void)bumpDataclassesToUIPriority:(long long)arg1;
- (id)stateString;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
