/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVExternalDeviceHIDInternal, NSString;

@interface AVExternalDeviceHID : NSObject  {
    AVExternalDeviceHIDInternal *_externalDeviceHID;
}

@property(readonly) NSString * UUID;
@property(readonly) NSString * screenID;
@property long long inputMode;


- (id)initWithExternalDeviceAndHIDDictionary:(id)arg1 hidDictionary:(id)arg2;
- (id)_figEndpointHIDInputMode;
- (id)_externalDevice;
- (id)screenID;
- (id)UUID;
- (long long)inputMode;
- (void)finalize;
- (void)dealloc;
- (void)setInputMode:(long long)arg1;

@end
