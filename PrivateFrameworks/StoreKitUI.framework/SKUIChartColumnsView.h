/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, _UIBackdropView, SKUIFlexibleSegmentedControl, UIView, NSString;

@interface SKUIChartColumnsView : UIView <SKUIFlexibleSegmentedControlDelegate> {
    NSArray *_allViewControllers;
    long long _animatingToNumberOfVisibleColumns;
    _UIBackdropView *_backdropView;
    UIView *_borderView0;
    UIView *_borderView1;
    long long _columnChangeAnimationCount;
    NSArray *_columnViews;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInset;
    UIView *_headerBackgroundView;
    UIView *_headerBackgroundBottomBorder;
    NSArray *_headerViews;
    long long _numberOfVisibleColumns;
    SKUIFlexibleSegmentedControl *_segmentedControl;
}

@property(readonly) _UIBackdropView * backdropView;
@property(copy) NSArray * chartViewControllers;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property long long numberOfVisibleColumns;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)chartViewControllers;
- (id)_headerViewWithViewControllers:(id)arg1;
- (void)_headerViewAction:(id)arg1;
- (long long)numberOfVisibleColumns;
- (void)_reloadColumnViews;
- (void)endColumnChangeAnimation;
- (void)beginColumnChangeAnimationToNumberOfVisibleColumns:(long long)arg1;
- (void)setNumberOfVisibleColumns:(long long)arg1;
- (void)setChartViewControllers:(id)arg1;
- (void)segmentedControl:(id)arg1 didSelectSegmentIndex:(long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)backdropView;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)layoutSubviews;

@end
