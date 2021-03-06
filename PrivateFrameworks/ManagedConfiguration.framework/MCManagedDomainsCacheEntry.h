/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSNumber;

@interface MCManagedDomainsCacheEntry : NSObject  {
    bool_subdomainsMatch;
    NSString *_domain;
    NSString *_path;
    NSNumber *_port;
}

@property bool subdomainsMatch;
@property(retain) NSString * domain;
@property(retain) NSString * path;
@property(retain) NSNumber * port;

+ (id)normalizedPatternString:(id)arg1;

- (void)setSubdomainsMatch:(bool)arg1;
- (bool)subdomainsMatch;
- (id)initWithPattern:(id)arg1;
- (id)path;
- (void)setPort:(id)arg1;
- (bool)matchesURL:(id)arg1;
- (id)port;
- (id)domain;
- (void)setPath:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)setDomain:(id)arg1;

@end
