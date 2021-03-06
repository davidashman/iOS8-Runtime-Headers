/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class UILabel, MFHeaderLabelView;

@interface MFComposeMultiView : MFComposeHeaderView  {
    UILabel *_accountLabel;
    MFHeaderLabelView *_imageSizeHeaderLabelView;
    UILabel *_imageSizeLabel;
    UILabel *_placeholderImageSizeLabel;
    bool_imageSizeShown;
    bool_accountHasUnsafeDomain;
    bool_accountAutoselected;
}

@property(getter=isAccountAutoselected) bool accountAutoselected;
@property bool accountHasUnsafeDomain;


- (bool)isAccountAutoselected;
- (id)placeholderImageSizeLabel;
- (id)imageSizeHeaderLabelView;
- (id)imageSizeLabel;
- (id)accountLabel;
- (bool)accountHasUnsafeDomain;
- (void)setAccountAutoselected:(bool)arg1;
- (void)setAccountHasUnsafeDomain:(bool)arg1;
- (void)setShowsImageSize:(bool)arg1;
- (void)setImageSizeDescription:(id)arg1;
- (void)refreshPreferredContentSize;
- (id)labelColor;
- (void)setAccountDescription:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;

@end
