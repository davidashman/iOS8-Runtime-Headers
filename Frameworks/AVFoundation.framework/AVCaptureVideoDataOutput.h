/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSDictionary, <AVCaptureVideoDataOutputSampleBufferDelegate>, NSObject<OS_dispatch_queue>, AVCaptureVideoDataOutputInternal;

@interface AVCaptureVideoDataOutput : AVCaptureOutput  {
    AVCaptureVideoDataOutputInternal *_internal;
}

@property(readonly) <AVCaptureVideoDataOutputSampleBufferDelegate> * sampleBufferDelegate;
@property(readonly) NSObject<OS_dispatch_queue> * sampleBufferCallbackQueue;
@property(copy) NSDictionary * videoSettings;
@property(readonly) NSArray * availableVideoCVPixelFormatTypes;
@property(readonly) NSArray * availableVideoCodecTypes;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } minFrameDuration;
@property bool alwaysDiscardsLateVideoFrames;

+ (id)supportedVideoSettingsKeys;
+ (id)alloc;
+ (void)initialize;

- (id)videoSettings;
- (void)setVideoSettings:(id)arg1;
- (void)setAlwaysDiscardsLateVideoFrames:(bool)arg1;
- (void)setMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)arg1;
- (void)_setMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)availableVideoCodecTypes;
- (id)availableVideoCVPixelFormatTypes;
- (id)vettedVideoSettingsForSettingsDictionary:(id)arg1;
- (id)outputScalingModeForSourceFormat:(id)arg1;
- (int)requiredOutputFormatForConnection:(id)arg1;
- (struct CGSize { double x1; double x2; })outputSizeForSourceFormat:(id)arg1;
- (bool)hasRequiredOutputFormatForConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (bool)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (bool)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minFrameDuration;
- (bool)usesPreviewSizedBuffers;
- (bool)alwaysDiscardsLateVideoFrames;
- (id)connectionMediaTypes;
- (id)sampleBufferCallbackQueue;
- (id)sampleBufferDelegate;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (id)supportedAssetWriterOutputFileTypes;
- (id)init;
- (void)dealloc;
- (int)outputFormat;

@end
