/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UICollectionView;

@interface SKUISearchCollectionViewFlowLayout : SKUIItemGridCollectionViewLayout  {
    UICollectionView *_collectionView;
    long long _numberOfRows;
    long long _numberOfColumns;
    struct CGSize { 
        double width; 
        double height; 
    } _headerSize;
    double _horizontalPadding;
    double _verticalPadding;
    bool_backfills;
}

@property double horizontalPadding;
@property double verticalPadding;
@property bool backfills;


- (void)setBackfills:(bool)arg1;
- (bool)backfills;
- (void)setVerticalPadding:(double)arg1;
- (double)verticalPadding;
- (id)init;
- (void).cxx_destruct;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)horizontalPadding;
- (void)setHorizontalPadding:(double)arg1;

@end
