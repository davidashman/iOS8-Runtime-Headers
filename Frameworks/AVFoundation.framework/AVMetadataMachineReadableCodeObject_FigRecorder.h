/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSString, AVMetadataMachineReadableCodeObjectInternal_FigRecorder;

@interface AVMetadataMachineReadableCodeObject_FigRecorder : AVMetadataObject_FigRecorder  {
    AVMetadataMachineReadableCodeObjectInternal_FigRecorder *_internal;
}

@property(readonly) NSArray * corners;
@property(readonly) NSString * stringValue;

+ (id)machineReadableCodeObjectWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2;

- (id)initWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2;
- (id)corners;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 isVideoMirrored:(bool)arg3 rollAdjustment:(double)arg4;
- (id)stringValue;
- (bool)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (id)description;

@end
