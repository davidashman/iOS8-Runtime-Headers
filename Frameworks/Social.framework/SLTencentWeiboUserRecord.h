/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class NSString, NSURL;

@interface SLTencentWeiboUserRecord : SLMicroBlogUserRecord <NSSecureCoding> {
    NSString *_openid;
    NSURL *_objectID;
}

@property(copy) NSString * openid;
@property(retain) NSURL * objectID;

+ (id)userRecordWithDictionaryRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)openid;
- (void)setOpenid:(id)arg1;
- (void)setValuesWithUserDictionary:(id)arg1;
- (void)setObjectID:(id)arg1;
- (id)objectID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
