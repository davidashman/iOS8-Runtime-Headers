/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray;

@interface PLCloudSchedulerConfiguration : NSObject  {
    NSArray *_triggers;
    NSArray *_scenarioProducers;
    unsigned long long _concurrencyLevel;
}

@property(retain) NSArray * triggers;
@property(retain) NSArray * scenarioProducers;
@property unsigned long long concurrencyLevel;


- (void)setConcurrencyLevel:(unsigned long long)arg1;
- (unsigned long long)concurrencyLevel;
- (void)setScenarioProducers:(id)arg1;
- (id)scenarioProducers;
- (void)setTriggers:(id)arg1;
- (id)triggers;

@end
