/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class NSString, NSArray, AVAudioSessionDataSourceDescription;

@interface AVAudioSessionPortDescription : NSObject  {
    void *_impl;
}

@property(readonly) NSString * portType;
@property(readonly) NSString * portName;
@property(readonly) NSString * UID;
@property(readonly) NSArray * channels;
@property(readonly) NSArray * dataSources;
@property(readonly) AVAudioSessionDataSourceDescription * selectedDataSource;
@property(readonly) AVAudioSessionDataSourceDescription * preferredDataSource;

+ (id)privateCreateOrConfigureArray:(id)arg1 withRawPortArray:(id)arg2;
+ (bool)privateMatchesInputs:(id)arg1 toRawInputs:(id)arg2;

- (id)preferredDataSource;
- (bool)isHeadphones;
- (id)initWithRawPortDescription:(id)arg1;
- (void)configureChannelsAndDataSources:(id)arg1;
- (id)privateGetID;
- (bool)privateMatchesRawDescription:(id)arg1;
- (bool)isEqualToPort:(id)arg1 compareStrict:(bool)arg2;
- (struct PortDescriptionImpl { id x1; id x2; id x3; id x4; boolx5; id x6; id x7; id x8; id x9; }*)privateGetImplementation;
- (id)UID;
- (id)portType;
- (id)selectedDataSource;
- (id)dataSources;
- (bool)setPreferredDataSource:(id)arg1 error:(id*)arg2;
- (id)channels;
- (id)portName;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;

@end
