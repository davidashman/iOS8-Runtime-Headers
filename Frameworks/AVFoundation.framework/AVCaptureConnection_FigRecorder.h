/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVCaptureOutput_FigRecorder, AVCaptureConnectionInternal_FigRecorder, AVCaptureVideoPreviewLayer_FigRecorder;

@interface AVCaptureConnection_FigRecorder : NSObject  {
    AVCaptureConnectionInternal_FigRecorder *_internal;
}

@property(readonly) NSArray * inputPorts;
@property(readonly) AVCaptureOutput_FigRecorder * output;
@property(readonly) AVCaptureVideoPreviewLayer_FigRecorder * videoPreviewLayer;
@property(getter=isEnabled) bool enabled;
@property(getter=isActive,readonly) bool active;
@property(readonly) NSArray * audioChannels;
@property(getter=isVideoMirroringSupported,readonly) bool supportsVideoMirroring;
@property(getter=isVideoMirrored) bool videoMirrored;
@property bool automaticallyAdjustsVideoMirroring;
@property(getter=isVideoOrientationSupported,readonly) bool supportsVideoOrientation;
@property long long videoOrientation;
@property(getter=isVideoMinFrameDurationSupported,readonly) bool supportsVideoMinFrameDuration;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } videoMinFrameDuration;
@property(getter=isVideoMaxFrameDurationSupported,readonly) bool supportsVideoMaxFrameDuration;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } videoMaxFrameDuration;
@property(readonly) double videoMaxScaleAndCropFactor;
@property double videoScaleAndCropFactor;
@property(getter=isVideoStabilizationSupported,readonly) bool supportsVideoStabilization;
@property(getter=isVideoStabilizationEnabled,readonly) bool videoStabilizationEnabled;
@property bool enablesVideoStabilizationWhenAvailable;

+ (id)connectionWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
+ (id)connectionWithInputPorts:(id)arg1 output:(id)arg2;
+ (void)initialize;

- (long long)videoOrientation;
- (void)setVideoOrientation:(long long)arg1;
- (void)setVideoMirrored:(bool)arg1;
- (void)initCommonStorage;
- (void)setVideoRetainedBufferCountHint:(int)arg1;
- (void)setFeature0Mode:(long long)arg1;
- (void)setEnablesVideoStabilizationWhenAvailable:(bool)arg1;
- (bool)enablesVideoStabilizationWhenAvailable;
- (bool)isVideoStabilizationEnabled;
- (void)setVideoScaleAndCropFactor:(double)arg1;
- (void)setVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)isVideoMaxFrameDurationSet;
- (bool)isVideoMaxFrameDurationSupported;
- (void)setVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)isVideoMinFrameDurationSet;
- (bool)isVideoMinFrameDurationSupported;
- (void)setAutomaticallyAdjustsVideoMirroring:(bool)arg1;
- (void)_setVideoMirrored:(bool)arg1;
- (bool)isVideoMirrored;
- (bool)isVideoRetainedBufferCountHintSupported;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_videoMaxFrameDuration;
- (void)_setVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_videoMinFrameDuration;
- (bool)isVideoOrientationSupported;
- (bool)isVideoMirroringSupported;
- (void)inputPortFormatDescriptionChanged:(id)arg1;
- (bool)isVideoStabilizationSupported;
- (void)updateAudioChannelsArray;
- (bool)sourcesFromFrontFacingCamera;
- (id)videoPreviewLayer;
- (id)output;
- (id)initWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
- (id)initWithInputPorts:(id)arg1 output:(id)arg2;
- (long long)activeFeature0Mode;
- (long long)feature0Mode;
- (int)videoRetainedBufferCountHint;
- (double)videoScaleAndCropFactor;
- (double)videoMaxScaleAndCropFactor;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoMinFrameDuration;
- (bool)automaticallyAdjustsVideoMirroring;
- (id)audioChannels;
- (id)sourceDevice;
- (float)getPeakAudioLevelForChannel:(id)arg1;
- (float)getAvgAudioLevelForChannel:(id)arg1;
- (id)inputPorts;
- (bool)isLive;
- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (id)mediaType;
- (bool)isActive;
- (void)invalidate;
- (bool)isKindOfClass:(Class)arg1;
- (id)session;
- (void)dealloc;
- (id)description;
- (void)setActive:(bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
