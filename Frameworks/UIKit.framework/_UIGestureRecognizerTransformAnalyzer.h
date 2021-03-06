/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIGestureRecognizerTransformAnalyzer : NSObject  {
    double _lowPassTranslationMagnitudeDelta;
    double _lowPassScaleDelta;
    double _lowPassRotationDelta;
    double _translationWeight;
    double _pinchingWeight;
    double _rotationWeight;
    int _dominantComponent;
}

@property(readonly) int dominantComponent;
@property double translationWeight;
@property double pinchingWeight;
@property double rotationWeight;


- (id)init;
- (void)reset;
- (int)dominantComponent;
- (void)setRotationWeight:(double)arg1;
- (double)rotationWeight;
- (void)setPinchingWeight:(double)arg1;
- (double)pinchingWeight;
- (void)setTranslationWeight:(double)arg1;
- (double)translationWeight;
- (void)analyzeTouches:(id)arg1;

@end
