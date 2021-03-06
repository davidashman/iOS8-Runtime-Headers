/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInputFigAssetWriterEndPassOperation, NSString, AVWeakReference, AVMediaFileType, NSObject<OS_dispatch_queue>;

@interface AVFigAssetWriterTrack : NSObject  {
    AVWeakReference *_weakReference;
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    int _trackID;
    NSString *_mediaType;
    AVMediaFileType *_mediaFileType;
    NSObject<OS_dispatch_queue> *_aboveHighWaterLevelQueue;
    bool_aboveHighWaterLevel;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _sampleBufferCoalescingInterval;
    AVAssetWriterInputFigAssetWriterEndPassOperation *_endPassOperation;
}

@property(readonly) struct OpaqueFigAssetWriter { }* figAssetWriter;
@property(readonly) NSString * mediaType;
@property(readonly) AVMediaFileType * mediaFileType;
@property(readonly) int trackID;
@property(readonly) struct __CVPixelBufferPool { }* pixelBufferPool;
@property(readonly) bool encoderSupportsMultiPass;
@property(getter=isAboveHighWaterLevel,readonly) bool aboveHighWaterLevel;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } sampleBufferCoalescingInterval;

+ (id)assetWriterTrackWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(bool)arg6 error:(id*)arg7;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })sampleBufferCoalescingInterval;
- (void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)arg1;
- (struct OpaqueFigAssetWriter { }*)figAssetWriter;
- (void)_refreshAboveHighWaterLevel;
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 multiPass:(bool)arg3 error:(id*)arg4;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(bool)arg6 error:(id*)arg7;
- (void)endPassWithCompletionHandler:(id)arg1;
- (bool)markEndOfDataReturningError:(id*)arg1;
- (bool)addPixelBuffer:(struct __CVBuffer { }*)arg1 atPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 error:(id*)arg3;
- (bool)addSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (bool)beginPassReturningError:(id*)arg1;
- (bool)isAboveHighWaterLevel;
- (bool)encoderSupportsMultiPass;
- (void)setPreferredChunkSize:(long long)arg1;
- (void)setPreferredChunkAlignment:(long long)arg1;
- (void)setPreferredChunkDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTrackVolume:(float)arg1;
- (void)setFigDimensions:(id)arg1;
- (void)setFigTrackMatrix:(id)arg1;
- (void)setExcludeFromAutoSelection:(bool)arg1;
- (void)setFigMetadata:(id)arg1;
- (void)prepareToEndSession;
- (void)setSampleBufferCoalescingInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setMarksOutputTrackAsEnabled:(bool)arg1;
- (id)mediaFileType;
- (void)setAlternateGroupID:(short)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (int)trackID;
- (id)mediaType;
- (void)setLayer:(long long)arg1;
- (id)init;
- (void)finalize;
- (void)dealloc;

@end
