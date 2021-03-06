/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIWebFormAccessoryDelegate>, UIToolbar, UISegmentedControl, UIBarButtonItem;

@interface UIWebFormAccessory : UIInputView  {
    UIToolbar *_leftToolbar;
    UIToolbar *_rightToolbar;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_flexibleSpaceItem;
    UIBarButtonItem *_previousItem;
    UIBarButtonItem *_nextItem;
    UISegmentedControl *_tab;
    UIBarButtonItem *_autofill;
    UIBarButtonItem *_clearButton;
    <UIWebFormAccessoryDelegate> *delegate;
}

@property(retain) UISegmentedControl * _tab;
@property(retain) UIBarButtonItem * _autofill;
@property(retain) UIBarButtonItem * _clearButton;
@property <UIWebFormAccessoryDelegate> * delegate;
@property(getter=isNextEnabled) bool nextEnabled;
@property(getter=isPreviousEnabled) bool previousEnabled;

+ (id)toolbarWithItems:(id)arg1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)_autofill;
- (void)set_tab:(id)arg1;
- (id)_tab;
- (bool)isPreviousEnabled;
- (void)setPreviousEnabled:(bool)arg1;
- (bool)isNextEnabled;
- (void)setNextEnabled:(bool)arg1;
- (void)setClearVisible:(bool)arg1;
- (void)showAutoFillButton;
- (void)hideAutoFillButton;
- (void)set_clearButton:(id)arg1;
- (void)clear:(id)arg1;
- (void)showAutoFillButtonWithTitle:(id)arg1;
- (void)autoFill:(id)arg1;
- (void)set_autofill:(id)arg1;
- (id)_autoFillButton;
- (void)_applyTreatmentToAutoFillLabel;
- (void)_refreshAutofillPresentation;
- (void)_orientationDidChange:(id)arg1;
- (void)_updateFrame;
- (void)done:(id)arg1;
- (void)_nextTapped:(id)arg1;
- (void)_previousTapped:(id)arg1;
- (void)_tabSegmentedControlDidChange:(id)arg1;
- (id)_clearButton;
- (void)_setRenderConfig:(id)arg1;
- (void)layoutSubviews;

@end
