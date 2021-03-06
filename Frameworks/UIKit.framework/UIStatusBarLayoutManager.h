/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIStatusBarItemView, UIStatusBarForegroundView;

@interface UIStatusBarLayoutManager : NSObject  {
    UIStatusBarForegroundView *_foregroundView;
    int _region;
    UIStatusBarItemView *_itemViews[30];
    bool_persistentAnimationsEnabled;
    bool_usesVerticalLayout;
}

@property UIStatusBarForegroundView * foregroundView;
@property bool persistentAnimationsEnabled;
@property(readonly) bool usesVerticalLayout;


- (void)dealloc;
- (bool)persistentAnimationsEnabled;
- (void)itemView:(id)arg1 sizeChangedBy:(double)arg2;
- (bool)updateDoubleHeightItem;
- (bool)prepareDoubleHeightItemWithEnabledItems:(bool*)arg1;
- (void)_addOriginDelta:(double)arg1 toPoint:(struct CGPoint { double x1; double x2; }*)arg2;
- (double)_dimensionForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setOrigin:(double)arg1 forPoint:(struct CGPoint { double x1; double x2; }*)arg2;
- (SEL)_itemSortSelector;
- (double)_sizeNeededForItemView:(id)arg1;
- (id)_viewForItem:(id)arg1;
- (bool)_processDelta:(double)arg1 forView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_repositionedNewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 sizeDelta:(double)arg2;
- (double)_positionAfterPlacingItemView:(id)arg1 startPosition:(double)arg2 firstView:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForItemView:(id)arg1 startPosition:(double)arg2 firstView:(bool)arg3;
- (id)_itemViewsSortedForLayout;
- (id)_createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3;
- (id)foregroundView;
- (bool)_updateItemView:(id)arg1 withData:(id)arg2 actions:(int)arg3 animated:(bool)arg4;
- (id)_itemViews;
- (void)_positionNewItemViewsWithEnabledItems:(bool*)arg1;
- (void)_prepareEnabledItemType:(int)arg1 withEnabledItems:(bool*)arg2 withData:(id)arg3 actions:(int)arg4 itemAppearing:(bool*)arg5 itemDisappearing:(bool*)arg6;
- (void)setPersistentAnimationsEnabled:(bool)arg1;
- (bool)itemIsVisible:(id)arg1;
- (double)removeOverlap:(double)arg1 fromItems:(id)arg2;
- (double)sizeNeededForItem:(id)arg1;
- (double)distributeOverlap:(double)arg1 amongItems:(id)arg2;
- (double)sizeNeededForItems:(id)arg1;
- (void)clearOverlapFromItems:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForItems:(id)arg1;
- (void)makeVisibleItemsPerformPendedActions;
- (void)removeDisabledItems:(bool*)arg1;
- (void)positionInvisibleItems;
- (void)setVisibilityOfItem:(id)arg1 visible:(bool)arg2;
- (void)reflowWithVisibleItems:(id)arg1 duration:(double)arg2;
- (void)setVisibilityOfAllItems:(bool)arg1;
- (bool)updateItemsWithData:(id)arg1 actions:(int)arg2 animated:(bool)arg3;
- (bool)prepareEnabledItems:(bool*)arg1 withData:(id)arg2 actions:(int)arg3;
- (void)setForegroundView:(id)arg1;
- (id)initWithRegion:(int)arg1 foregroundView:(id)arg2 usesVerticalLayout:(bool)arg3;
- (bool)usesVerticalLayout;
- (double)_startPosition;

@end
