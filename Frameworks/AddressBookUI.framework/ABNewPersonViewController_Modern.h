/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPersonViewControllerHelper, ABPersonTableViewDataSource, <ABPresenterDelegate>, NSString, CNContact, _UIAccessDeniedView, <ABStyleProvider>, ABContactViewController, <ABNewPersonViewControllerDelegate>, ABContactsFilter;

@interface ABNewPersonViewController_Modern : UIViewController <ABContactViewControllerDelegate> {
    void *_addressBook;
    void *_displayedPerson;
    <ABNewPersonViewControllerDelegate> *_newPersonViewDelegate;
    bool_isRealViewLoaded;
    ABContactViewController *_contactViewController;
    _UIAccessDeniedView *_accessDeniedView;
    void *_parentGroup;
    ABPersonViewControllerHelper *_helper;
    ABPersonTableViewDataSource *_dataSource;
    void *_parentSource;
    CNContact *_mergeContact;
    <ABStyleProvider> *_styleProvider;
    ABContactsFilter *_parentContactsFilter;
    <ABPresenterDelegate> *_presentingDelegate;
}

@property <ABNewPersonViewControllerDelegate> * newPersonViewDelegate;
@property void* addressBook;
@property void* displayedPerson;
@property void* parentGroup;
@property(readonly) ABPersonViewControllerHelper * helper;
@property(readonly) ABPersonTableViewDataSource * dataSource;
@property void* parentSource;
@property(retain) CNContact * mergeContact;
@property bool savesNewContactOnSuspend;
@property(retain) <ABStyleProvider> * styleProvider;
@property(retain) ABContactsFilter * parentContactsFilter;
@property(readonly) ABContactViewController * contactViewController;
@property <ABPresenterDelegate> * presentingDelegate;
@property bool showsCancelButton;
@property(readonly) _UIAccessDeniedView * accessDeniedView;
@property bool isRealViewLoaded;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setParentContactsFilter:(id)arg1;
- (id)parentContactsFilter;
- (id)helper;
- (bool)savesNewContactOnSuspend;
- (id)newPersonViewDelegate;
- (id)mergeContact;
- (void*)parentSource;
- (void)setIsRealViewLoaded:(bool)arg1;
- (void)loadRealView;
- (bool)isRealViewLoaded;
- (void)loadContactViewController;
- (void*)parentGroup;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (void)accessChanged;
- (void)setSavesNewContactOnSuspend:(bool)arg1;
- (void)setParentSource:(void*)arg1;
- (void)setParentGroup:(void*)arg1;
- (id)accessDeniedView;
- (void*)displayedPerson;
- (void)setPresentingDelegate:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (id)presentingDelegate;
- (void)setMergeContact:(id)arg1;
- (void)setNewPersonViewDelegate:(id)arg1;
- (id)contactViewController;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)save:(id)arg1;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (id)dataSource;
- (id)init;
- (bool)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (bool)showsCancelButton;
- (void)setShowsCancelButton:(bool)arg1;
- (id)initWithStyle:(int)arg1;
- (void)loadView;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;

@end
