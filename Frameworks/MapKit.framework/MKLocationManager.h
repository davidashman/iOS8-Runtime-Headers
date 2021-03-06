/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <MKLocationRecorder>, GEOLocationShifter, CLLocation, NSBundle, <MKLocationProvider>, _MKWiFiObserver, NSMutableArray, GEOLocation, CLHeading, NSString, NSHashTable, NSTimer, NSError;

@interface MKLocationManager : NSObject <_MKWiFiObserverDelegate, MKLocationProviderDelegate> {
    <MKLocationProvider> *_locationProvider;
    NSHashTable *_locationObservers;
    NSHashTable *_locationListeners;
    NSHashTable *_headingObservers;
    CLLocation *_lastLocation;
    double _lastLocationUpdateTime;
    bool_isLastLocationStale;
    bool_lastLocationPushed;
    bool_trackingLocation;
    bool_trackingHeading;
    <MKLocationRecorder> *_locationRecorder;
    double _applicationResumeTime;
    double _applicationSuspendTime;
    double _headingUpdateTime;
    double _locationAccuracyUpdateTime;
    bool_allowUpdateCoalescing;
    NSTimer *_coalesceTimer;
    double _lastLocationReportTime;
    GEOLocationShifter *_locationShifter;
    CLHeading *_throttledHeading;
    CLHeading *_heading;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _networkActivity;

    bool_enabled;
    bool_useCourseForHeading;
    bool_logStartStopLocationUpdates;
    double _lastVehicleHeading;
    double _lastVehicleSpeed;
    double _lastVehicleHeadingUpdateTime;
    double _lastVehicleSpeedUpdateTime;
    int _consecutiveOutOfCourseCount;
    double _navCourse;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _locationCorrector;

    double _minimumLocationUpdateInterval;
    bool_continuedAfterBecomingInactive;
    bool_suspended;
    NSMutableArray *_recentLocationUpdateIntervals;
    _MKWiFiObserver *_wifiObserver;
    bool_hasCustomDesiredAccuracy;
    bool_continuesWhileInactive;
    NSError *_locationError;
}

@property(retain) <MKLocationProvider> * locationProvider;
@property(copy) id locationCorrector;
@property bool logStartStopLocationUpdates;
@property(getter=isEnabled) bool enabled;
@property(getter=isLocationServicesAuthorizationNeeded,readonly) bool locationServicesAuthorizationNeeded;
@property(readonly) bool isLocationServicesAvailable;
@property(readonly) bool isLocationServicesPossiblyAvailable;
@property(readonly) bool isLocationServicesEnabled;
@property(readonly) bool isLocationServicesApproved;
@property(readonly) bool isLocationServicesDenied;
@property(readonly) bool isLocationServicesRestricted;
@property(readonly) bool isHeadingServicesAvailable;
@property(readonly) bool isAirplaneModeBlockingLocation;
@property(readonly) bool isWiFiEnabled;
@property(getter=isLocationServicesPreferencesDialogEnabled) bool locationServicesPreferencesDialogEnabled;
@property(readonly) double headingUpdateTimeInterval;
@property(readonly) GEOLocation * currentLocation;
@property(readonly) GEOLocation * gridSnappedCurrentLocation;
@property(readonly) GEOLocation * courseCorrectedLocation;
@property long long headingOrientation;
@property(copy) id authorizationRequestBlock;
@property(readonly) bool locationShiftEnabled;
@property(readonly) bool hasLocation;
@property(readonly) CLLocation * lastLocation;
@property(readonly) bool isLastLocationStale;
@property(readonly) NSError * locationError;
@property double desiredAccuracy;
@property double distanceFilter;
@property bool matchInfoEnabled;
@property long long activityType;
@property(readonly) double expectedGpsUpdateInterval;
@property(retain) NSBundle * effectiveBundle;
@property(copy) NSString * effectiveBundleIdentifier;
@property bool allowUpdateCoalescing;
@property bool useCourseForHeading;
@property(readonly) CLHeading * heading;
@property(retain) CLHeading * throttledHeading;
@property(readonly) double currentVehicleHeading;
@property(readonly) double currentVehicleSpeed;
@property(readonly) double vehicleHeadingOrCourse;
@property(copy) id networkActivity;
@property(retain) <MKLocationRecorder> * locationRecorder;
@property(readonly) double navigationCourse;
@property double minimumLocationUpdateInterval;
@property bool continuesWhileInactive;
@property(getter=wasLastLocationPushed,readonly) bool lastLocationPushed;
@property(readonly) int lastLocationSource;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)setCanMonitorWiFiStatus:(bool)arg1;
+ (id)sharedLocationManager;

