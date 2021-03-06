/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, NSURL, SSLookupRequest;

@interface MKAppLaunchController : NSObject  {
    SSLookupRequest *_request;
    NSString *_webURLString;
    NSURL *webURL;
}

@property(retain) SSLookupRequest * storeRequest;
@property(retain) NSURL * webURL;

+ (void)launchAttributionURLs:(id)arg1 withAttributionApps:(id)arg2;
+ (id)sharedController;

- (void)lookUpAppStoreURLForBundle:(id)arg1;
- (void)setWebURL:(id)arg1;
- (id)webURL;
- (void)setStoreRequest:(id)arg1;
- (id)storeRequest;
- (void)dealloc;
- (void).cxx_destruct;

@end
