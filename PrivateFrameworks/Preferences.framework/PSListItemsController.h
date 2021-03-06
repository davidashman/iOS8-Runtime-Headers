/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier;

@interface PSListItemsController : PSListController  {
    long long _rowToSelect;
    bool_deferItemSelection;
    bool_restrictionList;
    PSSpecifier *_lastSelectedSpecifier;
}


- (void)setIsRestrictionList:(bool)arg1;
- (bool)isRestrictionList;
- (id)itemsFromDataSource;
- (id)itemsFromParent;
- (void)_addStaticText:(id)arg1;
- (void)listItemSelected:(id)arg1;
- (void)setRowToSelect;
- (void)setValueForSpecifier:(id)arg1 defaultValue:(id)arg2;
- (void)scrollToSelectedCell;
- (void)didLock;
- (void)prepareSpecifiersMetadata;
- (id)specifiers;
- (void)suspend;
- (void)dealloc;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
