/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class asn1Token;

@interface asn1OSToken : asn1Token  {
    asn1Token *mValue;
}

@property(readonly) asn1Token * value;


- (id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char *)arg4 opaque:(bool)arg5;
- (id)value;
- (id)stringValue;
- (void)dealloc;

@end
