/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class NSMutableDictionary, NSArray, <TPStarkInCallButtonsViewDelegate>, NSMutableArray;

@interface TPStarkInCallButtonsView : UIView  {
    long long _highlightedControlIndex;
    int _buttonsMode;
    float _buttonDistributionScalingFactor;
    <TPStarkInCallButtonsViewDelegate> *_delegate;
    NSMutableDictionary *_buttonsDictionary;
    NSArray *_buttonsArray;
    NSMutableArray *_buttonDividerViews;
}

@property int buttonsMode;
@property <TPStarkInCallButtonsViewDelegate> * delegate;
@property long long highlightedControlIndex;
@property(readonly) long long numberOfControls;
@property float buttonDistributionScalingFactor;
@property(retain) NSMutableDictionary * buttonsDictionary;
@property(retain) NSArray * buttonsArray;
@property(retain) NSMutableArray * buttonDividerViews;


- (void)setButtonsMode:(int)arg1;
- (int)buttonsMode;
- (id)keyForButtonType:(int)arg1;
- (float)buttonDistributionScalingFactor;
- (float)distributedFractionForUndistributedFraction:(float)arg1;
- (id)buttonsDictionary;
- (void)updateButtonsForCallModelState;
- (void)removeButtons:(id)arg1;
- (void)applyHorizontalPositioningConstraintWithFraction:(float)arg1 forDividerView:(id)arg2;
- (id)buttonDividerViews;
- (void)applyHorizontalPositioningConstraintWithFraction:(float)arg1 forButton:(id)arg2;
- (id)existingButtonsNotInArray:(id)arg1;
- (void)setButtonsArray:(id)arg1;
- (id)buttonForButtonType:(int)arg1 createIfNecessary:(bool)arg2 createWithHorizontalPositionFraction:(float)arg3;
- (void)buttonWasTapped:(id)arg1;
- (id)buttonsArray;
- (void)phoneCallStatusChangedNotification:(id)arg1;
- (void)callCenterModelStateChangedNotification:(id)arg1;
- (void)setButtonDividerViews:(id)arg1;
- (void)setButtonsDictionary:(id)arg1;
- (void)setButtonDistributionScalingFactor:(float)arg1;
- (void)performActionForHighlightedControl;
- (long long)numberOfControls;
- (long long)nextHighlightableControlFromIndex:(long long)arg1 ascending:(bool)arg2;
- (long long)highlightedControlIndex;
- (void)setHighlightedControlIndex:(long long)arg1;
- (void)setButtonsMode:(int)arg1 animated:(bool)arg2;
- (bool)shouldShowActionTypeSendToVoicemail;
- (void)setMuted:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (bool)canBecomeFirstResponder;

@end
