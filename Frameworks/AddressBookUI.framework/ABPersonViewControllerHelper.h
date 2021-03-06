/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIViewController, ABDatePickerViewController, UIBarButtonItem, ABPersonTableViewDataSource, NSIndexPath, NSString, <ABStyleProvider>, ABUIPerson, UIPopoverController, NSArray, <ABUnknownPersonViewControllerDelegate>, <ABPersonViewControllerPrivateDelegate>, UIView, ABPeoplePickerNavigationController, ABPersonTableView, ABPersonTableViewLinkingDelegate, <ABPersonEditDelegate>, <ABCardContentProvider>, UITableView, ABMultiCellContentView_RelatedName;

@interface ABPersonViewControllerHelper : NSObject <ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABPersonTableViewDataSourceDelegate, ABPickerViewControllerDismissDelegate, UIActionSheetDelegate, UIPopoverControllerDelegate, ABPopoverRepresentDelegate, ABPersonEditDelegate, ABPersonViewControllerDelegate, UIScrollViewDelegate, UIViewControllerRestoration> {
    UIViewController *_viewController;
    <ABPersonEditDelegate> *_editDelegate;
    struct __CFArray { } *_displayedProperties;
    ABDatePickerViewController *_datePickerViewController;
    bool_isAnimatingDatePickerInputView;
    bool_willPresentDatePickerViewController;
    id _activeDialog;
    id _deletionDelegate;
    id _actionSheetDelegate;
    bool_allowsSettingAsPreferredCardForName;
    bool_animatedRight;
    bool_automaticallySetEditing;
    bool_allowsAddingToAddressBook;
    bool_showsPeoplePickerCancelButton;
    bool_savesNewContactOnSuspend;
    void *_addressBook;
    struct __CFDictionary { } *_valueByProperty;
    <ABStyleProvider> *_styleProvider;
    <ABCardContentProvider> *_cardContentProvider;
    bool_isOverridingCardContentProvider;
    UIView *_cardContentProviderHeaderView;
    long long _selectedCardContentIndex;
    bool_isLocation;
    NSString *_addToPersonButtonTitle;
    UIBarButtonItem *_reusableCancelButton;
    ABPersonTableView *_controllerTableView;
    unsigned long long _modelDatabaseLocalChangeCancellationCount;
    NSIndexPath *_popoverCellIndexPath;
    NSIndexPath *_popoverViewInCellIndexPath;
    UIPopoverController *_presentationPopoverController;
    ABPeoplePickerNavigationController *_peoplePickerForLinking;
    ABPeoplePickerNavigationController *_peoplePickerForAddToContacts;
    ABPeoplePickerNavigationController *_peoplePickerForRelatedNames;
    ABMultiCellContentView_RelatedName *_relatedPersonCell;
    bool_disablePopoverUpdates;
    long long _favoritesListChangeNotificationCount;
    bool_hasAddedUnknownPersonActions;
    ABUIPerson *_displayedPerson;
    NSArray *_displayedPeople;
    ABPersonTableViewDataSource *_dataSource;
    ABPersonTableViewLinkingDelegate *_linkingDelegate;
}

