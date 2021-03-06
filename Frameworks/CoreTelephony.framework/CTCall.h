/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSString;

@interface CTCall : NSObject  {
    NSString *_callState;
    NSString *_callID;
}

@property(copy) NSString * callState;
@property(copy) NSString * callID;

+ (id)callForCTCallRef:(struct __CTCall { }*)arg1;

- (id)callID;
- (void)setCallID:(id)arg1;
- (void)setCallState:(id)arg1;
- (id)callState;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;

@end
