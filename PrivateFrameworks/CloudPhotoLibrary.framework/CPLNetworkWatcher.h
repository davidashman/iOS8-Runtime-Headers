/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSObject<OS_dispatch_queue>, <CPLNetworkWatcherDelegate>;

@interface CPLNetworkWatcher : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    struct __SCNetworkReachability { } *_reachability;
    unsigned int _reachabilityFlags;
    unsigned long long _networkState;
    <CPLNetworkWatcherDelegate> *_delegate;
}

@property(readonly) unsigned long long networkState;
@property <CPLNetworkWatcherDelegate> * delegate;

+ (id)_descriptionForNetworkState:(unsigned long long)arg1;

- (unsigned long long)networkState;
- (void)_initialReachabilityTestFailed;
- (void)_reachabilityFlagsDidChange:(unsigned int)arg1;
- (void)_teardownReachability;
- (void)_updateState:(unsigned long long)arg1;
- (void)_setupReachability;
- (void)stop;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1;

@end
