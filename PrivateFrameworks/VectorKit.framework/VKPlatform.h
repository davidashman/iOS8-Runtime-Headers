/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPlatform : NSObject  {
    unsigned long long _memSize;
    int _numCPUs;
    bool_proceduralRoadAlpha;
    bool_useCheapTrafficShader;
    bool_shouldUseTrafficAlphaHack;
    bool_supportsBuildingStrokes;
    bool_supports3DBuildingStrokes;
}

@property(readonly) bool roadsWithSimpleLineMeshesAvailable;
@property(readonly) bool shouldUseTrafficAlphaHack;
@property(readonly) unsigned long long tileMaximumLimit;
@property(readonly) unsigned int tilePrefetchNumberOfScreens;
@property(readonly) bool supportsHiResRTT;
@property(readonly) bool isPad;
@property(readonly) bool shouldDrawWhenReady;
@property(readonly) bool shouldStyleLabelsInParallel;
@property(readonly) bool shouldPregenerateLabelGlyphs;
@property(readonly) bool canMakeSharingThumbnails;
@property(readonly) double mainScreenScale;
@property(readonly) double mainScreenPPI;
@property(readonly) double maxContentScaleForRendering;
@property(readonly) bool supportsBuildingShadows;
@property(readonly) bool supportsBuildingStrokes;
@property(readonly) bool supports3DBuildingStrokes;
@property(readonly) bool supportsHiResBuildings;
@property(readonly) bool proceduralRoadAlpha;
@property(readonly) bool useCheapTrafficShader;
@property(readonly) unsigned long long memorySize;
@property(readonly) unsigned int tileDecodeQueueWidth;

+ (id)sharedPlatform;

- (bool)shouldUseTrafficAlphaHack;
- (bool)useCheapTrafficShader;
- (bool)proceduralRoadAlpha;
- (unsigned long long)memorySize;
- (bool)shouldStyleLabelsInParallel;
- (bool)supportsHiResBuildings;
- (double)maxContentScaleForRendering;
- (bool)shouldDrawWhenReady;
- (bool)canMakeSharingThumbnails;
- (unsigned int)tilePrefetchNumberOfScreens;
- (unsigned long long)tileMaximumLimit;
- (unsigned long long)tileReserveLimit:(bool)arg1;
- (bool)roadsWithSimpleLineMeshesAvailable;
- (unsigned long long)_calculateMemSize;
- (void)_determineHardware;
- (bool)shouldPregenerateLabelGlyphs;
- (unsigned int)tileDecodeQueueWidth;
- (bool)supportsBuildingShadows;
- (bool)supports3DBuildingStrokes;
- (bool)supportsBuildingStrokes;
- (bool)isPad;
- (bool)supportsHiResRTT;
- (double)mainScreenPPI;
- (double)mainScreenScale;
- (id)init;
- (void)dealloc;

@end
