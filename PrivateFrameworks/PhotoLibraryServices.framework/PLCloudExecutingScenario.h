/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PLCloudScenarioExecutionResult, PLCloudScenario;

@interface PLCloudExecutingScenario : NSObject  {
    PLCloudScenario *_scenario;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionCallback;

    PLCloudScenarioExecutionResult *_executionState;
}

@property(retain) PLCloudScenario * scenario;
@property(copy) id completionCallback;
@property(retain) PLCloudScenarioExecutionResult * executionState;


- (void)setExecutionState:(id)arg1;
- (id)executionState;
- (void)setCompletionCallback:(id)arg1;
- (id)completionCallback;
- (void)setScenario:(id)arg1;
- (id)scenario;
- (void)dealloc;

@end
