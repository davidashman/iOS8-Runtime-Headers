/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionPerformSelector : SCNAction  {
    SEL _selector;
    id _target;
}

+ (id)perfromSelector:(SEL)arg1 onTarget:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)reversedAction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (bool)isCustom;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
