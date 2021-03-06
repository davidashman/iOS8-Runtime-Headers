/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString, NSArray, NSMutableArray, MFComposeRecipient;

@interface PLInvitationRecipient : NSObject  {
    MFComposeRecipient *_mfRecipient;
    NSString *_firstName;
    NSString *_lastName;
    NSMutableArray *_allEmails;
    NSMutableArray *_allPhones;
    NSString *_selectedPhoneString;
    NSString *_selectedEmailString;
    NSString *_invalidAddressString;
}

@property(readonly) NSString * firstName;
@property(readonly) NSString * lastName;
@property(readonly) NSArray * allEmails;
@property(readonly) NSArray * allPhones;
@property(readonly) NSString * selectedPhoneString;
@property(readonly) NSString * selectedEmailString;
@property(readonly) NSString * invalidAddressString;

+ (id)validEmailAddressFromComposeRecipient:(id)arg1;
+ (id)validPhoneNumberFromString:(id)arg1;

- (id)invalidAddressString;
- (id)selectedEmailString;
- (id)selectedPhoneString;
- (id)initWithRecipient:(id)arg1;
- (id)allPhones;
- (id)allEmails;
- (id)lastName;
- (id)firstName;
- (void)dealloc;
- (id)description;
- (id)displayName;

@end
