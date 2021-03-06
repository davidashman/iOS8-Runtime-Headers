/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSData, NSString;

@interface BBSectionIconVariant : NSObject <NSCopying, NSSecureCoding> {
    bool_precomposed;
    long long _format;
    NSData *_imageData;
    NSString *_imagePath;
    NSString *_imageName;
    NSString *_bundlePath;
}

@property long long format;
@property(copy) NSData * imageData;
@property(copy) NSString * imagePath;
@property(copy) NSString * imageName;
@property(copy) NSString * bundlePath;
@property(getter=isPrecomposed) bool precomposed;

+ (id)variantWithFormat:(long long)arg1 imageName:(id)arg2 inBundle:(id)arg3;
+ (id)variantWithFormat:(long long)arg1 imagePath:(id)arg2;
+ (id)variantWithFormat:(long long)arg1 imageData:(id)arg2;
+ (id)_variantWithFormat:(long long)arg1;
+ (bool)supportsSecureCoding;

- (id)imageName;
- (void)setImageName:(id)arg1;
- (void)setFormat:(long long)arg1;
- (void)setBundlePath:(id)arg1;
- (long long)format;
- (void)setImageData:(id)arg1;
- (id)imageData;
- (id)imagePath;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)bundlePath;
- (void)setPrecomposed:(bool)arg1;
- (bool)isPrecomposed;
- (void)setImagePath:(id)arg1;

@end
