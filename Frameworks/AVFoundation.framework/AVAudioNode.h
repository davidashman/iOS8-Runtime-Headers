/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class AVAudioEngine, NSString, AVAudioTime;

@interface AVAudioNode : NSObject <AVAudioMixing> {
    void *_impl;
}

@property(readonly) AVAudioEngine * engine;
@property(readonly) unsigned long long numberOfInputs;
@property(readonly) unsigned long long numberOfOutputs;
@property(readonly) AVAudioTime * lastRenderTime;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property float volume;


- (id)clock;
- (void)removeTapOnBus:(unsigned long long)arg1;
- (void)installTapOnBus:(unsigned long long)arg1 bufferSize:(unsigned int)arg2 format:(id)arg3 block:(id)arg4;
- (void)setNumberOfOutputs:(unsigned int)arg1;
- (void)setNumberOfInputs:(unsigned int)arg1;
- (unsigned long long)numberOfOutputs;
- (unsigned long long)numberOfInputs;
- (id)lastRenderTime;
- (id)nameForOutputBus:(unsigned long long)arg1;
- (id)nameForInputBus:(unsigned long long)arg1;
- (bool)setOutputFormat:(id)arg1 forBus:(unsigned long long)arg2;
- (id)engine;
- (id)inputFormatForBus:(unsigned long long)arg1;
- (id)outputFormatForBus:(unsigned long long)arg1;
- (void)didDetachFromEngine:(id)arg1;
- (struct OpaqueAudioComponentInstance { }*)audioUnit;
- (struct AVAudioNodeImplBase { int (**x1)(); struct AVAudioEngineImpl {} *x2; struct AVAudioNodeTap {} *x3; id x4; struct vector<bool, std::__1::allocator<bool> > { unsigned long long *x_5_1_1; unsigned long long x_5_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long x_3_2_1; } x_5_1_3; } x5; boolx6; struct AVAudioMixingImpl {} *x7; }*)impl;
- (void)setOcclusion:(float)arg1;
- (float)occlusion;
- (void)setObstruction:(float)arg1;
- (float)obstruction;
- (void)setReverbBlend:(float)arg1;
- (float)reverbBlend;
- (void)setRate:(float)arg1;
- (float)rate;
- (void)setRenderingAlgorithm:(long long)arg1;
- (long long)renderingAlgorithm;
- (void)setPan:(float)arg1;
- (float)pan;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)didAttachToEngine:(id)arg1;
- (id)initWithImpl:(struct AVAudioNodeImplBase { int (**x1)(); struct AVAudioEngineImpl {} *x2; struct AVAudioNodeTap {} *x3; id x4; struct vector<bool, std::__1::allocator<bool> > { unsigned long long *x_5_1_1; unsigned long long x_5_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long x_3_2_1; } x_5_1_3; } x5; boolx6; struct AVAudioMixingImpl {} *x7; }*)arg1;
- (void)setPosition:(struct AVAudio3DPoint { float x1; float x2; float x3; })arg1;
- (id)init;
- (void)dealloc;
- (void)reset;
- (struct AVAudio3DPoint { float x1; float x2; float x3; })position;

@end
