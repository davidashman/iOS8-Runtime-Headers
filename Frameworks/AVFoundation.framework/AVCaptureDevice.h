/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, NSArray, AVCaptureDeviceFormat, AVCaptureDeviceInternal;

@interface AVCaptureDevice : NSObject  {
    AVCaptureDeviceInternal *_internal;
}

@property(readonly) NSString * uniqueID;
@property(readonly) NSString * modelID;
@property(readonly) NSString * localizedName;
@property(getter=isConnected,readonly) bool connected;
@property(readonly) NSArray * formats;
@property(retain) AVCaptureDeviceFormat * activeFormat;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } activeVideoMinFrameDuration;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } activeVideoMaxFrameDuration;

+ (void)requestAccessForMediaType:(id)arg1 completionHandler:(id)arg2;
+ (long long)authorizationStatusForMediaType:(id)arg1;
+ (id)_devices;
+ (id)deviceWithUniqueID:(id)arg1;
+ (id)defaultDeviceWithMediaType:(id)arg1;
+ (id)devices;
+ (id)devicesWithMediaType:(id)arg1;
+ (void)initialize;

- (void)setVideoFeature1Enabled:(bool)arg1;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(bool)arg1;
- (void)setImageControlMode:(long long)arg1;
- (void)setVideoZoomFactor:(double)arg1;
- (bool)automaticallyEnablesLowLightBoostWhenAvailable;
- (long long)imageControlMode;
- (double)videoZoomFactor;
- (struct { int x1; int x2; })maxH264VideoDimensions;
- (struct { int x1; int x2; })maxH264PhotoDimensions;
- (id)AVVideoSettingsForSessionPreset:(id)arg1;
- (id)availableBoxedMetadataFormatDescriptions;
- (bool)bitSortFields;
- (bool)attributedIntegerList;
- (bool)testViewProvider;
- (void)setBitSortFields:(bool)arg1;
- (void)setAttributedIntegerList:(bool)arg1;
- (void)setTestViewProvider:(bool)arg1;
- (id)supportedMetadataObjectIdentifiers;
- (bool)isLowLightBoostEnabled;
- (bool)isLowLightBoostSupported;
- (bool)isRawStillImageCaptureSupported;
- (bool)isHDRSupported;
- (void)cancelVideoZoomRamp;
- (bool)isRampingVideoZoom;
- (void)rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2;
- (void)setSaturation:(float)arg1;
- (float)saturation;
- (bool)isVideoFeature1Enabled;
- (void)setAutomaticallyAdjustsVideoFeature1:(bool)arg1;
- (bool)automaticallyAdjustsVideoFeature1;
- (void)setAutomaticallyAdjustsImageControlMode:(bool)arg1;
- (bool)automaticallyAdjustsImageControlMode;
- (bool)isImageControlModeSupported:(long long)arg1;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGainsForTemperatureAndTintValues:(struct { float x1; float x2; })arg1;
- (struct { float x1; float x2; })temperatureAndTintValuesForDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGainsForChromaticityValues:(struct { float x1; float x2; })arg1;
- (struct { float x1; float x2; })chromaticityValuesForDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1;
- (void)setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1 completionHandler:(id)arg2;
- (float)maxWhiteBalanceGain;
- (struct { float x1; float x2; float x3; })grayWorldDeviceWhiteBalanceGains;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGains;
- (bool)isAdjustingWhiteBalance;
- (void)setWhiteBalanceMode:(long long)arg1;
- (long long)whiteBalanceMode;
- (bool)isWhiteBalanceModeSupported:(long long)arg1;
- (bool)isAdjustingExposure;
- (void)setExposureTargetBias:(float)arg1 completionHandler:(id)arg2;
- (float)maxExposureTargetBias;
- (float)minExposureTargetBias;
- (float)exposureTargetBias;
- (float)exposureTargetOffset;
- (void)setExposureModeCustomWithDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 ISO:(float)arg2 completionHandler:(id)arg3;
- (float)ISODigitalThreshold;
- (float)ISO;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (void)setExposurePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })exposurePointOfInterest;
- (bool)isExposurePointOfInterestSupported;
- (void)setExposureMode:(long long)arg1;
- (long long)exposureMode;
- (bool)isExposureModeSupported:(long long)arg1;
- (float)lensAperture;
- (void)setFocusModeLockedWithLensPosition:(float)arg1 completionHandler:(id)arg2;
- (float)lensPosition;
- (void)setSmoothAutoFocusEnabled:(bool)arg1;
- (bool)isSmoothAutoFocusEnabled;
- (bool)isSmoothAutoFocusSupported;
- (void)setAutoFocusRangeRestriction:(long long)arg1;
- (long long)autoFocusRangeRestriction;
- (bool)isAutoFocusRangeRestrictionSupported;
- (void)setFocusPointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isAdjustingFocus;
- (struct CGPoint { double x1; double x2; })focusPointOfInterest;
- (bool)isFocusPointOfInterestSupported;
- (void)setFocusMode:(long long)arg1;
- (long long)focusMode;
- (bool)isFocusModeSupported:(long long)arg1;
- (bool)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2;
- (void)setTorchMode:(long long)arg1;
- (long long)torchMode;
- (bool)isTorchActive;
- (bool)isTorchAvailable;
- (bool)isTorchModeSupported:(long long)arg1;
- (float)torchLevel;
- (bool)hasTorch;
- (void)setFlashMode:(long long)arg1;
- (long long)flashMode;
- (bool)isFlashModeSupported:(long long)arg1;
- (bool)isFlashActive;
- (bool)isFlashAvailable;
- (bool)hasFlash;
- (bool)open:(id*)arg1;
- (void)unlockForConfiguration;
- (bool)lockForConfiguration:(id*)arg1;
- (bool)isLockedForConfiguration;
- (struct OpaqueCMClock { }*)deviceClock;
- (bool)isActiveVideoMaxFrameDurationSet;
- (void)setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveFormat:(id)arg1;
- (id)formats;
- (bool)isInUseByAnotherApplication;
- (bool)isMachineReadableCodeDetectionSupported;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(bool)arg1;
- (void)_setVideoFeature1Enabled:(bool)arg1;
- (bool)cachesFigCaptureSourceConfigurationChanges;
- (void)setCachesFigCaptureSourceConfigurationChanges:(bool)arg1;
- (bool)isHighDynamicRangeScene;
- (void)setHighDynamicRangeSceneDetectionEnabled:(bool)arg1;
- (bool)isHighDynamicRangeSceneDetectionEnabled;
- (bool)isHighDynamicRangeSceneDetectionSupported;
- (void)setProvidesStortorgetMetadata:(bool)arg1;
- (bool)providesStortorgetMetadata;
- (int)faceRectangleAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRectangle;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(bool)arg1;
- (bool)isFaceDetectionDrivenImageProcessingEnabled;
- (bool)isFaceDetectionDuringVideoPreviewSupported;
- (bool)isFaceDetectionSupported;
- (void)setSubjectAreaChangeMonitoringEnabled:(bool)arg1;
- (bool)isSubjectAreaChangeMonitoringEnabled;
- (bool)supportsAVCaptureSessionPreset:(id)arg1;
- (bool)hasMediaType:(id)arg1;
- (id)modelID;
- (bool)isCircularTestSupported;
- (bool)isECNotificationSupported;
- (bool)isEndianQualificationSupported;
- (void)stopUsingDevice;
- (bool)startUsingDevice:(id*)arg1;
- (void)_stopUsingDevice;
- (bool)_startUsingDevice:(id*)arg1;
- (bool)isActiveVideoMinFrameDurationSet;
- (void)_setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMaxFrameDuration;
- (void)_setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMinFrameDuration;
- (bool)isVideoStabilizationSupported;
- (id)activeFormat;
- (bool)isOpen;
- (id)localizedName;
- (id)uniqueID;
- (bool)isConnected;
- (id)init;
- (void)close;
- (void)dealloc;
- (id)description;
- (long long)position;
- (float)contrast;
- (void)setContrast:(float)arg1;

@end
