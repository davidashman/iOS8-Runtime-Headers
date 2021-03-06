/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIActionSheetDelegate>, NSString, UIAlertController, _UIAlertControllerShimPresenter, NSMutableArray, _UIWeakRef;

@interface UIActionSheet : UIView <UIPopoverControllerDelegate> {
    UIAlertController *_alertController;
    _UIAlertControllerShimPresenter *_presenter;
    NSMutableArray *_actions;
    long long _cancelIndex;
    long long _firstOtherButtonIndex;
    long long _destructiveButtonIndex;
    long long _actionSheetStyle;
    id _context;
    bool_hasPreparedAlertActions;
    bool_isPresented;
    bool_alertControllerShouldDismiss;
    bool_handlingAlertActionShouldDismiss;
    bool_dismissingAlertController;
    _UIWeakRef *_weakDelegate;
}

@property <UIActionSheetDelegate> * delegate;
@property(copy) NSString * title;
@property long long actionSheetStyle;
@property(readonly) long long numberOfButtons;
@property long long cancelButtonIndex;
@property long long destructiveButtonIndex;
@property(readonly) long long firstOtherButtonIndex;
@property(getter=isVisible,readonly) bool visible;
@property(retain) _UIWeakRef * weakDelegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (Class)_popoverControllerClass;
+ (bool)_isAlertControllerShimClass;

- (id)context;
- (void)setContext:(id)arg1;
- (void)setMessage:(id)arg1;
- (id)message;
- (bool)isVisible;
- (id)_contentView;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)_addMediaButtonWithTitle:(id)arg1 iconView:(id)arg2 andTableIconView:(id)arg3;
- (id)addMediaButtonWithTitle:(id)arg1 iconView:(id)arg2 andTableIconView:(id)arg3;
- (void)_setContentView:(id)arg1;
- (id)_attributedTitleString;
- (void)_setAttributedTitleString:(id)arg1;
- (void)setSelectedButtonGlyphHighlightedImage:(id)arg1;
- (void)setSelectedButtonGlyphImage:(id)arg1;
- (id)_indexesOfSelectedButtons;
- (void)_toggleButtonSelectionAtIndex:(unsigned long long)arg1;
- (void)_setIndexesOfSelectedButtons:(id)arg1;
- (bool)useThreeColumnsButtonsLayout;
- (void)setUseThreeColumnsButtonsLayout:(bool)arg1;
- (void)setInPopover:(bool)arg1;
- (void)presentSheetInContentView:(id)arg1;
- (id)_relinquishPopoverController;
- (void)presentFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 direction:(unsigned long long)arg3 allowInteractionWithViews:(id)arg4 backgroundStyle:(long long)arg5 animated:(bool)arg6;
- (void)presentFromBarButtonItem:(id)arg1 direction:(unsigned long long)arg2 allowInteractionWithViews:(id)arg3 backgroundStyle:(long long)arg4 animated:(bool)arg5;
- (void)showFromTabBar:(id)arg1;
- (void)showFromToolbar:(id)arg1;
- (long long)destructiveButtonIndex;
- (long long)actionSheetStyle;
- (void)setActionSheetStyle:(long long)arg1;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (void)setIndexOfSelectedButton:(long long)arg1;
- (void)showFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(bool)arg3;
- (void)showFromBarButtonItem:(id)arg1 animated:(bool)arg2;
- (void)setDestructiveButtonIndex:(long long)arg1;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2;
- (bool)_isSBAlert;
- (int)numberOfLinesInTitle;
- (void)setDimsBackground:(bool)arg1;
- (void)setDimView:(id)arg1;
- (void)setTitleMaxLineCount:(int)arg1;
- (void)presentSheetInView:(id)arg1;
- (id)buttonTitleAtIndex:(long long)arg1;
- (id)_buttonAtIndex:(long long)arg1;
- (id)buttonAtIndex:(long long)arg1;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (void)setTaglineText:(id)arg1;
- (id)bodyText;
- (void)setBodyText:(id)arg1;
- (void)_setIsPresented:(bool)arg1;
- (long long)numberOfButtons;
- (void)_prepareAlertActions;
- (void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(bool)arg2;
- (id)_alertController;
- (id)weakDelegate;
- (void)setWeakDelegate:(id)arg1;
- (id)_preparedAlertActionAtIndex:(unsigned long long)arg1;
- (bool)_prepareToDismissForTappedIndex:(long long)arg1;
- (void)_dismissForTappedIndex:(long long)arg1;
- (void)_setFirstOtherButtonIndex:(long long)arg1;
- (long long)firstOtherButtonIndex;
- (void)setDefaultButtonIndex:(long long)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)showInView:(id)arg1;
- (id)subtitle;
- (id)_titleLabel;
- (void)setCancelButtonIndex:(long long)arg1;
- (long long)addButtonWithTitle:(id)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(bool)arg2;
- (long long)cancelButtonIndex;
- (void)showFromObject:(id)arg1 animated:(bool)arg2;

@end
