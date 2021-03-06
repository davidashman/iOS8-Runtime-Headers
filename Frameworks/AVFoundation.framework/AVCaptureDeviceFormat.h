/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, NSArray, AVCaptureDeviceFormatInternal;

@interface AVCaptureDeviceFormat : NSObject  {
    AVCaptureDeviceFormatInternal *_internal;
}

@property(readonly) NSString * mediaType;
@property(readonly) struct opaqueCMFormatDescription { }* formatDescription;
@property(readonly) NSArray * videoSupportedFrameRateRanges;
@property(readonly) float videoFieldOfView;
@property(getter=isVideoBinned,readonly) bool videoBinned;
@property(getter=isVideoStabilizationSupported,readonly) bool videoStabilizationSupported;
@property(readonly) double videoMaxZoomFactor;
@property(readonly) double videoZoomFactorUpscaleThreshold;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minExposureDuration;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxExposureDuration;
@property(readonly) float minISO;
@property(readonly) float maxISO;

+ (void)initialize;

- (bool)isFeature0ModeSupported:(long long)arg1;
- (float)minISO;
- (struct { int x1; int x2; })sensorDimensions;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (struct { int x1; int x2; })videoFeature2;
- (long long)video999;
- (int)supportedFormatsArrayIndex;
- (bool)needsPhotoPreviewDPCC;
- (bool)isHighResPhotoFormat;
- (id)videoZoomSupportedUpscaleStages;
- (id)videoZoomSupportedDownscaleStages;
- (int)rawBitDepth;
- (bool)supportsDynamicCrop;
- (bool)supportsLowLightBoost;
- (id)_stringForFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 frameRateRanges:(id)arg2;
- (bool)isExperimental;
- (double)videoZoomFactorUpscaleThreshold;
- (int)supportedStabilizationMethod;
- (bool)isVideoBinned;
- (float)videoFieldOfView;
- (struct { int x1; int x2; })previewDimensions;
- (bool)supportsStillFeature2;
- (bool)prefersVideoFeature1EnabledDoohickey:(id)arg1;
- (bool)supportsHighProfileH264;
- (id)vtScalingMode;
- (id)figCaptureSourceFormat;
- (bool)isSISSupported;
- (id)initWithFigCaptureSourceFormat:(id)arg1;
- (bool)isVideoFeature1Supported;
- (float)maxISO;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minExposureDuration;
- (id)AVCaptureSessionPresets;
- (bool)isDefaultActiveFormat;
- (id)videoSupportedFrameRateRanges;
- (bool)isPhotoFormat;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultActiveMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultActiveMinFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })highestSupportedVideoFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lowestSupportedVideoFrameDuration;
- (bool)isVideoStabilizationSupported;
- (double)videoMaxZoomFactor;
- (id)mediaType;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;

@end
