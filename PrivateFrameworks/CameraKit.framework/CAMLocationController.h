/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class NSString, CLLocationManager, CLLocation, NSMutableArray;

@interface CAMLocationController : NSObject <CLLocationManagerDelegate> {
    bool_enabled;
    bool_headingEnabled;
    bool__monitoringLocation;
    CLLocation *_currentLocation;
    CLLocationManager *__locationManager;
    NSMutableArray *__assetsWaitingForLocation;
}

@property(getter=isEnabled) bool enabled;
@property(getter=isHeadingEnabled) bool headingEnabled;
@property(readonly) CLLocation * currentLocation;
@property(getter=_isMonitoringLocation,readonly) bool _monitoringLocation;
@property(readonly) CLLocationManager * _locationManager;
@property(readonly) NSMutableArray * _assetsWaitingForLocation;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)_sharedGPSDatestampFormatter;
+ (id)_sharedGPSTimestampFormatter;
+ (void)setUsesEffectiveBundleIdentifier:(bool)arg1;
+ (bool)usesEffectiveBundleIdentifier;
+ (id)sharedInstance;

- (id)_locationManager;
- (void)addLocationToAssetWhenAvailable:(id)arg1;
- (bool)addLocationToMetadata:(id)arg1 withOrientation:(long long)arg2 device:(long long)arg3;
- (void)setHeadingEnabled:(bool)arg1;
- (void)_updateAssetsWaitingOnLocation;
- (id)_currentLocationMetadataWithDeviceOrientation:(long long)arg1 forDevice:(long long)arg2;
- (bool)_updateLocationMetadataForAsset:(id)arg1;
- (id)_assetsWaitingForLocation;
- (void)_startMonitoringLocationUpdates;
- (bool)isHeadingEnabled;
- (void)_authorizeOrStartLocationManager;
- (bool)_isMonitoringLocation;
- (void)_updateLocationMonitoring;
- (void)_stopMonitoringLocationUpdates;
- (void)_applicationStateChanged:(id)arg1;
- (id)currentLocation;
- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
