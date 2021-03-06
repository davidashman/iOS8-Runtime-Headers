/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSURL, NSString;

@interface MCBookmark : NSObject <NSCopying> {
    NSURL *_URL;
    NSString *_title;
    NSString *_path;
}

@property(retain) NSURL * URL;
@property(retain) NSString * title;
@property(retain) NSString * path;


- (id)serializableDictionary;
- (id)initWithSerializableDictionary:(id)arg1;
- (id)path;
- (void)setTitle:(id)arg1;
- (id)title;
- (bool)isEqual:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setURL:(id)arg1;
- (id)URL;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
