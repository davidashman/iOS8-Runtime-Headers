/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString;

@interface EKTravelPredictionCar : EKTravelPrediction <NSSecureCoding> {
    bool_hasTrafficIncidentOnRoute;
    int _routeIncidentType;
    int _routeIncidentSignificance;
    unsigned long long _currentTrafficDensity;
    unsigned long long _historicTrafficDensity;
    NSString *_routeIncidentStreetName;
    unsigned long long _travelState;
    double _travelStateScore;
}

@property(readonly) unsigned long long currentTrafficDensity;
@property(readonly) unsigned long long historicTrafficDensity;
@property(readonly) bool hasTrafficIncidentOnRoute;
@property(readonly) int routeIncidentType;
@property(readonly) int routeIncidentSignificance;
@property(readonly) NSString * routeIncidentStreetName;
@property(readonly) unsigned long long travelState;
@property(readonly) double travelStateScore;


- (int)routeIncidentSignificance;
- (id)advice;
- (id)initWithDepartureDate:(id)arg1 arrivalDate:(id)arg2 startingLocation:(id)arg3 predictionDate:(id)arg4 hypothesizer:(id)arg5;
- (void)setTravelState:(unsigned long long)arg1 withConfidence:(double)arg2;
- (void)addTrafficIncidentOfType:(int)arg1 withSignificance:(int)arg2 onStreet:(id)arg3;
- (void)setTrafficConditionsCurrent:(unsigned long long)arg1 historic:(unsigned long long)arg2;
- (double)travelStateScore;
- (id)routeIncidentStreetName;
- (int)routeIncidentType;
- (bool)hasTrafficIncidentOnRoute;
- (unsigned long long)historicTrafficDensity;
- (unsigned long long)currentTrafficDensity;
- (unsigned long long)travelState;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
