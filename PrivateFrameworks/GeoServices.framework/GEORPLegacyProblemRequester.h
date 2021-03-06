/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSLock, NSMapTable;

@interface GEORPLegacyProblemRequester : NSObject  {
    NSMapTable *_pendingRequests;
    NSLock *_pendingRequestsLock;
}

+ (id)sharedRequester;

- (void)startNotificationAvailabilityRequest:(id)arg1 finished:(id)arg2 networkActivity:(id)arg3 error:(id)arg4;
- (void)startStatusRequest:(id)arg1 finished:(id)arg2 networkActivity:(id)arg3 error:(id)arg4;
- (void)startSubmissionRequest:(id)arg1 finished:(id)arg2 networkActivity:(id)arg3 error:(id)arg4;
- (void)cancelRequest:(id)arg1;
- (id)init;
- (void)dealloc;

@end
