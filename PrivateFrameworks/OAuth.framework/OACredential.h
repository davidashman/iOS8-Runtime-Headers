/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OAuth.framework/OAuth
 */

@class NSString;

@interface OACredential : NSObject  {
    NSString *_consumerKey;
    NSString *_consumerSecret;
    NSString *_oauthToken;
    NSString *_oauthTokenSecret;
}

@property(copy) NSString * consumerKey;
@property(copy) NSString * consumerSecret;
@property(copy) NSString * oauthToken;
@property(copy) NSString * oauthTokenSecret;


- (id)oauthToken;
- (void)setConsumerSecret:(id)arg1;
- (void)setConsumerKey:(id)arg1;
- (id)consumerKey;
- (id)signingKey;
- (id)oauthTokenSecret;
- (id)consumerSecret;
- (void)setOauthTokenSecret:(id)arg1;
- (void)setOauthToken:(id)arg1;
- (void)dealloc;

@end
