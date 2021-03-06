/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class KeychainSyncCountryInfo, NSString, NSArray, KeychainSyncDevicePINController, PSKeychainSyncManager, PSSpecifier, UIAlertView, KeychainSyncPhoneSettingsFragment, PSSetupController;

@interface PSAccountSecurityController : PSListController <KeychainSyncViewControllerDelegate, KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate> {
    PSSpecifier *_recoverySwitch;
    NSArray *_passcodeSpecifiers;
    PSSetupController *_devicePasscodeChangeSetupController;
    KeychainSyncDevicePINController *_devicePINController;
    KeychainSyncPhoneSettingsFragment *_phoneSettingsFragment;
    NSString *_SMSTarget;
    KeychainSyncCountryInfo *_SMSTargetCountryInfo;
    bool_secureBackupEnabled;
    PSKeychainSyncManager *_manager;
    UIAlertView *_invalidPhoneNumberAlert;
    UIAlertView *_changeDevicePasscodeAlert;
    UIAlertView *_disableRecoveryConfirmationAlert;
    int _securityCodeType;
    NSString *_securityCode;
}

@property int securityCodeType;
@property(retain) NSString * securityCode;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)disableRecovery;
- (void)navDonePressed;
- (void)navCancelPressed;
- (void)saveSMSTargetChanges;
- (id)securityCode;
- (void)_showSecurityCodeChangeSheetOnSpecifier:(id)arg1;
- (void)setSecurityCode:(id)arg1;
- (void)_setShowsDoneButton:(bool)arg1;
- (id)passcodeSpecifiers;
- (id)useRecoveryForSepecifier:(id)arg1;
- (void)setUseRecovery:(id)arg1 specifier:(id)arg2;
- (void)changeSecurityCode:(id)arg1;
- (void)handleBurnedRecord;
- (void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (void)setSecurityCodeType:(int)arg1;
- (int)securityCodeType;
- (void)cancelPressed;
- (void)reloadSpecifiers;
- (id)specifiers;
- (void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3;
- (id)init;
- (void)dealloc;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

@end
