/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, ACAccountStore, SUScriptAppleAccount;

@interface SUScriptAppleAccountStore : SUScriptObject  {
    ACAccountStore *_accountStore;
    NSString *_effectiveBundleID;
}

@property(readonly) NSString * effectiveBundleID;
@property(readonly) SUScriptAppleAccount * primaryAppleAccount;
@property(readonly) NSString * accessPurposeRead;
@property(readonly) NSString * accessPurposeReadWrite;
@property(readonly) NSString * accessPurposeWrite;
@property(readonly) NSString * accountTypeIdentifierFacebook;
@property(readonly) NSString * accountTypeIdentifierSinaWeibo;
@property(readonly) NSString * accountTypeIdentifierTwitter;
@property(readonly) long long renewResultFailed;
@property(readonly) long long renewResultRejected;
@property(readonly) long long renewResultRenewed;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (long long)renewResultRenewed;
- (long long)renewResultRejected;
- (long long)renewResultFailed;
- (id)accountTypeIdentifierTwitter;
- (id)accountTypeIdentifierSinaWeibo;
- (id)accountTypeIdentifierFacebook;
- (id)accessPurposeWrite;
- (id)accessPurposeReadWrite;
- (id)accessPurposeRead;
- (void)setEffectiveBundleID:(id)arg1;
- (void)requestAccessWithInfo:(id)arg1 completionHandler:(id)arg2;
- (void)renewCredentialsForAccount:(id)arg1 completionHandler:(id)arg2;
- (id)makeClientAccessInfoWithAccountType:(id)arg1;
- (void)_accountStoreChangeNotification:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)accountTypeWithIdentifier:(id)arg1;
- (id)_accountStore;
- (id)primaryAppleAccount;
- (id)effectiveBundleID;
- (id)accountsWithAccountType:(id)arg1;
- (id)attributeKeys;
- (id)init;
- (void)dealloc;

@end
