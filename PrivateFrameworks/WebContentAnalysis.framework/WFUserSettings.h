/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@class NSString, NSDictionary, NSArray, WFWhitelistSiteBuffer;

@interface WFUserSettings : NSObject  {
    NSDictionary *_userSettings;
    NSString *_userName;
    WFWhitelistSiteBuffer *_contentFilterOverriddenWhiteListedSitesBuffer;
    WFWhitelistSiteBuffer *_contentFilterOverriddenBlackListedSitesBuffer;
    WFWhitelistSiteBuffer *_whiteListedSitesBuffer;
}

@property(copy) NSString * userName;
@property long long restrictionType;
@property(readonly) bool canEditRestrictionType;
@property(retain) NSArray * contentFilterOverriddenWhiteListedSites;
@property(readonly) bool canEditContentFilterOverriddenWhiteListedSites;
@property(retain) NSArray * contentFilterOverriddenBlackListedSites;
@property(readonly) bool canEditContentFilterOverriddenBlackListedSites;
@property(retain) NSArray * whiteListAllowedSites;
@property(readonly) bool canEditWhiteListAllowedSites;
@property bool overridesAllowed;
@property(readonly) bool canEditOverridesAllowed;

+ (bool)_isURLMetasite:(id)arg1;
+ (id)_sharedMetasiteExceptionsDomainNamesArray;
+ (id)_sharedMetasiteDomainNamesDictionary;
+ (id)_metasiteDomainNamesArray;
+ (id)metasitesExceptionPath;
+ (id)_arrayByConvertingLinesInStringsAtPath:(id)arg1;
+ (id)metasitesPath;

- (void)setWhiteListEnabled:(bool)arg1;
- (void)setContentFilterOverridesEnabled:(bool)arg1;
- (void)setContentFilterEnabled:(bool)arg1;
- (void)setRestrictWebEnabled:(bool)arg1;
- (bool)restrictWebEnabled;
- (bool)canEditAlwaysAllowHTTPS;
- (bool)canEditOverridesAllowed;
- (void)setOverridesAllowed:(bool)arg1;
- (bool)canEditWhiteListAllowedSites;
- (void)setWhiteListAllowedSites:(id)arg1;
- (bool)canEditContentFilterOverriddenBlackListedSites;
- (void)setContentFilterOverriddenBlackListedSites:(id)arg1;
- (bool)canEditContentFilterOverriddenWhiteListedSites;
- (void)setContentFilterOverriddenWhiteListedSites:(id)arg1;
- (id)contentFilterOverriddenSites;
- (bool)canEditRestrictionType;
- (id)whiteListedSitesBuffer;
- (id)contentFilterOverriddenBlackListedSitesBuffer;
- (bool)contentFilterOverriddenList:(id)arg1 containsURL:(id)arg2;
- (id)contentFilterOverriddenWhiteListedSitesBuffer;
- (id)contentFilterOverriddenBlackListedSites;
- (id)contentFilterOverriddenWhiteListedSites;
- (void)setRestrictionType:(long long)arg1;
- (bool)_addManagedDefaults:(id)arg1;
- (id)_userSettingsForUser:(id)arg1;
- (bool)_setManagedDefaults:(id)arg1;
- (id)_managedDefaultsPath;
- (bool)whiteListContainsURL:(id)arg1;
- (bool)contentFilterOverriddenWhiteListContainsURL:(id)arg1;
- (bool)autoWhitelistContainsURL:(id)arg1;
- (bool)contentFilterEnabled;
- (bool)contentFilterOverriddenBlackListContainsURL:(id)arg1;
- (bool)overridesAllowed;
- (void)setAlwaysAllowHTTPS:(bool)arg1;
- (bool)alwaysAllowHTTPS;
- (void)setUserName:(id)arg1;
- (long long)restrictionType;
- (id)initWithUserName:(id)arg1;
- (id)whiteListAllowedSites;
- (bool)whiteListEnabled;
- (bool)contentFilterOverridesEnabled;
- (bool)contentFilterListsAllowURL:(id)arg1;
- (void)dealloc;
- (id)userName;

@end
