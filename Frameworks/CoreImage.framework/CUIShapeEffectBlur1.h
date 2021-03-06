/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIVector, CIColor, CIImage, NSNumber;

@interface CUIShapeEffectBlur1 : CIFilter  {
    CIImage *inputImage;
    CIImage *inputFill;
    CIVector *inputOffset;
    NSNumber *inputRadius;
    CIColor *inputGlowColorInner;
    CIColor *inputGlowColorOuter;
    CIColor *inputShadowColorInner;
    CIColor *inputShadowColorOuter;
    NSNumber *inputShadowBlurInner;
    NSNumber *inputShadowBlurOuter;
}

@property(retain) CIImage * inputImage;
@property(retain) CIImage * inputFill;
@property(retain) CIVector * inputOffset;
@property(retain) NSNumber * inputRadius;
@property(retain) CIColor * inputGlowColorInner;
@property(retain) CIColor * inputGlowColorOuter;
@property(retain) CIColor * inputShadowColorInner;
@property(retain) CIColor * inputShadowColorOuter;
@property(retain) NSNumber * inputShadowBlurInner;
@property(retain) NSNumber * inputShadowBlurOuter;

+ (id)customAttributes;

- (id)inputShadowBlurOuter;
- (id)inputShadowBlurInner;
- (id)inputShadowColorOuter;
- (id)inputShadowColorInner;
- (id)inputGlowColorOuter;
- (id)inputGlowColorInner;
- (void)setInputFill:(id)arg1;
- (id)inputFill;
- (void)setInputShadowBlurInner:(id)arg1;
- (void)setInputShadowBlurOuter:(id)arg1;
- (void)setInputGlowColorInner:(id)arg1;
- (void)setInputGlowColorOuter:(id)arg1;
- (void)setInputShadowColorInner:(id)arg1;
- (void)setInputShadowColorOuter:(id)arg1;
- (id)inputOffset;
- (void)setInputOffset:(id)arg1;
- (id)_kernel;
- (id)inputRadius;
- (void)setInputRadius:(id)arg1;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
