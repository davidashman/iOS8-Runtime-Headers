/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSHashTable;

@interface AVCaptureSessionConfiguration : NSObject  {
    long long _configurationID;
    NSArray *_inputs;
    NSArray *_outputs;
    NSHashTable *_videoPreviewLayers;
    NSArray *_connections;
}

@property(readonly) long long configurationID;
@property(readonly) NSArray * inputs;
@property(readonly) NSArray * outputs;
@property(readonly) NSHashTable * videoPreviewLayers;
@property(readonly) NSArray * connections;


- (long long)configurationID;
- (id)outputs;
- (id)inputs;
- (id)uniqueVideoPreviewLayers:(id)arg1;
- (id)uniqueConnections:(id)arg1;
- (id)uniqueOutputs:(id)arg1;
- (id)uniqueInputs:(id)arg1;
- (id)initWithConfigurationID:(long long)arg1 inputs:(id)arg2 outputs:(id)arg3 videoPreviewLayers:(id)arg4 connections:(id)arg5;
- (id)videoPreviewLayers;
- (id)connections;
- (void)dealloc;

@end
