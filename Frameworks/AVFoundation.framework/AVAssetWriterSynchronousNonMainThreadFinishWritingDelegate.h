/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, NSObject<OS_dispatch_semaphore>, AVWeakReference;

@interface AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate : NSObject <AVAssetWriterFigAssetWriterNotificationHandlerDelegate, AVAssetWriterFinishWritingHelperDelegate> {
    NSObject<OS_dispatch_semaphore> *_finishedWritingNotificationSemaphore;
    AVWeakReference *_weakReferenceToHelper;
    AVWeakReference *_weakReferenceToSelf;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)finishWritingHelperDidCancelFinishWriting:(id)arg1;
- (void)finishWritingHelperDidFail:(id)arg1;
- (void)finishWritingHelper:(id)arg1 didInitiateFinishWritingForFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg2;
- (bool)shouldHelperPrepareInputs;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(bool)arg1 error:(id)arg2;
- (id)init;
- (void)finalize;
- (void)dealloc;

@end
