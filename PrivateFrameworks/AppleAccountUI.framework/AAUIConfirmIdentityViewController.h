/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class UIView, AAUIProfilePictureStore, UIImage, NSString, NSValue, UIButton, ACAccount, UIImagePickerController, <AAUIConfirmIdentityViewControllerDelegate>, UILabel, UIScrollView;

@interface AAUIConfirmIdentityViewController : UIViewController <UIImagePickerControllerDelegate, UIActionSheetDelegate, UINavigationControllerDelegate> {
    ACAccount *_account;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIView *_profilePhotoView;
    UILabel *_nameLabel;
    UILabel *_emailLabel;
    UIButton *_continueButton;
    UIButton *_useDifferentIDButton;
    AAUIProfilePictureStore *_profilePictureStore;
    UIImage *_newProfilePicture;
    NSValue *_newProfilePictureCropRect;
    UIImagePickerController *_imagePicker;
    <AAUIConfirmIdentityViewControllerDelegate> *_delegate;
}

@property <AAUIConfirmIdentityViewControllerDelegate> * delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)_updateViewsInPhotoArea:(id)arg1;
- (void)_presentImagePickerWithSourceType:(long long)arg1;
- (void)_showImageSourcePicker;
- (bool)shouldShowInviteeInstructions;
- (void)_showImagePickerForAvailableSources;
- (double)_heightForText:(id)arg1 width:(double)arg2;
- (void)_useDifferentIDButtonWasTapped:(id)arg1;
- (void)continueButtonWasTapped:(id)arg1;
- (id)titleForContinuebutton;
- (void)_addPhotoButtonWasTapped:(id)arg1;
- (void)_photoWasTapped:(id)arg1;
- (id)initWithGrandSlamSigner:(id)arg1;
- (id)instructions;
- (id)pageTitle;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

@end
