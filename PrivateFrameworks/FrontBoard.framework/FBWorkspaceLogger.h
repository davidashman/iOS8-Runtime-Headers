/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWorkspaceLogger : FBFileLogger  {
    bool_useOverrideDestinations;
    unsigned long long _overrideDestinations;
}


- (void)_configureOverrideDestinationForString:(id)arg1;
- (bool)isEnabled;
- (int)maxLogSize;
- (int)maxLogCount;
- (void)willBeginLoggingToPath:(id)arg1;
- (unsigned long long)logDestinations;
- (void)_setEnabled:(bool)arg1;
- (id)logPrefixForCategory:(id)arg1 destination:(unsigned long long)arg2;
- (void)reloadFromDefaults;
- (id)init;
- (id)name;

@end
