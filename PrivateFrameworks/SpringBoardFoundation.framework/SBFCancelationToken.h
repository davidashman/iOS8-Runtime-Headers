/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class NSString, NSMutableArray;

@interface SBFCancelationToken : NSObject <SBFCancelable> {
    bool_isCanceled;
    NSMutableArray *_cancelationBlocks;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)tokenWrappingCancelable:(id)arg1;
+ (id)tokenWithCancelationBlock:(id)arg1;

- (void)callCancelationBlocks:(id)arg1;
- (id)nts_cancel;
- (void)addCancelationBlock:(id)arg1;
- (bool)isCanceled;
- (id)init;
- (void)cancel;
- (void)dealloc;

@end
