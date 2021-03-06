/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class NSMutableDictionary, CIContext;

@interface CIRectangleDetector : CIDetector  {
    CIContext *context;
    double _width;
    double _height;
    NSMutableDictionary *featureOptions;
    struct OpaqueVTPixelTransferSession { } *pixelTransferSession;
    struct __CVBuffer { } *interimScaleBuffer;
    struct __CVBuffer { } *scaleBuffer;
    float *perMeshPtr;
    void *_internalBuffer;
}

@property(retain) CIContext * context;


- (id)context;
- (void)setContext:(id)arg1;
- (id)featuresInImageUsingCCRect:(id)arg1 options:(id)arg2;
- (id)featuresInImage:(id)arg1;
- (id)initWithContext:(id)arg1 options:(id)arg2;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (void)finalize;
- (void)dealloc;

@end
