/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString;

@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail> {
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)autoBrightnessEnabled;
+ (void)setAutoBrightnessEnabled:(bool)arg1;
+ (bool)deviceSupportsAutoBrightness;
+ (void)endObservingExternalBrightnessChanges;
+ (void)beginObservingExternalBrightnessChanges:(id)arg1 changedAction:(id)arg2;
+ (void)endBrightnessAdjustmentTransaction;
+ (void)beginBrightnessAdjustmentTransaction;
+ (void)incrementBrightnessValue:(double)arg1;
+ (double)incrementedBrightnessValue:(double)arg1;
+ (id)preferencesURL;
+ (void)setValue:(double)arg1;
+ (double)currentValue;
+ (id)iconImage;


@end
