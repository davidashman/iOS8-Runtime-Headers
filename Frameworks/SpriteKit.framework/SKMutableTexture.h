/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKMutableTexture : SKTexture  {
    void *_ioSurface;
    bool_ioSurfaceBacked;
    struct CGSize { 
        double width; 
        double height; 
    } _textureSize;
    void *_pixelData;
    unsigned long long _pixelDataLength;
    int _pixelFormat;
}

+ (id)mutableTextureWithSize:(struct CGSize { double x1; double x2; })arg1;

- (void)modifyPixelDataWithBlock:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 pixelFormat:(int)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 ioSurfaceBacked:(bool)arg2 pixelFormat:(int)arg3;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (id).cxx_construct;
- (void)load;
- (id)description;

@end
