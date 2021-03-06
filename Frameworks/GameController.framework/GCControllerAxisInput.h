/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/GameController.framework/GameController
 */

@class GCControllerButtonInput;

@interface GCControllerAxisInput : GCControllerElement  {
}

@property(copy) id valueChangedHandler;
@property(readonly) float value;
@property(readonly) GCControllerButtonInput * positive;
@property(readonly) GCControllerButtonInput * negative;
@property(getter=isFlipped,readonly) bool flipped;
@property(getter=isDigital,readonly) bool digital;


- (id)negative;
- (id)positive;
- (bool)isDigital;
- (void)setValueChangedHandler:(id)arg1;
- (id)valueChangedHandler;
- (bool)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (bool)isAnalog;
- (bool)_setValue:(float)arg1;
- (float)value;
- (bool)isFlipped;
- (id)description;

@end
