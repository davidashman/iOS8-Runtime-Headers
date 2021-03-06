/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, UITextField, AlphanumericPINTableViewCell, UITableView;

@interface AlphanumericPINView : PINView <UITableViewDataSource> {
    UITextField *_passcodeField;
    AlphanumericPINTableViewCell *_cell;
    UITableView *_table;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)okButtonPressed:(id)arg1;
- (void)setBlocked:(bool)arg1;
- (void)hidePasscodeField:(bool)arg1;
- (void)showError:(id)arg1 animate:(bool)arg2;
- (void)setTextFieldKeyboardAppearance:(long long)arg1;
- (void)setTextFieldKeyboardType:(long long)arg1;
- (void)setStringValue:(id)arg1;
- (bool)resignFirstResponder;
- (bool)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)stringValue;
- (void)appendString:(id)arg1;
- (void)dealloc;
- (void)deleteLastCharacter;
- (bool)textFieldShouldReturn:(id)arg1;
- (bool)keyboardInputChanged:(id)arg1;
- (bool)canBecomeFirstResponder;
- (bool)isFirstResponder;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)layoutSubviews;

@end
