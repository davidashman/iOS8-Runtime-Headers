/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Accounts.framework/Accounts
 */

@class NSString, NSSet, NSURL, ACAccountStore;

@interface ACAccountType : NSObject <NSSecureCoding> {
    NSString *_accountTypeDescription;
    NSString *_identifier;
    NSString *_credentialType;
    NSURL *_objectID;
    int _visibility;
    NSString *_credentialProtectionPolicy;
    ACAccountStore *_accountStore;
    int _supportsAuthentication;
    bool_supportsMultipleAccounts;
    NSSet *_supportedDataclasses;
    NSSet *_syncableDataclasses;
    NSSet *_accessKeys;
    bool_encryptAccountProperties;
    NSString *_owningBundleID;
    NSString *_owningTeamID;
}

@property(readonly) NSString * accountTypeDescription;
@property(readonly) NSString * identifier;
@property(readonly) bool accessGranted;
@property(retain) NSURL * objectID;
@property int visibility;
@property(copy) id credentialProtectionPolicy;
@property(retain) NSString * credentialType;
@property ACAccountStore * accountStore;
@property int supportsAuthentication;
@property bool supportsMultipleAccounts;
@property(retain) NSString * owningBundleID;
@property(readonly) NSSet * supportedDataclasses;
@property(readonly) NSSet * syncableDataclasses;
@property(readonly) NSSet * accessKeys;
@property(readonly) NSString * fullDescription;
@property(readonly) bool encryptAccountProperties;
@property(retain) NSString * owningTeamID;

+ (bool)supportsSecureCoding;

- (void)setObjectID:(id)arg1;
- (id)objectID;
- (void)setOwningTeamID:(id)arg1;
- (id)owningTeamID;
- (void)setSupportsMultipleAccounts:(bool)arg1;
- (bool)accessGranted;
- (void)setCredentialProtectionPolicy:(id)arg1;
- (void)setAccountTypeDescription:(id)arg1;
- (id)initWithManagedAccountType:(id)arg1 accountStore:(id)arg2;
- (id)initWithIdentifier:(id)arg1 description:(id)arg2;
- (id)supportedDataclasses;
- (id)credentialProtectionPolicy;
- (void)setOwningBundleID:(id)arg1;
- (id)fullDescription;
- (id)syncableDataclasses;
- (void)setSupportsAuthentication:(int)arg1;
- (id)accountTypeDescription;
- (void)setCredentialType:(id)arg1;
- (bool)encryptAccountProperties;
- (id)owningBundleID;
- (id)credentialType;
- (id)initWithManagedAccountType:(id)arg1;
- (int)supportsAuthentication;
- (bool)supportsMultipleAccounts;
- (id)accountStore;
- (id)accessKeys;
- (void)setAccountStore:(id)arg1;
- (void)setVisibility:(int)arg1;
- (int)visibility;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
