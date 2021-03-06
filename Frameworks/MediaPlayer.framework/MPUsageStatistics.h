/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSObject<OS_dispatch_queue>, NSString;

@interface MPUsageStatistics : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_domain;
    NSString *_lastAggregateStatisticsDisplayCountKey;
    double _lastAggregateStatisticsDisplayCountTime;
}

+ (id)sharedStatistics;

- (void)setAggregateStatisticsDomain:(id)arg1;
- (void)incrementViewDisplayCountForKey:(id)arg1;
- (void)incrementViewDisplayCountForViewController:(id)arg1;
- (id)init;
- (id)domain;
- (void).cxx_destruct;

@end
