/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKOOBMessage : NSObject  {
    unsigned short _type;
}

@property(readonly) unsigned short type;


- (id)initWithMessageType:(unsigned short)arg1;
- (bool)_checkSize:(unsigned long long)arg1;
- (bool)_checkType:(unsigned short)arg1;
- (id)data;
- (unsigned short)type;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;

@end
