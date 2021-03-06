/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector;

@interface CIStretch : CIFilter  {
    CIImage *inputImage;
    CIVector *inputPoint;
    CIVector *inputSize;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputPoint;
@property(retain) CIVector * inputSize;

+ (id)customAttributes;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeDOD:(struct vec4 { float x1; float x2; float x3; float x4; })arg1;
- (id)inputSize;
- (void)setInputSize:(id)arg1;
- (id)inputPoint;
- (void)setInputPoint:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
