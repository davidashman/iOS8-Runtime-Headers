/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSMutableDictionary, NSObject<OS_dispatch_queue>, CLLocation;

@interface SSVLoadNearbyAppsOperation : NSOperation  {
    NSString *_baseURLString;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CLLocation *_location;
    NSMutableDictionary *_parameters;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _responseBlock;

    NSString *_storeFrontSuffix;
    NSString *_userAgent;
}

@property(readonly) CLLocation * location;
@property(copy) NSString * pointOfInterestIdentifier;
@property(copy) NSString * pointOfInterestProviderIdentifier;
@property(copy) NSString * pointOfInterestProviderURL;
@property(copy) id responseBlock;
@property(copy) NSString * storeFrontSuffix;
@property(copy) NSString * userAgent;


- (void)setPointOfInterestProviderURL:(id)arg1;
- (void)setPointOfInterestProviderIdentifier:(id)arg1;
- (void)setPointOfInterestIdentifier:(id)arg1;
- (id)pointOfInterestProviderURL;
- (id)pointOfInterestProviderIdentifier;
- (id)pointOfInterestIdentifier;
- (id)initWithBaseURL:(id)arg1 location:(id)arg2;
- (id)_lookupWithRequest:(id)arg1 error:(id*)arg2;
- (id)userAgent;
- (id)_storeFrontSuffix;
- (void)setStoreFrontSuffix:(id)arg1;
- (id)storeFrontSuffix;
- (void)setResponseBlock:(id)arg1;
- (id)responseBlock;
- (void)setUserAgent:(id)arg1;
- (id)location;
- (void)main;
- (void).cxx_destruct;

@end
