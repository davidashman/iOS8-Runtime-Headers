/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class NSDate;

@interface CLVisit : NSObject <NSSecureCoding, NSCopying> {
    NSDate *_arrivalDate;
    NSDate *_departureDate;
    double _horizontalAccuracy;
    NSDate *_detectionDate;
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
}

@property(copy,readonly) NSDate * arrivalDate;
@property(copy,readonly) NSDate * departureDate;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) double horizontalAccuracy;
@property(readonly) bool hasArrivalDate;
@property(readonly) bool hasDepartureDate;
@property(copy,readonly) NSDate * detectionDate;

+ (bool)supportsSecureCoding;

- (id)arrivalDate;
- (id)departureDate;
- (bool)hasDepartureDate;
- (bool)hasArrivalDate;
- (id)detectionDate;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 horizontalAccuracy:(double)arg2 arrivalDate:(id)arg3 departureDate:(id)arg4 detectionDate:(id)arg5;
- (double)horizontalAccuracy;
- (struct { double x1; double x2; })coordinate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
