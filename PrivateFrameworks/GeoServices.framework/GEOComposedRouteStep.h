/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOComposedRoute, GEOStep, GEOComposedRouteStep;

@interface GEOComposedRouteStep : NSObject  {
    GEOComposedRoute *_composedRoute;
    GEOStep *_geoStep;
    unsigned long long _stepIndex;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _pointRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _maneuverPointRange;
    long long _routeLegType;
}

@property GEOComposedRoute * composedRoute;
@property(getter=getPreviousStep,readonly) GEOComposedRouteStep * previousStep;
@property(getter=getNextStep,readonly) GEOComposedRouteStep * nextStep;
@property(readonly) long long routeLegType;
@property(readonly) int transportType;
@property(readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } pointRange;
@property(readonly) unsigned int startPointIndex;
@property(readonly) unsigned int endPointIndex;
@property(readonly) unsigned int pointCount;
@property(readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } maneuverPointRange;
@property(readonly) unsigned int maneuverStartPointIndex;
@property(readonly) unsigned int maneuverEndPointIndex;
@property(readonly) unsigned long long stepIndex;
@property(readonly) bool isUncertainArrival;
@property(readonly) struct { double x1; double x2; } startGeoCoordinate;
@property(readonly) struct { double x1; double x2; } endGeoCoordinate;
@property(readonly) GEOStep * geoStep;
@property(readonly) bool hasDuration;
@property(readonly) unsigned int duration;
@property(readonly) unsigned int distance;


- (bool)hasDuration;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })maneuverPointRange;
- (id)firstNameOrBranch;
- (id)getNextStep;
- (id)getPreviousStep;
- (struct { double x1; double x2; })endGeoCoordinate;
- (struct { double x1; double x2; })startGeoCoordinate;
- (bool)isUncertainArrival;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepIndex:(unsigned long long)arg3 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)composedRoute;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })pointRange;
- (unsigned int)startPointIndex;
- (void)setComposedRoute:(id)arg1;
- (unsigned int)endPointIndex;
- (long long)routeLegType;
- (id)initWithComposedRoute:(id)arg1 GEOStep:(id)arg2 routeLegType:(long long)arg3 stepIndex:(unsigned long long)arg4 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 maneuverPointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (id)geoStep;
- (unsigned int)maneuverStartPointIndex;
- (unsigned int)maneuverEndPointIndex;
- (unsigned long long)stepIndex;
- (int)transportType;
- (unsigned int)pointCount;
- (unsigned int)distance;
- (void)dealloc;
- (id)description;
- (unsigned int)duration;

@end
