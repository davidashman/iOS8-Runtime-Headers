/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInputPassDescriptionResponder, AVWeakReference, AVAssetWriterInputHelper, NSObject<OS_dispatch_queue>;

@interface AVAssetWriterInputInternal : NSObject  {
    AVWeakReference *weakReference;
    AVAssetWriterInputHelper *helper;
    NSObject<OS_dispatch_queue> *helperQueue;
    boolattachedToPixelBufferAdaptor;
    boolattachedToMetadataAdaptor;
    AVWeakReference *weakReferenceToAssetWriter;
    long long numberOfAppendFailures;
    NSObject<OS_dispatch_queue> *appendFailureReadWriteQueue;
    AVAssetWriterInputPassDescriptionResponder *passDescriptionResponder;
}



@end
