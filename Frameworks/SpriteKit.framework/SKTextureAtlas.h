/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class NSDictionary, NSString, NSArray;

@interface SKTextureAtlas : NSObject <NSCoding> {
    NSDictionary *_textureDict;
    NSString *_atlasName;
}

@property(readonly) NSArray * textureNames;

+ (id)atlasWithDictionary:(id)arg1;
+ (id)getSupportedPostfixes;
+ (void)preloadTextureAtlases:(id)arg1 withCompletionHandler:(id)arg2;
+ (bool)canUseObjectForAtlas:(id)arg1;
+ (id)atlasNamed:(id)arg1;
+ (id)findTextureNamed:(id)arg1;

- (id)textureNames;
- (id)findTextureNamedFromAtlas:(id)arg1;
- (void)parseAtlasPropertyList:(id)arg1 withPath:(id)arg2;
- (void)loadTextures;
- (void)preload;
- (void)preloadWithCompletionHandler:(id)arg1;
- (id)_copyImageData;
- (id)textureNamed:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (void)unload;

@end
