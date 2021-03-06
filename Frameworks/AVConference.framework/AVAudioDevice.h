/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSString, NSNumber;

@interface AVAudioDevice : NSObject  {
    NSString *_deviceName;
    NSNumber *_deviceID;
    bool_inputAvailable;
    bool_outputAvailable;
    bool_isLineIn;
}

@property(readonly) NSString * deviceName;
@property(readonly) NSNumber * deviceID;
@property(readonly) bool inputAvailable;
@property(readonly) bool outputAvailable;


- (bool)outputAvailable;
- (bool)inputAvailable;
- (bool)isStreamAvailableForScope:(unsigned int)arg1;
- (bool)isValidInputDevice;
- (bool)isValidDevice;
- (void)createNameForScope:(unsigned int)arg1;
- (id)initWithDeviceID:(id)arg1;
- (bool)isSomethingConnectedToJack;
- (void)createName;
- (id)deviceID;
- (id)deviceName;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;

@end
