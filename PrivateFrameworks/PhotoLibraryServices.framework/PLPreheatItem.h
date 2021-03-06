/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPreheatItem : NSObject  {
    int _format;
    long long _imageType;
    struct CGSize { 
        double width; 
        double height; 
    } _optimalSourcePixelSize;
    int _prefetchCount;
    bool_heated;
    int _bestFormat;
}

@property(readonly) int format;
@property(readonly) struct CGSize { double x1; double x2; } optimalSourcePixelSize;
@property int bestFormat;
@property bool heated;
@property(readonly) long long imageType;


- (struct CGSize { double x1; double x2; })optimalSourcePixelSize;
- (bool)addImageHandler:(id)arg1;
- (id)cachedImage:(bool*)arg1;
- (void)startPreheatRequestWithCompletionHandler:(id)arg1;
- (long long)incrementPrefetchCount;
- (id)cachedImageIfAvailable:(bool*)arg1;
- (void)cancelPreheatRequest;
- (long long)decrementPrefetchCount;
- (void)setBestFormat:(int)arg1;
- (int)bestFormat;
- (void)setHeated:(bool)arg1;
- (bool)heated;
- (int)format;
- (bool)isCancelled;
- (long long)imageType;

@end
