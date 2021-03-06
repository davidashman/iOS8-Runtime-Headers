/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class NSNumber, NSString, NSArray;

@interface AVAudioSessionDataSourceDescription : NSObject  {
    void *_impl;
}

@property(readonly) NSNumber * dataSourceID;
@property(readonly) NSString * dataSourceName;
@property(readonly) NSString * location;
@property(readonly) NSString * orientation;
@property(readonly) NSArray * supportedPolarPatterns;
@property(readonly) NSString * selectedPolarPattern;
@property(readonly) NSString * preferredPolarPattern;

+ (id)privateCreateOrConfigureArray:(id)arg1 withRawSourceArray:(id)arg2 portID:(id)arg3;

- (bool)setPreferredPolarPattern:(id)arg1 error:(id*)arg2;
- (id)supportedPolarPatterns;
- (id)preferredPolarPattern;
- (id)initWithRawSourceDescription:(id)arg1 andOwningPortID:(id)arg2;
- (void)configurePolarPatterns:(id)arg1;
- (id)selectedPolarPattern;
- (id)orientation;
- (id)privateGetOwningPortID;
- (bool)isEqualToDataSource:(id)arg1;
- (bool)privateMatchesRawDescription:(id)arg1;
- (id)dataSourceName;
- (id)dataSourceID;
- (struct DataSourceDescriptionImpl { id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; }*)privateGetImplementation;
- (id)location;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;

@end
