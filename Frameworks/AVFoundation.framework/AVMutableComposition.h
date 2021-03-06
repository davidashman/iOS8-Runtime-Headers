/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMutableCompositionInternal, NSArray;

@interface AVMutableComposition : AVComposition  {
    AVMutableCompositionInternal *_mutablePriv;
}

@property(readonly) NSArray * tracks;
@property struct CGSize { double x1; double x2; } naturalSize;

+ (id)composition;

- (id)mutableTrackCompatibleWithTrack:(id)arg1;
- (void)removeTrack:(id)arg1;
- (id)addMutableTrackWithMediaType:(id)arg1 preferredTrackID:(int)arg2;
- (void)scaleTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 toDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)removeTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)insertEmptyTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)insertTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 ofAsset:(id)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 error:(id*)arg4;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_notifyAllTracksThatSegmentsDidChange;
- (void)_notifyAllTracksThatSegmentsWillChange;
- (id)_newTrackForIndex:(long long)arg1;
- (id)_initWithComposition:(id)arg1;
- (id)tracks;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
