/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/GameController.framework/GameController
 */

@class GCControllerButtonInput, GCControllerAxisInput;

@interface GCControllerDirectionPad : GCControllerElement  {
}

@property(copy) id valueChangedHandler;
@property(readonly) GCControllerAxisInput * xAxis;
@property(readonly) GCControllerAxisInput * yAxis;
@property(readonly) GCControllerButtonInput * up;
@property(readonly) GCControllerButtonInput * down;
@property(readonly) GCControllerButtonInput * left;
@property(readonly) GCControllerButtonInput * right;


- (id)yAxis;
- (id)xAxis;
- (id)initWithFlippedY:(bool)arg1 digital:(bool)arg2;
- (void)setValueChangedHandler:(id)arg1;
- (id)valueChangedHandler;
- (bool)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (id)up;
- (id)down;
- (id)left;
- (id)right;
- (id)description;

@end
