/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString;

@interface CoreDAVParseRule : NSObject  {
    long long _minimumNumber;
    long long _maximumNumber;
    NSString *_nameSpace;
    NSString *_elementName;
    Class _objectClass;
    SEL _setterMethod;
}

@property(readonly) long long minimumNumber;
@property(readonly) long long maximumNumber;
@property(readonly) NSString * nameSpace;
@property(readonly) NSString * elementName;
@property(readonly) Class objectClass;
@property(readonly) SEL setterMethod;

+ (id)ruleWithMinimumNumber:(long long)arg1 maximumNumber:(long long)arg2 nameSpace:(id)arg3 elementName:(id)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6;

- (id)elementName;
- (SEL)setterMethod;
- (Class)objectClass;
- (long long)maximumNumber;
- (long long)minimumNumber;
- (id)initWithMinimumNumber:(long long)arg1 maximumNumber:(long long)arg2 nameSpace:(id)arg3 elementName:(id)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6;
- (void)dealloc;
- (id)description;
- (id)nameSpace;

@end
