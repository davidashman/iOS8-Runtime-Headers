/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, NSURL, NSDate;

@interface MKYelpDeal : NSObject <NSCopying> {
    NSString *dealID;
    NSString *title;
    NSDate *startDate;
    NSDate *endDate;
    NSURL *url;
}

@property(retain) NSString * dealID;
@property(retain) NSString * title;
@property(retain) NSDate * startDate;
@property(retain) NSDate * endDate;
@property(retain) NSURL * url;

+ (id)dealWithJSONObject:(id)arg1;

- (void)setDealID:(id)arg1;
- (id)dealID;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)endDate;
- (id)startDate;
- (id)url;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
