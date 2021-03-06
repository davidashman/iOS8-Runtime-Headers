/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class UIImage;

@interface OITSUImage : NSObject  {
    struct CGImage { } *mCachedSliceableImage;
    struct __CFDictionary { } *mImageSlices;
    long long mImageSliceCacheLock;
    id mCachedSystemImage;
    long long mCachedImageLock;
}

@property(readonly) UIImage * UIImage;
@property(readonly) struct CGSize { double x1; double x2; } size;
@property(readonly) struct CGImage { }* CGImage;
@property(readonly) long long imageOrientation;
@property(readonly) double scale;

+ (id)noisePatternWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 factor:(double)arg3;
+ (id)imageWithUIImage:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;

- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 isFlipped:(bool)arg3;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 stretchingCenterWidthBy:(double)arg3;
- (id)stretchedImageOfSize:(struct CGSize { double x1; double x2; })arg1 leftCapWidth:(double)arg2 rightCapWidth:(double)arg3 topCapHeight:(double)arg4 bottomCapHeight:(double)arg5;
- (id)PNGRepresentation;
- (id)JPEGRepresentationWithCompressionQuality:(double)arg1;
- (id)imagePartsWithLeftCapWidth:(double)arg1 rightCapWidth:(double)arg2 topCapHeight:(double)arg3 bottomCapHeight:(double)arg4;
- (struct CGImage { }*)CGImageForContentsScale:(double)arg1;
- (id)initWithUIImage:(id)arg1;
- (struct CGImage { }*)CGImageForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithImageSourceRef:(struct CGImageSource { }*)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)init;
- (bool)isEmpty;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)TIFFRepresentation;
- (struct CGSize { double x1; double x2; })size;
- (double)scale;
- (id)UIImage;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (long long)imageOrientation;
- (struct CGImage { }*)CGImage;

@end
