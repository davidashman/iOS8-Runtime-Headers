/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class CMPedometerProxy;

@interface CMPedometer : NSObject  {
    CMPedometerProxy *_pedometerProxy;
}

@property(readonly) CMPedometerProxy * pedometerProxy;

+ (bool)isFloorCountingAvailable;
+ (bool)isDistanceAvailable;
+ (bool)isStepCountingAvailable;

- (void)queryPedometerDataSinceRecord:(long long)arg1 withHandler:(id)arg2;
- (void)stopPedometerUpdates;
- (void)startPedometerUpdatesFromDate:(id)arg1 withHandler:(id)arg2;
- (void)queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(id)arg3;
- (id)pedometerProxy;
- (id)init;
- (void)dealloc;

@end
