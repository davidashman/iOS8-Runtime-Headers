/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class UIImage;

@interface QLThumbnailOperation : NSOperation  {
    long long _index;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
    UIImage *_image;
}

@property long long index;
@property struct CGSize { double x1; double x2; } size;
@property(retain) UIImage * image;


- (void)setIndex:(long long)arg1;
- (long long)index;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })size;

@end
