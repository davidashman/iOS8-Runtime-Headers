/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSLock, NSMutableSet, GEOProxyClient;

@interface GEOProxyClientRegistry : NSObject  {
    NSLock *_lock;
    GEOProxyClient *_currentComposite;
    NSMutableSet *_currentSet;
}

+ (id)sharedRegistry;

- (id)compositeClient;
- (void)enableRegistry;
- (void)_updateComposite;
- (void)dealloc;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;

@end
