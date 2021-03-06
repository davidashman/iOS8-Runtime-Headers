/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class NSString, NSArray, SKTexture, CIFilter, SKTextureCache;

@interface SKTexture : NSObject <NSCopying, NSCoding> {
    bool_shouldGenerateMipmaps;
    bool_didGenerateMipmaps;
    bool_isPath;
    bool_isData;
    NSString *_imgName;
    NSArray *_searchPaths;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _textRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _textCoords;
    bool_disableAlpha;
    bool_isRotated;
    struct CGPoint { 
        double x; 
        double y; 
    } _cropScale;
    struct CGPoint { 
        double x; 
        double y; 
    } _cropOffset;
    int _alignment;
    int _rowLength;
    bool_isCompressed;
    int _compressedSize;
    unsigned int _compressedFormat;
    CIFilter *_filter;
    SKTexture *_originalTexture;
    unsigned int _textureTarget;
    NSString *_originalAtlasName;
    NSString *_subTextureName;
    SKTextureCache *_textureCache;
    unsigned int *_alphaMap;
    struct CGSize { 
        double width; 
        double height; 
    } _alphaMapSize;
}

@property unsigned int textureTarget;
@property bool isRotated;
@property(readonly) bool hasAlpha;
@property int wrapMode;
@property(readonly) NSString * imageNameOrPath;
@property long long filteringMode;
@property bool usesMipmaps;
@property(readonly) struct CGSize { double x1; double x2; } pixelSize;
@property(readonly) bool useAlpha;
@property bool disableAlpha;
@property(readonly) bool isRepeatable;
@property struct CGPoint { double x1; double x2; } cropScale;
@property struct CGPoint { double x1; double x2; } cropOffset;
@property(copy) NSString * originalAtlasName;
@property(copy) NSString * subTextureName;
@property(readonly) unsigned int* alphaMap;
@property(readonly) struct CGSize { double x1; double x2; } alphaMapSize;

+ (id)_textureWithGLTextureId:(unsigned int)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)_textureByTransferingData:(char *)arg1 size:(struct CGSize { double x1; double x2; })arg2 rowLength:(unsigned int)arg3 alignment:(unsigned int)arg4;
+ (id)_textureByTransferingData:(char *)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)textureWithImagePath:(id)arg1;
+ (id)compressedTextureWithData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 bitsPerPixel:(unsigned int)arg3 hasAlpha:(bool)arg4;
+ (id)compressedTextureWithData:(id)arg1;
+ (void)preloadTextures;
+ (id)textureWithData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 rowLength:(unsigned int)arg3 alignment:(unsigned int)arg4;
+ (id)textureWithData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 flipped:(bool)arg3;
+ (id)textureWithImage:(id)arg1;
+ (id)textureWithCGImage:(struct CGImage { }*)arg1;
+ (id)textureNoiseWithSmoothness:(double)arg1 size:(struct CGSize { double x1; double x2; })arg2 grayscale:(bool)arg3;
+ (id)textureVectorNoiseWithSmoothness:(double)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)textureWithImageNamed:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (void)_addTextureToPreloadlist:(id)arg1;
+ (id)textureWithData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)textureWithCGImage:(struct CGImage { }*)arg1 pointSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)lookupTextureCacheForName:(id)arg1;
+ (void)preloadTextures:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)registerTextureCache:(id)arg1 forName:(id)arg2;
+ (id)textureWithImageNamed:(id)arg1;
+ (id)_textureWithImageNamed:(id)arg1;
+ (void)deleteUnusedTextures;
+ (id)textureWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inTexture:(id)arg2;
+ (void)updateTextures;

- (void)_savePngFromGLCache:(id)arg1;
- (void)setTextureTarget:(unsigned int)arg1;
- (void)setIsRotated:(bool)arg1;
- (struct CGImage { }*)_rotateCGImage:(struct CGImage { }*)arg1;
- (struct CGImage { }*)_newTextureFromGLCache;
- (id)_initWithGLTextureId:(unsigned int)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)setSubTextureName:(id)arg1;
- (id)subTextureName;
- (void)setOriginalAtlasName:(id)arg1;
- (id)originalAtlasName;
- (void)setCropOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })cropOffset;
- (void)setCropScale:(struct CGPoint { double x1; double x2; })arg1;
- (void)preload;
- (bool)isRepeatable;
- (void)_loadOnTextureQueue;
- (void)setUsesMipmaps:(bool)arg1;
- (id)textureByApplyingCIFilter:(id)arg1;
- (bool)isInMemory;
- (bool)disableAlpha;
- (void)setDisableAlpha:(bool)arg1;
- (bool)useAlpha;
- (id)initWithImagePath:(id)arg1;
- (void)preloadWithCompletionHandler:(id)arg1;
- (void)setTextureDimension:(const struct CGSize { double x1; double x2; }*)arg1 withPixelSize:(const struct CGSize { double x1; double x2; }*)arg2;
- (struct CGImage { }*)alphaMask;
- (bool)alphaTestX:(double)arg1 y:(double)arg2;
- (void)generateAlphaMapOfSize:(struct CGSize { double x1; double x2; })arg1 fromImage:(struct CGImage { }*)arg2;
- (id)textureByGeneratingNormalMap;
- (id)_textureCache;
- (struct CGPoint { double x1; double x2; })cropScale;
- (id)initWithImageNamed:(id)arg1;
- (id)_copyImageData;
- (void)initTextureCacheWithImageData;
- (void)loadImageDataFromCGImage:(struct CGImage { }*)arg1 pointsSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)loadImageDataFromPVRGZData:(id)arg1;
- (void)loadImageData;
- (bool)loadImageDataFromPVRData:(id)arg1;
- (void)_ensureImageData;
- (id)_generateNormalMap:(double)arg1 contrast:(double)arg2 multiPass:(unsigned long long)arg3;
- (id)textureByGeneratingNormalMapWithSmoothness:(double)arg1 contrast:(double)arg2;
- (id)imgName;
- (void)setWrapMode:(int)arg1;
- (int)wrapMode;
- (struct CGSize { double x1; double x2; })alphaMapSize;
- (unsigned int*)alphaMap;
- (void)setFilteringMode:(long long)arg1;
- (struct CGSize { double x1; double x2; })pixelSize;
- (struct CGImage { }*)_createCGImage;
- (id)imageNameOrPath;
- (int)glTextureId;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textureRect;
- (bool)usesMipmaps;
- (long long)filteringMode;
- (unsigned int)textureTarget;
- (bool)hasAlpha;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)load;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })size;
- (void)unload;
- (void)commonInit;
- (bool)isRotated;

@end
