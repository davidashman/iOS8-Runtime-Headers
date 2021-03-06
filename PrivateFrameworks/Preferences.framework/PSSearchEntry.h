/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifierAction, PSSpecifier, NSString, NSMutableSet, PSSearchEntry, NSMutableArray;

@interface PSSearchEntry : NSObject  {
    PSSearchEntry *_parentEntry;
    NSMutableSet *_childEntries;
    PSSpecifier *_specifier;
    NSString *_plistName;
    NSString *_bundleName;
    NSString *_manifestBundleName;
    PSSpecifier *_groupSpecifier;
    NSMutableArray *_keywords;
    PSSpecifierAction *_action;
}

@property PSSearchEntry * parentEntry;
@property(retain,readonly) NSMutableSet * childEntries;
@property(retain,readonly) PSSpecifier * specifier;
@property(copy,readonly) NSString * identifier;
@property(copy,readonly) NSString * name;
@property(copy) NSString * plistName;
@property(copy) NSString * bundleName;
@property(copy) NSString * manifestBundleName;
@property(retain) PSSpecifier * groupSpecifier;
@property(retain,readonly) NSMutableArray * keywords;
@property(retain) PSSpecifierAction * action;


- (void)setParentEntry:(id)arg1;
- (id)hierarchyDescription;
- (bool)_hasDetailController:(bool)arg1;
- (bool)isRootEntry;
- (bool)hasDetailController;
- (void)setManifestBundleName:(id)arg1;
- (id)keywords;
- (void)setGroupSpecifier:(id)arg1;
- (void)setPlistName:(id)arg1;
- (id)initWithSpecifier:(id)arg1 parent:(id)arg2;
- (id)plistName;
- (id)ancestorEntries;
- (id)parentEntry;
- (id)manifestBundleName;
- (bool)treeContainsPropertyForKey:(id)arg1;
- (id)sectionEntry;
- (bool)isSectionEntry;
- (id)rootEntry;
- (bool)hasListController;
- (id)childEntries;
- (id)groupSpecifier;
- (id)specifier;
- (id)action;
- (void)setAction:(id)arg1;
- (id)identifier;
- (id)bundleName;
- (void)setBundleName:(id)arg1;
- (id)debugDescription;
- (id)name;
- (void)dealloc;
- (id)description;

@end
