/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class UILabel, NSNumberFormatter;

@interface QLPageNumberView : UIView  {
    long long _pageNumber;
    long long _pageCount;
    UILabel *_backgroundLabel;
    UILabel *_label;
    NSNumberFormatter *_indexFormatter;
}

@property long long pageNumber;
@property long long pageCount;


- (struct CGPath { }*)_copyMutablePathForRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 radius:(double)arg2 inverted:(bool)arg3;
- (void)_updateString;
- (void)setPageNumber:(long long)arg1;
- (id)_indexFormatter;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (long long)pageNumber;
- (void)setPageCount:(long long)arg1;
- (long long)pageCount;
- (void)sizeToFit;
- (void)layoutSubviews;

@end
