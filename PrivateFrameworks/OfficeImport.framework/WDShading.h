/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSUColor;

@interface WDShading : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mForegroundColor;
    OITSUColor *mBackgroundColor;
}

+ (id)nullShading;
+ (id)autoBackgroundColor;
+ (id)autoForegroundColor;

- (bool)isEqualToShading:(id)arg1;
- (void)setShading:(id)arg1;
- (id)foreground;
- (void)setForeground:(id)arg1;
- (void)setStyle:(int)arg1;
- (int)style;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBackground:(id)arg1;
- (id)background;

@end
