/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, <PLCloudScenarioConsumer>;

@interface PLCloudScenarioProducer : NSObject  {
    NSArray *_triggers;
    <PLCloudScenarioConsumer> *_consumer;
}

@property(retain) NSArray * triggers;
@property(retain) <PLCloudScenarioConsumer> * consumer;


- (void)setTriggers:(id)arg1;
- (void)unsubscribeFromTriggerType:(unsigned long long)arg1;
- (void)subscribeToTriggerType:(unsigned long long)arg1 withSelector:(SEL)arg2;
- (id)triggers;
- (void)setConsumer:(id)arg1;
- (id)consumer;
- (void)activate;
- (void)dealloc;

@end
