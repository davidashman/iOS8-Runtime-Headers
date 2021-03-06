/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, MFActivityMonitor, MFAccount, MFMonitoredInvocation, MFError;

@interface MFAccountValidator : NSObject  {
    MFAccount *_account;
    id _delegate;
    MFActivityMonitor *_accountValidationActivity;
    MFMonitoredInvocation *_validationInvocation;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    struct { 
        unsigned int useSSL : 1; 
        unsigned int incomingServerSupportsSSL : 1; 
        unsigned int smtpServerSupportsSSL : 1; 
        unsigned int canceled : 1; 
        unsigned int performsValidationInBackground : 1; 
        unsigned int unused : 27; 
    } _flags;
    MFError *_incomingServerValidationError;
    MFError *_smtpServerValidationError;
    NSArray *_incomingServerAuthSchemes;
    NSArray *_smtpServerAuthSchemes;
}

@property id delegate;
@property(readonly) bool accountIsValid;
@property(readonly) bool accountSupportsSSL;
@property(readonly) MFError * error;
@property(readonly) MFAccount * account;
@property(readonly) bool performsValidationInBackground;
@property(readonly) MFMonitoredInvocation * validationInvocation;


- (void)cancelValidation;
- (bool)accountSupportsSSL;
- (id)validationInvocation;
- (bool)accountValidationCanceled;
- (id)_ispAccountInfo;
- (void)validateAccountWithoutFallbacks:(id)arg1;
- (bool)_incomingServerValid;
- (bool)_outgoingServerValid;
- (bool)performsValidationInBackground;
- (void)_validateAccountWithoutFallbacks:(id)arg1;
- (void)_validateAccount:(id)arg1;
- (void)_backgroundValidateAccountFinished:(id)arg1 authSchemes:(id)arg2;
- (void)validateAccountWithoutFallbacks:(id)arg1 withCompletion:(id)arg2;
- (void)_validateAccount:(id)arg1 withFallbacks:(bool)arg2;
- (void)validateAccount:(id)arg1 useSSL:(bool)arg2 withCompletion:(id)arg3;
- (id)initWithPerformsValidationInBackground:(bool)arg1;
- (bool)accountIsValid;
- (void)validateAccount:(id)arg1 useSSL:(bool)arg2;
- (id)account;
- (void)stop;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)error;
- (void)dealloc;

@end
