/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SALocation, NSArray, NSString, NSURL;

@interface SAFmfSearch : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property(retain) SALocation * currentLocation;
@property(copy) NSArray * emailAddresses;
@property(copy) NSArray * friends;
@property(copy) NSString * proximity;
@property(retain) SALocation * requestedLocation;

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;

- (void)setRequestedLocation:(id)arg1;
- (id)requestedLocation;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)emailAddresses;
- (void)setEmailAddresses:(id)arg1;
- (void)setFriends:(id)arg1;
- (id)friends;
- (void)setProximity:(id)arg1;
- (id)proximity;
- (void)setCurrentLocation:(id)arg1;
- (id)currentLocation;
- (id)groupIdentifier;

@end