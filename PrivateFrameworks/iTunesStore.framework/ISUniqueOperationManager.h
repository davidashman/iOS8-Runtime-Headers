/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISUniqueOperationContext, NSMutableDictionary, NSString, NSLock, NSMutableArray;

@interface ISUniqueOperationManager : NSObject <ISSingleton> {
    ISUniqueOperationContext *_activeContext;
    NSMutableArray *_contexts;
    NSLock *_lock;
    NSMutableDictionary *_lockPool;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (void)uniqueOperationFinished:(id)arg1 forKey:(id)arg2;
- (void)setPredecessorIfNeeded:(id)arg1 forKey:(id)arg2;
- (id)predecessorForKey:(id)arg1 operation:(id)arg2;
- (id)_contextForOperation:(id)arg1;
- (id)_activeContext;
- (id)lockWithIdentifier:(id)arg1;
- (void)checkOutOperation:(id)arg1;
- (void)checkInOperation:(id)arg1;
- (id)init;
- (void)dealloc;

@end
