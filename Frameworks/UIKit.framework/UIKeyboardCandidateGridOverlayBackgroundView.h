/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateGridOverlayBackgroundView : UICollectionReusableView  {
    double _rowHeight;
    unsigned long long _highlightedRowIndex;
}

@property double rowHeight;
@property unsigned long long highlightedRowIndex;

+ (struct CGColor { }*)backgroundColor;
+ (id)collectionViewKind;
+ (id)reuseIdentifier;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)highlightedRowIndex;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setHighlightedRowIndex:(unsigned long long)arg1;
- (double)rowHeight;
- (void)setRowHeight:(double)arg1;

@end
