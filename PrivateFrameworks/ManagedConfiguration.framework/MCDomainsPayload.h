/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSDictionary;

@interface MCDomainsPayload : MCPayload  {
    NSDictionary *_restrictions;
}

@property(retain) NSDictionary * restrictions;

+ (bool)isPatternValid:(id)arg1 outError:(id*)arg2;
+ (id)invalidDomainPatternErrorWithPattern:(id)arg1;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void)setRestrictions:(id)arg1;
- (id)restrictions;
- (void).cxx_destruct;

@end
