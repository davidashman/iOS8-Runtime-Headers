/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUControlAppearance, NSMutableDictionary, UIImage;

@interface SUSegmentedControlAppearance : NSObject <NSCopying> {
    SUControlAppearance *_backgroundImages;
    NSMutableDictionary *_dividerImages;
    UIImage *_optionsBackgroundImage;
    NSMutableDictionary *_titleTextAttributes;
}

@property(retain) UIImage * optionsBackgroundImage;

+ (id)defaultOptionsAppearanceForTintStyle:(long long)arg1;
+ (id)defaultBarAppearance;

- (id)_newDividerImageKeyWithLeftState:(unsigned long long)arg1 rightState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)styleSegmentedControl:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (void)setOptionsBackgroundImage:(id)arg1;
- (id)optionsBackgroundImage;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;

@end
