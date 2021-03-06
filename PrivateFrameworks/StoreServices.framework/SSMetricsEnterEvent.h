/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString;

@interface SSMetricsEnterEvent : SSMetricsBaseEvent  {
}

@property(retain) NSString * enterType;
@property(retain) NSString * referringAppName;
@property(retain) NSString * referringURL;


- (void)setEnterTypeWithLaunchReason:(long long)arg1;
- (id)enterType;
- (void)setEnterType:(id)arg1;
- (id)referringURL;
- (id)referringAppName;
- (void)setReferringURL:(id)arg1;
- (void)setReferringAppName:(id)arg1;
- (id)init;
- (id)description;

@end
