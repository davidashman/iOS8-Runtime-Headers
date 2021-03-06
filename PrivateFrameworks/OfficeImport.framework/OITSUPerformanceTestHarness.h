/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OITSUPerformanceTestHarness : NSObject  {
    NSMutableArray *mTestCases;
    boolmQuiet;
    long long mPassingTests;
    long long mTotalTests;
    boolmPassed;
    struct timeval { 
        long long tv_sec; 
        int tv_usec; 
    } mSetupTime;
}

@property bool quiet;
@property(readonly) long long passingTestCount;
@property(readonly) long long testCount;
@property(readonly) bool passed;

+ (id)harness;

- (long long)testCount;
- (long long)passingTestCount;
- (bool)quiet;
- (bool)runTests;
- (void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 precision:(double)arg4;
- (void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3;
- (void)p_writeCsvResultsToDirectory:(id)arg1;
- (void)p_writeConsoleMessagesToDirectory:(id)arg1;
- (void)p_writeSystemConfigurationToDirectory:(id)arg1;
- (id)p_createResultDirectory;
- (bool)passed;
- (void)testSuite;
- (id)testWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3;
- (void)setQuiet:(bool)arg1;
- (void)setup;
- (void)report;
- (id)init;
- (void)cleanup;
- (void)dealloc;

@end
