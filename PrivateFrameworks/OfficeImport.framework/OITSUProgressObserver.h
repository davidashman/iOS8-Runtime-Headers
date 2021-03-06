/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>;

@interface OITSUProgressObserver : NSObject  {
    double mValueInterval;
    NSObject<OS_dispatch_queue> *mQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id mHandler;

    double mLastHandledValue;
    boolmLastHandledIndeterminate;
}

@property(readonly) double valueInterval;


- (double)valueInterval;
- (void)handleValue:(double)arg1 maxValue:(double)arg2 isIndeterminate:(bool)arg3;
- (id)initWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id)arg3;
- (id)init;
- (void)dealloc;

@end
