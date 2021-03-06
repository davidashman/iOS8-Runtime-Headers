/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABDatePickerViewControllerDismissDelegate>, UIDatePicker;

@interface ABDatePickerViewController : UIViewController  {
    void *_context;
    UIDatePicker *_datePicker;
    <ABDatePickerViewControllerDismissDelegate> *_dismissDelegate;
}

@property void* context;
@property(retain) UIDatePicker * datePicker;
@property <ABDatePickerViewControllerDismissDelegate> * dismissDelegate;

+ (struct CGSize { double x1; double x2; })datePickerSize;

- (void)setDatePicker:(id)arg1;
- (double)ab_heightToFitForViewInPopoverView;
- (id)datePicker;
- (void*)context;
- (void)setContext:(void*)arg1;
- (void)dealloc;
- (void)setDismissDelegate:(id)arg1;
- (id)dismissDelegate;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

@end
