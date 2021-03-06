/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CISkyAndGrassAdjust : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputSkyAmount;
    NSNumber *inputGrassAmount;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputSkyAmount;
@property(retain) NSNumber * inputGrassAmount;

+ (id)customAttributes;

- (id)inputGrassAmount;
- (id)inputSkyAmount;
- (void)setInputGrassAmount:(id)arg1;
- (void)setInputSkyAmount:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
