/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface VKPuckDrawStyle : VKRenderStyle  {
}

@property(readonly) float circleBrightness;
@property(readonly) float arrowBrightness;
@property(readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  arrowColor; /* unknown property attribute:  1>=[4f]} */
@property(readonly) struct  arrowColorStale; /* unknown property attribute:  1>=[4f]} */
@property(readonly) float size;
@property(readonly) float offset;
@property(readonly) bool hasCircleBrightness;
@property(readonly) bool hasArrowBrightness;
@property(readonly) bool hasArrowColor;
@property(readonly) bool hasArrowColorStale;
@property(readonly) bool hasSize;
@property(readonly) bool hasOffset;

+ (int)renderStyleID;

- (bool)hasOffset;
- (float)arrowBrightness;
- (bool)hasArrowBrightness;
- (struct Matrix<float, 4, 1> { float x1[4]; })arrowColorStale;
- (bool)hasArrowColorStale;
- (float)circleBrightness;
- (bool)hasCircleBrightness;
- (bool)hasArrowColor;
- (struct Matrix<float, 4, 1> { float x1[4]; })arrowColor;
- (bool)hasSize;
- (float)offset;
- (float)size;

@end
