/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSNumber;

@interface MCNumber : NSObject <NSSecureCoding> {
    NSNumber *_number;
}

@property(retain) NSNumber * number;

+ (id)numberWithUnsignedInt:(unsigned int)arg1;
+ (id)numberWithUnsignedInteger:(unsigned long long)arg1;
+ (id)numberWithInteger:(long long)arg1;
+ (id)numberWithInt:(int)arg1;
+ (bool)supportsSecureCoding;

- (id)number;
- (void)setNumber:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)initWithUnsignedInteger:(unsigned long long)arg1;
- (id)initWithInteger:(long long)arg1;
- (id)initWithInt:(int)arg1;
- (id)initWithUnsignedInt:(unsigned int)arg1;

@end