- (void)setMinimumLocationUpdateInterval:(double)arg1;
- (double)minimumLocationUpdateInterval;
- (void)setLogStartStopLocationUpdates:(bool)arg1;
- (bool)logStartStopLocationUpdates;
- (bool)allowUpdateCoalescing;
- (bool)wasLastLocationPushed;
- (id)locationCorrector;
- (double)navigationCourse;
- (void)setUseCourseForHeading:(bool)arg1;
- (void)setNetworkActivity:(id)arg1;
- (id)networkActivity;
- (id)locationError;
- (void)stopVehicleHeadingUpdate;
- (void)startVehicleHeadingUpdate;
- (void)stopVehicleSpeedUpdate;
- (void)startVehicleSpeedUpdate;
- (id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(id)arg2;
- (id)singleLocationUpdateWithHandler:(id)arg1;
- (void)listenForLocationUpdates:(id)arg1;
- (void)pushLocation:(id)arg1;
- (void)setAllowUpdateCoalescing:(bool)arg1;
- (void)_reportHeadingFailureWithError:(id)arg1;
- (void)setContinuesWhileInactive:(bool)arg1;
- (id)throttledHeading;
- (double)vehicleHeadingOrCourse;
- (id)courseCorrectedLocation;
- (id)gridSnappedCurrentLocation;
- (void)_airplaneModeChanged;
- (void)_refreshAirplaneMode;
- (bool)isLocationServicesAuthorizationNeeded;
- (void)setLocationCorrector:(id)arg1;
- (void)wiFiObserverDidChangeEnabled:(id)arg1;
- (void)_setTrackingHeading:(bool)arg1;
- (void)_startLocationUpdateWithObserver:(id)arg1 desiredAccuracy:(double)arg2;
- (bool)isLocationServicesPossiblyAvailable:(id*)arg1;
- (void)_setTrackingLocation:(bool)arg1;
- (void)_reportLocationFailureWithError:(id)arg1;
- (id)locationRecorder;
- (void)dampenGPSLocationAccuracy:(id*)arg1 oldLocationSource:(int)arg2;
- (bool)shouldStopCoalescingLocation:(id)arg1;
- (void)_startCoalescingUpdates:(int)arg1;
- (bool)shouldStartCoalescingLocation:(id)arg1;
- (bool)_shouldAllowLocationUpdateInterval:(double)arg1;
- (void)_locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
- (void)_reportLocationSuccess;
- (void)_stopCoalescingUpdates;
- (void)setCoalesceTimer:(id)arg1;
- (void)reportCoalescedUpdated;
- (int)lastLocationSource;
- (bool)shouldCoalesceUpdates;
- (bool)isLocationServicesEnabled;
- (bool)isLocationServicesPossiblyAvailable;
- (void)_reportLocationReset;
- (void)_reportLocationStatus:(SEL)arg1;
- (bool)continuesWhileInactive;
- (void)resetAfterResumeIfNecessary;
- (bool)_isTimeToResetOnResume;
- (void)_reportHeadingSuccess;
- (bool)isLastLocationStale;
- (void)_syncLocationProviderWithTracking;
- (bool)isLocationServicesAvailable;
- (bool)isLocationServicesRestricted;
- (bool)isLocationServicesDenied;
- (bool)isAirplaneModeBlockingLocation;
- (bool)isLocationServicesApproved;
- (id)locationProvider;
- (void)setLocationRecorder:(id)arg1;
- (void)_useCoreLocationProvider;
- (void)setLocationProvider:(id)arg1;
- (void)setAuthorizationRequestBlock:(id)arg1;
- (id)authorizationRequestBlock;
- (bool)matchInfoEnabled;
- (void)setEffectiveBundleIdentifier:(id)arg1;
- (id)effectiveBundleIdentifier;
- (void)setEffectiveBundle:(id)arg1;
- (void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (bool)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)dismissHeadingCalibrationDisplay;
- (long long)headingOrientation;
- (void)setMatchInfoEnabled:(bool)arg1;
- (bool)isLocationServicesPreferencesDialogEnabled;
- (double)desiredAccuracy;
- (void)setLocationServicesPreferencesDialogEnabled:(bool)arg1;
- (void)setThrottledHeading:(id)arg1;
- (double)headingUpdateTimeInterval;
- (void)startHeadingUpdateWithObserver:(id)arg1;
- (double)expectedGpsUpdateInterval;
- (double)currentVehicleSpeed;
- (double)currentVehicleHeading;
- (bool)useCourseForHeading;
- (void)startLocationUpdateWithObserver:(id)arg1;
- (bool)isHeadingServicesAvailable;
- (void)setHeadingOrientation:(long long)arg1;
- (void)stopLocationUpdateWithObserver:(id)arg1;
- (void)stopHeadingUpdateWithObserver:(id)arg1;
- (double)distanceFilter;
- (void)setDistanceFilter:(double)arg1;
- (id)lastLocation;
- (void)setLastLocation:(id)arg1;
- (bool)locationShiftEnabled;
- (bool)hasLocation;
- (void)setHeading:(id)arg1;
- (id)currentLocation;
- (bool)isWiFiEnabled;
- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (id)heading;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setActivityType:(long long)arg1;
- (long long)activityType;
- (id)init;
- (void)_suspend;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (id)effectiveBundle;

@end
