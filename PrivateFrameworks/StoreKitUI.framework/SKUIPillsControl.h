/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIColorScheme, NSString, NSArray, SKUISegmentedControl;

@interface SKUIPillsControl : UIControl  {
    SKUIColorScheme *_colorScheme;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInset;
    long long _maximumNumberOfVisiblePills;
    NSString *_moreListTitle;
    SKUISegmentedControl *_segmentedControl;
    NSArray *_titles;
}

@property(copy) SKUIColorScheme * colorScheme;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property long long maximumNumberOfVisiblePills;
@property(copy) NSString * moreListTitle;
@property long long selectedIndex;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } selectedPillFrame;
@property(copy) NSArray * titles;


- (id)moreListTitle;
- (void)setMoreListTitle:(id)arg1;
- (void)setMaximumNumberOfVisiblePills:(long long)arg1;
- (long long)maximumNumberOfVisiblePills;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectedPillFrame;
- (void)reloadPills;
- (void)_segmentedControlAction:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)titles;
- (void)setSelectedIndex:(long long)arg1;
- (long long)selectedIndex;
- (void)setTitles:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
