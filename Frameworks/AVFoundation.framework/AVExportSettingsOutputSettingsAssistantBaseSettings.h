/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSDictionary, NSString;

@interface AVExportSettingsOutputSettingsAssistantBaseSettings : NSObject <AVOutputSettingsAssistantBaseSettingsProvider> {
    NSDictionary *_exportSettings;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) NSDictionary * baseAudioSettings;
@property(readonly) NSDictionary * baseVideoSettings;


- (id)initWithOutputSettingsPreset:(id)arg1;
- (id)baseVideoSettings;
- (id)baseAudioSettings;
- (id)init;
- (void)dealloc;

@end
