/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUFlushableCachedImage : OITSUFlushableObject  {
    struct CGImage { } *_image;
    id _delegate;
    SEL _delegateCreateImageSelector;
}


- (struct CGImage { }*)newImage;
- (bool)hasFlushableContent;
- (id)initWithDelegate:(id)arg1 createImageSelector:(SEL)arg2;
- (void)dealloc;
- (void)unload;

@end
