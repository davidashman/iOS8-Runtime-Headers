/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLTextView, UITextField, NSString, UILabel;

@interface PLTableViewEditableCell : UITableViewCell <UITextViewDelegate, UITextFieldDelegate> {
    PLTextView *_textView;
    UITextField *_textField;
    UILabel *_sizeTextLabel;
    id _delegate;
    bool_forceFirstResponder;
    int _cellStyle;
}

@property int style;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)posterCellIdentifier;

- (id)sizeTextLabel;
- (void)forceFirstResponder:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cellStyle:(int)arg2;
- (id)initHDSDCell;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 multiLine:(bool)arg2;
- (void)_textFieldChanged;
- (void)setPlaceholderText:(id)arg1;
- (bool)isEditing;
- (id)value;
- (void)setValue:(id)arg1;
- (bool)resignFirstResponder;
- (bool)becomeFirstResponder;
- (void)setStyle:(int)arg1;
- (int)style;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)textViewDidChange:(id)arg1;
- (bool)textViewShouldEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)layoutSubviews;

@end
