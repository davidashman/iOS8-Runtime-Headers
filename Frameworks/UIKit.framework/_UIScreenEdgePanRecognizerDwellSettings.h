/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIScreenEdgePanRecognizerDwellSettings : _UISettings  {
    double _longPressFlatPermittedHorizontalMovement;
    double _longPressFlatPermittedVerticalMovement;
    double _longPressTipPermittedHorizontalMovement;
    double _longPressTipPermittedVerticalMovement;
    double _longPressPermittedHorizontalMovement;
    double _longPressPermittedVerticalMovement;
    double _longPressRequiredDuration;
}

@property double longPressFlatPermittedHorizontalMovement;
@property double longPressFlatPermittedVerticalMovement;
@property double longPressTipPermittedHorizontalMovement;
@property double longPressTipPermittedVerticalMovement;
@property double longPressPermittedHorizontalMovement;
@property double longPressPermittedVerticalMovement;
@property double longPressRequiredDuration;

+ (id)settingsControllerModule;

- (double)longPressRequiredDuration;
- (double)longPressPermittedVerticalMovement;
- (double)longPressPermittedHorizontalMovement;
- (double)longPressTipPermittedVerticalMovement;
- (double)longPressTipPermittedHorizontalMovement;
- (double)longPressFlatPermittedVerticalMovement;
- (double)longPressFlatPermittedHorizontalMovement;
- (void)setLongPressRequiredDuration:(double)arg1;
- (void)setLongPressTipPermittedVerticalMovement:(double)arg1;
- (void)setLongPressTipPermittedHorizontalMovement:(double)arg1;
- (void)setLongPressFlatPermittedVerticalMovement:(double)arg1;
- (void)setLongPressFlatPermittedHorizontalMovement:(double)arg1;
- (void)setLongPressPermittedVerticalMovement:(double)arg1;
- (void)setLongPressPermittedHorizontalMovement:(double)arg1;
- (void)setDefaultValues;

@end
