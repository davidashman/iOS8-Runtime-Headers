/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPropertyCellDelegate>, UIResponder, <ABPresenterDelegate>, ABPropertyGroupItem;

@interface ABPropertyCell : ABLabeledCell  {
    bool_allowsEditing;
    UIResponder *_firstResponderItem;
    double _labelWidth;
    <ABPropertyCellDelegate> *_delegate;
    <ABPresenterDelegate> *_presentingDelegate;
}

@property(readonly) ABPropertyGroupItem * propertyItem;
@property(readonly) UIResponder * firstResponderItem;
@property bool allowsEditing;
@property double labelWidth;
@property <ABPropertyCellDelegate> * delegate;
@property <ABPresenterDelegate> * presentingDelegate;


- (double)labelWidth;
- (void)setPropertyItem:(id)arg1;
- (id)valueString;
- (void)updateValueWithPropertyItem:(id)arg1;
- (id)labelString;
- (void)setLabelWidth:(double)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (void)updateWithPropertyItem:(id)arg1;
- (id)presentingDelegate;
- (id)propertyItem;
- (id)firstResponderItem;
- (void)performAccessoryAction;
- (void)setCardGroupItem:(id)arg1;
- (void)performDefaultAction;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setAllowsEditing:(bool)arg1;
- (bool)allowsEditing;
- (void)copy:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
