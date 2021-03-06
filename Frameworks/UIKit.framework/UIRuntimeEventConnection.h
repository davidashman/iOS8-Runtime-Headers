/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRuntimeEventConnection : UIRuntimeConnection  {
    unsigned long long eventMask;
}

@property unsigned long long eventMask;
@property(readonly) SEL action;
@property(readonly) id target;


- (void)connect;
- (SEL)action;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)target;
- (void)setEventMask:(unsigned long long)arg1;
- (unsigned long long)eventMask;
- (void)connectForSimulator;

@end