@property(readonly) UIViewController * viewController;
@property <ABPersonEditDelegate> * editDelegate;
@property bool automaticallySetEditing;
@property void* addressBook;
@property(readonly) void* existingAddressBook;
@property(retain) ABUIPerson * displayedPerson;
@property(readonly) NSArray * displayedPeople;
@property(copy) NSArray * displayedProperties;
@property(getter=isReadonly,readonly) bool readonly;
@property bool showsPeoplePickerCancelButton;
@property(readonly) UIBarButtonItem * reusableCancelButton;
@property bool allowsSettingAsPreferredCardForName;
@property bool allowsAddingToAddressBook;
@property bool isLocation;
@property(retain) <ABStyleProvider> * styleProvider;
@property bool savesNewContactOnSuspend;
@property bool disablePopoverUpdates;
@property ABPersonTableViewDataSource * dataSource;
@property ABPersonTableViewLinkingDelegate * linkingDelegate;
@property(readonly) UITableView * controllerTableView;
@property(readonly) bool hasPopoverController;
@property(readonly) <ABPersonViewControllerPrivateDelegate> * personViewDelegate;
@property(readonly) <ABUnknownPersonViewControllerDelegate> * unknownPersonViewDelegate;
@property(copy) NSString * addToPersonButtonTitle;
@property(retain) NSIndexPath * popoverCellIndexPath;
@property(retain) NSIndexPath * popoverViewInCellIndexPath;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void)setAddToPersonButtonTitle:(id)arg1;
- (id)addToPersonButtonTitle;
- (void)setIsLocation:(bool)arg1;
- (bool)automaticallySetEditing;
- (void)loadUnknownViewWithPerson:(id)arg1 allowActions:(bool)arg2;
- (void)pushViewController:(id)arg1;
- (id)viewToRepresentPopover:(id)arg1;
- (void)dismissPickerViewController:(id)arg1;
- (bool)personTableViewDataSourceShouldShowContactSources:(id)arg1;
- (id)popoverViewInCellIndexPath;
- (id)popoverCellIndexPath;
- (bool)_updatePeopleDataForExternalChangeWithFullReload:(bool)arg1;
- (void)_attemptSave;
- (void)_dismissDatePickerInputViewAnimated:(bool)arg1;
- (void)presentModalViewController:(id)arg1;
- (void)_presentDatePickerViewControllerAsInputView:(id)arg1 andScrollToIndexPath:(id)arg2;
- (void)setPopoverViewInCellIndexPath:(id)arg1;
- (void)setPopoverCellIndexPath:(id)arg1;
- (void)_datePickerInputViewDismissAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (bool)shouldAnimateDatePickerInputView;
- (void)presentAddToContactsSheetIfNeeded:(id)arg1;
- (void)removeSelectedPerson;
- (void)performActionForPropertyAtIndex:(long long)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3;
- (void)performDefaultActionForPropertyAtIndex:(long long)arg1 inPropertyGroup:(id)arg2;
- (void)performInstantMessageActionForPropertyAtIndex:(long long)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3;
- (void)performSocialProfileActionForPropertyAtIndex:(long long)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3;
- (id)_chatURLWithPropertyValue:(id)arg1;
- (void)performWeiboActionForPropertyValue:(id)arg1 cell:(id)arg2;
- (void)performTwitterActionForPropertyValue:(id)arg1 cell:(id)arg2;
- (void)performAction:(int)arg1 forPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3;
- (void)performAction:(int)arg1 forPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 withContext:(void*)arg4;
- (void)showWeiboSheetForPropertyValue:(id)arg1;
- (void)showTweetSheetForPropertyValue:(id)arg1;
- (void)weiboActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)openSocialProfile:(id)arg1;
- (void)twitterActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (bool)shouldShowAddToExistingContact;
- (void)_mergeIntoDisplayedPerson:(void*)arg1;
- (bool)copyInsertValue:(id*)arg1 property:(int*)arg2 forPerson:(void*)arg3;
- (void)_presentPeoplePickerNavigationController:(id)arg1 fromView:(id)arg2 inPopover:(bool)arg3;
- (id)_preparePeoplePicker;
- (id)_newContactViewControllerForAddToContacts;
- (void)_addProperties:(id)arg1 toPerson:(id)arg2;
- (void)removeDisplayedPeople;
- (void)removeSelectedPersonFromBarButtonItem:(id)arg1;
- (void)setDatePickerViewController:(id)arg1;
- (void)updateLinkBarButtonItem;
- (id)prepareViewWithPerson:(id)arg1;
- (void)addUnknownPersonActionsIfNeeded;
- (void)presentPeoplePickerNavigationControllerForAddToContacts:(id)arg1;
- (void)presentNewContactViewControllerForAddToContacts:(id)arg1;
- (void)contentSwitchingTabsTapped:(id)arg1;
- (void)notifyScrollViewDidLoad;
- (void)setAsPreferredCardForName:(id)arg1;
- (void)_updateDisplayedPeopleForcingReloadData:(bool)arg1;
- (void)setDisplayedPeople:(id)arg1 forceReload:(bool)arg2;
- (void)updateAllowsSettingAsPreferredCardForName;
- (bool)_shouldHideContentSwitchingTabsWhenEditing:(bool)arg1;
- (id)personContainerView;
- (id)_personToUseForAddressBook;
- (void)_setCardContentProvider:(id)arg1;
- (void)_updateBackgroundForCardContentProvider;
- (void)showSelectedContentView;
- (void)updateContentSwitchingTabs;
- (void)_updateCardContentProviderHeaderViewForEditing:(bool)arg1;
- (void)_favoritesListChanged:(id)arg1;
- (void)_conferencingAvailabilityChanged:(id)arg1;
- (void)deleteDialog:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (bool)updateAllDataForExternalChange;
- (void)updateTableDataForExternalChange;
- (bool)updatePeopleDataForExternalChange;
- (void)ab_updatePopoverSize;
- (void)updateDisplayedPeopleAndReloadData;
- (void*)existingAddressBook;
- (void)didDismissModalViewController;
- (bool)makeFirstFieldBecomeFirstResponder;
- (void)addressBookChangedLocally:(struct __CFDictionary { }*)arg1;
- (void)setCardContentProvider:(id)arg1;
- (bool)allowsSettingAsPreferredCardForName;
- (id)controllerTableView;
- (bool)isLocation;
- (id)displayedPeople;
- (id)unknownPersonViewDelegate;
- (id)personViewDelegate;
- (void)personTableViewDataSource:(id)arg1 selectedImageForEditing:(bool)arg2;
- (void)personTableViewDataSource:(id)arg1 dismissDatePickerViewController:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 presentDatePickerViewController:(id)arg2 fromView:(id)arg3 passthroughViews:(id)arg4 forIndexPath:(id)arg5;
- (bool)isPresentingDatePickerViewControllerForPersonTableViewDataSource:(id)arg1;
- (void)personTableViewDataSourceWillPresentDatePickerViewController:(id)arg1;
- (bool)personTableViewDataSourceShouldPresentDatePickerViaDelegate:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 didFinishEditingProperty:(int)arg2;
- (void)personTableViewDataSource:(id)arg1 didBeginEditingProperty:(int)arg2;
- (void)setAllowsSettingAsPreferredCardForName:(bool)arg1;
- (void)_updateDisplayedPeople;
- (void)reloadNameData;
- (void)setLinkingDelegate:(id)arg1;
- (void)presentLinkingPeoplePickerForPersonTableViewDataSource:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)personTableViewDataSourceDidSwipeToDelete:(id)arg1;
- (bool)personTableViewDataSourceIsInPopover:(id)arg1;
- (void)presentPeoplePickerNavigationControllerForRelatedNames:(id)arg1;
- (void)personTableViewDataSourceSelectedAddToContacts:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 presentPickerViewController:(id)arg2 fromView:(id)arg3 forIndexPath:(id)arg4;
- (bool)personTableViewDataSource:(id)arg1 selectedPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 withMemberCell:(id)arg4 forEditing:(bool)arg5;
- (void)personTableViewDataSourceSelectedDeletePerson:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 willUpdateForEditing:(bool)arg2;
- (void)personTableViewDataSource:(id)arg1 addNonScrollableHeaderView:(id)arg2 animated:(bool)arg3;
- (double)personTableViewDataSourceHeaderPadding:(id)arg1;
- (bool)personTableViewDataSourceShouldShowHeader:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 removeNonScrollableHeaderViewAnimated:(bool)arg2;
- (void)personTableViewDataSourceHeaderHeightDidChange:(id)arg1;
- (void)personTableViewDataSourceDidReloadData:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 pushLinkedCardAtRow:(long long)arg2;
- (id)editDelegate;
- (void)personTableViewDataSource:(id)arg1 didDismissActionSheet:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 selectedAddToFavoritesActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 entryType:(int)arg4;
- (void)conference:(id)arg1 person:(id)arg2 property:(int)arg3 identifier:(int)arg4;
- (bool)personTableViewDataSourceIsLocation:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 conference:(id)arg2 person:(id)arg3 property:(int)arg4 identifier:(int)arg5;
- (void)personTableViewDataSource:(id)arg1 shareContact:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 selectedSMSActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3;
- (void)personTableViewDataSource:(id)arg1 selectedCallActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3;
- (bool)personTableViewDataSource:(id)arg1 shouldShowAction:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 presentActionSheet:(id)arg2 fromView:(id)arg3;
- (void)client:(id)arg1 didDismissActionSheet:(id)arg2;
- (id)viewForActionSheet;
- (void)setActiveDialog:(id)arg1;
- (void)setDisablePopoverUpdates:(bool)arg1;
- (bool)disablePopoverUpdates;
- (id)viewControllerToPresentModal;
- (bool)hasPopoverController;
- (void)personTableViewDataSource:(id)arg1 didUpdateValueForProperty:(int)arg2;
- (bool)personTableViewDataSourceShouldShowLinkedPeople:(id)arg1;
- (void)personTableViewDataSourceShouldIgnoreNextLocalChange:(id)arg1;
- (void)setEditDelegate:(id)arg1;
- (id)linkingDelegate;
- (void)peoplePickerNavigationController:(id)arg1 setRelatedPerson:(id)arg2;
- (void)peoplePickerNavigationController:(id)arg1 requestedLinkForPerson:(id)arg2;
- (void)loadViewWithPerson:(id)arg1 allowDeletion:(bool)arg2 allowActions:(bool)arg3;
- (id)reusableCancelButton;
- (void)ignoreNextLocalChange;
- (void)updateEditButton;
- (void)setShowsPeoplePickerCancelButton:(bool)arg1;
- (bool)showsPeoplePickerCancelButton;
- (void)setAutomaticallySetEditing:(bool)arg1;
- (id)initWithViewController:(id)arg1 style:(int)arg2;
- (bool)savesNewContactOnSuspend;
- (id)newPersonViewDelegate;
- (bool)shouldBeRemovedFromNavigationStack;
- (void)preferredPersonDidChangeToPerson:(void*)arg1;
- (void)imageUpdatedForPerson:(void*)arg1;
- (void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(bool)arg2 forPerson:(void*)arg3;
- (void)personWasDeleted;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 informDelegate:(bool)arg3;
- (bool)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(int*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5;
- (void)setSavesNewContactOnSuspend:(bool)arg1;
- (id)displayedPerson;
- (double)ab_heightToFitForViewInPopoverView;
- (void)setDisplayedProperties:(id)arg1;
- (id)displayedProperties;
- (void)setAllowsAddingToAddressBook:(bool)arg1;
- (bool)allowsAddingToAddressBook;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (bool)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (bool)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)setAllowsActions:(bool)arg1;
- (void)setDisplayedPerson:(id)arg1;
- (bool)isReadonly;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)updateRecord;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (bool)popoverControllerShouldDismissPopover:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (id)viewController;
- (void)viewWillAppear:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)reloadData;

@end
