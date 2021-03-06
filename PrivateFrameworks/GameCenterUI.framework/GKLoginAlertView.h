/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSString;

@interface GKLoginAlertView : UIAlertView <UITextFieldDelegate> {
    NSString *_username;
    unsigned long long _passwordFieldIndex;
}

@property(copy) NSString * username;
@property(copy) NSString * password;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithDelegate:(id)arg1 uneditableUsername:(id)arg2;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (id)password;
- (void)dealloc;
- (void)_updateFrameForDisplay;
- (bool)textFieldShouldReturn:(id)arg1;

@end
