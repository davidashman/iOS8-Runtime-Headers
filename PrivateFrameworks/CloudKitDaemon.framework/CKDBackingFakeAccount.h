/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, NSDictionary, NSObject<OS_dispatch_queue>;

@interface CKDBackingFakeAccount : CKDBackingAccount  {
    NSString *_dsid;
    NSString *_identifier;
    NSString *_primaryEmail;
    NSString *_password;
    NSDictionary *_accountBag;
    NSObject<OS_dispatch_queue> *_fakeAccountInfoQueue;
}

@property(retain) NSString * identifier;
@property(retain) NSString * primaryEmail;
@property(retain) NSString * password;
@property(retain) NSString * dsid;
@property(retain) NSDictionary * accountBag;
@property(retain) NSObject<OS_dispatch_queue> * fakeAccountInfoQueue;

+ (Class)_platformBackingAccountClass;
+ (id)fakeAccountWithEmail:(id)arg1 password:(id)arg2;

- (void)setFakeAccountInfoQueue:(id)arg1;
- (void)setPrimaryEmail:(id)arg1;
- (id)accountPropertiesForDataclass:(id)arg1;
- (id)ckAccount;
- (id)accountBag;
- (id)_initFakeAccountWithEmail:(id)arg1 password:(id)arg2;
- (id)fakeAccountInfoQueue;
- (void)setAccountBag:(id)arg1;
- (void)renewAuthTokenInStore:(id)arg1 withCompletionHandler:(id)arg2;
- (id)cloudKitAuthToken;
- (bool)isFakeAccount;
- (id)dsid;
- (void)setDsid:(id)arg1;
- (id)iCloudAuthToken;
- (id)primaryEmail;
- (void)setPassword:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)password;
- (bool)allowsCellularAccess;
- (void).cxx_destruct;

@end
