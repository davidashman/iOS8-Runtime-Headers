/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class NSData;

@interface CSIBitmapWrapper : NSObject  {
    struct CGContext { } *_bitmapContext;
    NSData *_pixelData;
    NSData *_rawData;
    unsigned int _pixelFormat;
    unsigned int _width;
    unsigned int _height;
    unsigned long long _rowbytes;
    bool_allowsMultiPassEncoding;
    unsigned int _imageAlpha;
}

@property unsigned int pixelFormat;
@property bool allowsMultiPassEncoding;


- (unsigned int)height;
- (unsigned int)width;
- (void)setPixelData:(id)arg1;
- (void)setSourceAlphaInfo:(unsigned int)arg1;
- (id)initWithPixelWidth:(unsigned int)arg1 pixelHeight:(unsigned int)arg2;
- (id)pixelData;
- (struct CGContext { }*)bitmapContext;
- (void)setAllowsMultiPassEncoding:(bool)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (unsigned int)pixelFormat;
- (unsigned int)sourceImageAlpha;
- (bool)allowsMultiPassEncoding;
- (id)compressedData:(bool)arg1 usedEncoding:(int*)arg2 andRowChunkSize:(unsigned int*)arg3;
- (void)finalize;
- (void)dealloc;

@end
