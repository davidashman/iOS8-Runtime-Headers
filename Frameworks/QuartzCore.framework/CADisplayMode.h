/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class CADisplay;

@interface CADisplayMode : NSObject  {
    void *_priv;
    CADisplay *_dpy;
    unsigned long long _width;
    unsigned long long _height;
}

@property(readonly) unsigned long long width;
@property(readonly) unsigned long long height;
@property(readonly) double pixelAspectRatio;

+ (id)_displayModeWithMode:(int)arg1 display:(id)arg2;

- (unsigned long long)height;
- (unsigned long long)width;
- (void)_setWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (double)pixelAspectRatio;
- (id)_initWithMode:(int)arg1 display:(id)arg2;
- (int)_mode;
- (id)_display;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;

@end
