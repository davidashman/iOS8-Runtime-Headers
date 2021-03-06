/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;

@interface UIStatusBarBatteryItemView : UIStatusBarItemView  {
    int _capacity;
    int _state;
    UIView *_accessoryView;
}


- (void)dealloc;
- (double)_batteryYOffsetWithBackground:(id)arg1;
- (id)_accessoryImage;
- (bool)_needsAccessoryImage;
- (void)_updateAccessoryImage;
- (double)extraRightPadding;
- (double)legibilityStrength;
- (id)contentsImage;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end
