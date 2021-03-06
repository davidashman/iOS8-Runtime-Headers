/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIView;

@interface SKUICategoryTableViewCell : UITableViewCell  {
    UIView *_separatorView;
    struct CGSize { 
        double width; 
        double height; 
    } _expectedImageSize;
    bool_layoutNeedsLayout;
}

@property struct CGSize { double x1; double x2; } expectedImageSize;


- (struct CGSize { double x1; double x2; })expectedImageSize;
- (void)setExpectedImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end
