/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class CLLocation, NSDate;

@interface EKTravelAdvisorTraceLocation : NSObject <NSSecureCoding> {
    NSDate *_date;
    CLLocation *_location;
}

@property(readonly) NSDate * date;
@property(readonly) CLLocation * location;

+ (bool)supportsSecureCoding;

- (id)initWithDate:(id)arg1 location:(id)arg2;
- (id)location;
- (id)date;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
