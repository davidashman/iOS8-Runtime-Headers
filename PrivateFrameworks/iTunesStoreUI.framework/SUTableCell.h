/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIColor, SUItemOfferButton, UIBezierPath, SUTableCellContentView, SUCellConfiguration;

@interface SUTableCell : UITableViewCell  {
    UIColor *_bottomBorderColor;
    SUTableCellContentView *_configurationView;
    unsigned int _hideHighlight : 1;
    SUItemOfferButton *_itemOfferButton;
    struct { 
        unsigned long long localIndex; 
        unsigned long long localCount; 
        unsigned long long globalIndex; 
        unsigned long long globalCount; 
    } _position;
    UIColor *_topBorderColor;
    long long _editState;
}

@property(retain) UIColor * bottomBorderColor;
@property int clipCorners;
@property(readonly) UIBezierPath * clippingPath;
@property(retain) SUCellConfiguration * configuration;
@property bool drawAsDisabled;
@property bool highlightsOnlyContentView;
@property(retain,readonly) SUItemOfferButton * itemOfferButton;
@property struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } position;
@property bool showHighlight;
@property(retain) UIColor * topBorderColor;
@property bool usesSubviews;
@property long long editState;


- (long long)editState;
- (id)topBorderColor;
- (id)bottomBorderColor;
- (bool)showHighlight;
- (void)setUsesSubviews:(bool)arg1;
- (void)setTopBorderColor:(id)arg1;
- (void)setShowHighlight:(bool)arg1;
- (void)setBottomBorderColor:(id)arg1;
- (id)itemOfferButton;
- (id)clippingPath;
- (void)setEditState:(long long)arg1;
- (id)copyPurchaseAnimationView;
- (bool)usesSubviews;
- (void)setHighlightsOnlyContentView:(bool)arg1;
- (void)setDrawAsDisabled:(bool)arg1;
- (bool)drawAsDisabled;
- (bool)highlightsOnlyContentView;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPosition:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (id)configuration;
- (void)dealloc;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })position;
- (void)setClipCorners:(int)arg1;
- (int)clipCorners;
- (void)setConfiguration:(id)arg1;
- (void)setShowingDeleteConfirmation:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (bool)_canDrawContent;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
