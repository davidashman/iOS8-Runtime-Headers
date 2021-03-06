/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CISepiaTone : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputIntensity;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputIntensity;

+ (id)customAttributes;

- (id)inputIntensity;
- (id)_kernel;
- (void)setInputIntensity:(id)arg1;
- (bool)_isIdentity;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
