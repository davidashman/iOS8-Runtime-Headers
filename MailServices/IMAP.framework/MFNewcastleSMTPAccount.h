/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class CastleIMAPAccount;

@interface MFNewcastleSMTPAccount : SMTPAccount  {
    CastleIMAPAccount *_castleAccount;
}

@property(retain) CastleIMAPAccount * castleAccount;

+ (id)accountTypeIdentifier;

- (void)setCastleAccount:(id)arg1;
- (id)castleAccount;
- (id)mailAccountIfAvailable;
- (id)displayHostname;
- (bool)shouldUseAuthentication;
- (void)dealloc;

@end
