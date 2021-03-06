/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKImageResizingConstraints : NSObject  {
    int _constraintType;
    double _fixedDimension;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
    double _minAspectRatio;
    double _maxAspectRatio;
    bool_respectAspectRatioRange;
    bool_outputMirrored;
    double _outputScale;
    double _outputBorderTrim;
}

@property double outputScale;
@property double outputBorderTrim;
@property bool outputMirrored;

+ (id)constraintsWithFixedSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)constraintsWithMinSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)constraintsWithMaxSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)constraintsWithMinSize:(struct CGSize { double x1; double x2; })arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithMaxSize:(struct CGSize { double x1; double x2; })arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithFixedSmallDimenstion:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithFixedLargeDimenstion:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithFixedHeight:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;
+ (id)constraintsWithFixedWidth:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3;

- (void)setOutputMirrored:(bool)arg1;
- (void)setOutputBorderTrim:(double)arg1;
- (double)outputBorderTrim;
- (bool)_reasonable;
- (void)setOutputScale:(double)arg1;
- (id)_flippedConstraints;
- (bool)_getPixelCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 pixelOutputSize:(struct CGSize { double x1; double x2; }*)arg2 forImageSize:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4;
- (id)resizedImage:(id)arg1;
- (bool)outputMirrored;
- (double)outputScale;
- (bool)getPixelCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 pixelOutputSize:(struct CGSize { double x1; double x2; }*)arg2 forImage:(id)arg3;
- (id)init;

@end
