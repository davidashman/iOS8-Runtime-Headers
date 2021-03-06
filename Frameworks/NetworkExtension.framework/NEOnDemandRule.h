/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NSArray, NSURL;

@interface NEOnDemandRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {
    long long _action;
    NSArray *_DNSSearchDomainMatch;
    NSArray *_DNSServerAddressMatch;
    long long _interfaceTypeMatch;
    NSArray *_SSIDMatch;
    NSURL *_probeURL;
}

@property(readonly) long long action;
@property(copy) NSArray * DNSSearchDomainMatch;
@property(copy) NSArray * DNSServerAddressMatch;
@property long long interfaceTypeMatch;
@property(copy) NSArray * SSIDMatch;
@property(copy) NSURL * probeURL;

+ (id)createOnDemandRulesFromLegacyDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)setProbeURL:(id)arg1;
- (void)setSSIDMatch:(id)arg1;
- (void)setInterfaceTypeMatch:(long long)arg1;
- (void)setDNSServerAddressMatch:(id)arg1;
- (void)setDNSSearchDomainMatch:(id)arg1;
- (id)probeURL;
- (id)SSIDMatch;
- (long long)interfaceTypeMatch;
- (id)DNSServerAddressMatch;
- (id)DNSSearchDomainMatch;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)initWithAction:(long long)arg1;
- (long long)action;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
