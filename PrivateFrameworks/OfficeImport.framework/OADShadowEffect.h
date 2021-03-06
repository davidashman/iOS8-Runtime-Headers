/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColor;

@interface OADShadowEffect : OADEffect  {
    OADColor *mColor;
    float mBlurRadius;
    float mDistance;
    float mAngle;
}


- (id)initWithShadowEffect:(id)arg1 type:(int)arg2;
- (void)setStyleColor:(id)arg1;
- (id)color;
- (id)initWithType:(int)arg1;
- (float)angle;
- (float)distance;
- (void)setAngle:(float)arg1;
- (void)setDistance:(float)arg1;
- (void)setColor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (void)setBlurRadius:(float)arg1;
- (float)blurRadius;

@end
