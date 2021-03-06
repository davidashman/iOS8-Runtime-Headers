/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISOperationQueue;

@interface ISURLOperationPool : NSObject  {
    ISOperationQueue *_operationQueue;
}

@property(retain) ISOperationQueue * operationQueue;


- (void)addOperation:(id)arg1 withFlags:(long long)arg2;
- (void)cancelOperation:(id)arg1;
- (id)_poolOperationForOperation:(id)arg1 flags:(long long)arg2;
- (id)init;
- (void)dealloc;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;

@end
