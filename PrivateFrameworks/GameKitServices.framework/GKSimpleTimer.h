/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSObject<OS_dispatch_source>, <GKSimpleTimerDelegate>;

@interface GKSimpleTimer : NSObject  {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } _lock;
    NSObject<OS_dispatch_source> *_timerSource;
    id _delegate;
    double _startTime;
    double _interval;
    bool_timerSourceSet;
}

@property <GKSimpleTimerDelegate> * delegate;
@property(readonly) double interval;


- (void)fireIn:(double)arg1 fromNow:(double)arg2;
- (void)setTimer:(double)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)invalidate;
- (id)delegate;
- (void)dealloc;
- (double)interval;

@end
