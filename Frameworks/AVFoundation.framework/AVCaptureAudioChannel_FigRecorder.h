/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureAudioChannelInternal_FigRecorder;

@interface AVCaptureAudioChannel_FigRecorder : NSObject  {
    AVCaptureAudioChannelInternal_FigRecorder *_internal;
}

@property(readonly) float averagePowerLevel;
@property(readonly) float peakHoldLevel;


- (float)peakHoldLevel;
- (float)averagePowerLevel;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (bool)isKindOfClass:(Class)arg1;
- (void)dealloc;

@end
