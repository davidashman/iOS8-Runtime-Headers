/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSObject<OS_dispatch_queue>;

@interface CoreDAVLogging : NSObject  {
    struct __CFDictionary { } *_logDelegates;
    NSObject<OS_dispatch_queue> *_delegateMuckingQueue;
}

+ (id)sharedLogging;

- (void)logDiagnosticForProvider:(id)arg1 withLevel:(long long)arg2 format:(id)arg3 args:(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; }[1])arg4;
- (id)delegatesToLogTransmittedDataForAccountInfoProvider:(id)arg1;
- (void)removeLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;
- (void)addLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;
- (bool)_shouldOutputAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2;
- (bool)shouldLogAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2;
- (id)_delegatesToLogForProvider:(id)arg1;
- (id)init;
- (void)dealloc;

@end
