/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSObject<OS_dispatch_queue>, NSString;

@interface GEOCacheManagerLocalProxy : NSObject <GEOCacheManaging> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (long long)invalidationStateForPlace:(id)arg1;
- (void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(id)arg2;
- (void)versionsForDomains:(id)arg1 handler:(id)arg2;
- (bool)_isKey:(id)arg1 subsetOf:(id)arg2;
- (bool)_invalidationDataHasExpiredByVersion:(unsigned int)arg1 domains:(id)arg2;
- (long long)_invalidationStateForTTL:(double)arg1 timestamp:(double)arg2 version:(unsigned int)arg3 versionDomains:(id)arg4;
- (long long)_invalidationDataHasExpired:(id)arg1;
- (id)init;
- (void)dealloc;

@end
