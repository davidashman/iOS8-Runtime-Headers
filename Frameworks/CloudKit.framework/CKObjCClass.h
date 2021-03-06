/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSString, NSDictionary, NSArray;

@interface CKObjCClass : NSObject  {
    Class _handle;
    NSString *_name;
    NSDictionary *_propertiesByName;
    NSArray *_sortedProperties;
}

@property(readonly) Class handle;
@property(readonly) NSString * name;
@property(readonly) NSDictionary * propertiesByName;
@property(readonly) NSArray * sortedProperties;

+ (id)classForObject:(id)arg1;
+ (id)classForHandle:(Class)arg1;

- (id)sortedProperties;
- (id)initWithHandle:(Class)arg1;
- (id)propertyForName:(id)arg1;
- (id)allProperties;
- (id)propertiesByName;
- (Class)handle;
- (id)name;
- (void).cxx_destruct;

@end
