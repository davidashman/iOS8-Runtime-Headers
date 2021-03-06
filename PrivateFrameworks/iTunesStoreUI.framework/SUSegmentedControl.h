/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUClientInterface, NSString, NSArray, SUSimpleMenuViewController, UISegmentedControl, UIPopoverController, NSMutableArray, UIColor;

@interface SUSegmentedControl : UIControl <SUMenuViewControllerDelegate, UIPopoverControllerDelegate> {
    bool_autosizesText;
    NSString *_cancelButtonTitle;
    SUClientInterface *_clientInterface;
    bool_hidingPopoverForRotation;
    NSMutableArray *_items;
    long long _maximumNumberOfItems;
    double _maximumWidth;
    SUSimpleMenuViewController *_menuViewController;
    NSString *_moreListTitle;
    UIPopoverController *_popoverController;
    UISegmentedControl *_segmentedControl;
    long long _selectionIndex;
    bool_showsMoreListAutomatically;
    long long _tintStyle;
}

@property(copy) NSArray * items;
@property long long maximumNumberOfItems;
@property double maximumWidth;
@property(copy) NSString * cancelButtonTitle;
@property(copy) NSString * moreListTitle;
@property(readonly) long long numberOfVisibleSegments;
@property long long segmentedControlStyle;
@property long long selectedItemIndex;
@property(readonly) long long selectedSegmentIndex;
@property bool showsMoreListAutomatically;
@property(retain) UIColor * tintColor;
@property long long tintStyle;
@property(retain) SUClientInterface * clientInterface;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)_titlesForMoreList;
- (void)_presentPopoverAnimated:(bool)arg1;
- (long long)numberOfVisibleSegments;
- (void)_destroyPopoverController;
- (void)_destroyMenuViewController;
- (void)_showMoreList:(bool)arg1;
- (void)_setValue:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)_applyStyling;
- (void)_valueChangedEvent:(id)arg1;
- (bool)showsMoreListAutomatically;
- (void)setShowsMoreListAutomatically:(bool)arg1;
- (void)setMaximumNumberOfItems:(long long)arg1;
- (long long)maximumNumberOfItems;
- (void)showPopover:(id)arg1 fromSegmentIndex:(long long)arg2 animated:(bool)arg3;
- (void)showMoreList:(bool)arg1 animated:(bool)arg2;
- (id)cancelButtonTitle;
- (void)_windowWillRotateNotification:(id)arg1;
- (void)_windowDidRotateNotification:(id)arg1;
- (void)sizeToFitWithMinimumSegmentWidth:(double)arg1 maximumTotalWidth:(double)arg2;
- (void)menuViewControllerDidCancel:(id)arg1;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)sizeToFitUserInterfaceIdiom;
- (void)setSelectedItemIndex:(long long)arg1;
- (long long)selectedItemIndex;
- (void)setTintStyle:(long long)arg1;
- (long long)tintStyle;
- (id)moreListTitle;
- (void)setMoreListTitle:(id)arg1;
- (void)setClientInterface:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (id)clientInterface;
- (id)items;
- (void)setItems:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)_reloadData;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (long long)selectedSegmentIndex;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (long long)segmentedControlStyle;
- (void)setSegmentedControlStyle:(long long)arg1;
- (double)maximumWidth;
- (void)setMaximumWidth:(double)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
