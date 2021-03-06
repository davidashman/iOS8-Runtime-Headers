/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableArray, NSString, NSDictionary, SSXPCConnection, NSObject<OS_dispatch_queue>, SSURLBagContext;

@interface SSURLBag : NSObject  {
    SSXPCConnection *_connection;
    SSURLBagContext *_context;
    NSDictionary *_dictionary;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _expirationTime;
    bool_ignoreCacheForNextLookup;
    NSMutableArray *_pendingLookups;
    NSString *_storeFrontIdentifier;
}

@property(readonly) SSURLBagContext * URLBagContext;

+ (void)setURLBag:(id)arg1 forContext:(id)arg2;
+ (id)URLBagForContext:(id)arg1;

- (id)existingBagDictionary;
- (void)dispatchSync:(id)arg1;
- (void)dispatchAsync:(id)arg1;
- (id)valueForKey:(id)arg1 error:(id*)arg2;
- (void)getTrustForURL:(id)arg1 completionBlock:(id)arg2;
- (void)_loadURLBag;
- (void)_drainPendingLookupsWithError:(id)arg1;
- (void)_loadWithCompletionBlock:(id)arg1;
- (void)loadWithCompletionBlock:(id)arg1;
- (id)URLBagContext;
- (void)loadValueForKey:(id)arg1 completionBlock:(id)arg2;
- (id)initWithURLBagContext:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (id)_connection;

@end
