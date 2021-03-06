/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIView, SKUIItemOfferButton, SKUIItemOffer, SKUIItemOfferButtonAppearance, SKUICellImageView, UIImage, NSString, UILabel, SKUIItemState;

@interface SKUIItemCellLayout : SKUICellLayout <SKUIItemOfferButtonDelegate> {
    bool_iconImageHidden;
    bool_hidesItemOfferButton;
    bool_highlighted;
    SKUICellImageView *_iconImageView;
    SKUIItemOffer *_itemOffer;
    SKUIItemOfferButton *_itemOfferButton;
    SKUIItemOfferButtonAppearance *_itemOfferButtonAppearance;
    UILabel *_itemOfferNoticeLabel;
    SKUIItemState *_itemState;
    bool_restricted;
    bool_selected;
    UIView *_removeControlView;
}

@property(retain) UIImage * iconImage;
@property(getter=isIconImageHidden) bool iconImageHidden;
@property bool displaysItemOfferButton;
@property(getter=isRestricted) bool restricted;
@property(retain) SKUIItemOffer * itemOffer;
@property(retain) SKUIItemOfferButtonAppearance * itemOfferButtonAppearance;
@property(copy) NSString * itemOfferNoticeString;
@property(copy) SKUIItemState * itemState;
@property(getter=isHighlighted) bool highlighted;
@property(getter=isSelected) bool selected;
@property(readonly) UIView * iconImageView;
@property(readonly) SKUIItemOfferButton * itemOfferButton;
@property(readonly) UILabel * itemOfferNoticeLabel;
@property(readonly) UIView * removeControlView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)itemOfferButton;
- (id)removeControlView;
- (id)itemOfferNoticeLabel;
- (bool)_useCloudButtonForItemState:(id)arg1;
- (void)setItemOfferNoticeString:(id)arg1;
- (void)setDisplaysItemOfferButton:(bool)arg1;
- (id)itemOfferNoticeString;
- (void)_showItemOfferConfirmationAction:(id)arg1;
- (void)_cancelItemOfferConfirmationAction:(id)arg1;
- (bool)displaysItemOfferButton;
- (id)_parentCollectionViewCell;
- (void)_getParentTableView:(id*)arg1 collectionView:(id*)arg2;
- (bool)_canShowItemOfferNotice;
- (void)_reloadItemOfferVisibility;
- (bool)isIconImageHidden;
- (void)_reloadItemOfferButton:(bool)arg1;
- (void)layoutForItemOfferChange;
- (void)resetLayout;
- (void)setItemOfferButtonAppearance:(id)arg1;
- (void)setIconImageHidden:(bool)arg1;
- (void)setRestricted:(bool)arg1;
- (id)itemOfferButtonAppearance;
- (void)setItemState:(id)arg1 animated:(bool)arg2;
- (void)_itemOfferConfirmAction:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (id)itemState;
- (id)itemOffer;
- (void)setItemOffer:(id)arg1;
- (void)setItemState:(id)arg1;
- (void)setIconImage:(id)arg1;
- (id)iconImageView;
- (void)setBackgroundColor:(id)arg1;
- (bool)isRestricted;
- (void)dealloc;
- (void).cxx_destruct;
- (id)iconImage;
- (void)setSelected:(bool)arg1;
- (void)prepareForReuse;
- (bool)isSelected;
- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;

@end
