/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSSendEmail : MSMailDefaultService  {
}

+ (id)sendMessageData:(id)arg1 autosaveIdentifier:(id)arg2 completionBlock:(id)arg3;
+ (id)sendEmail:(id)arg1 playSound:(bool)arg2 completionBlock:(id)arg3;

- (void)_sendEmail:(id)arg1 playSound:(bool)arg2 completionBlock:(id)arg3;
- (void)_sendMessageData:(id)arg1 autosaveIdentifier:(id)arg2 completionBlock:(id)arg3;
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(id)arg3;

@end
