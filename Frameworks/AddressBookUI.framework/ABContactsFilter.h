/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, NSString;

@interface ABContactsFilter : NSObject  {
    void *_addressBook;
    bool_showsAllContacts;
    NSArray *_groups;
    NSArray *_sources;
    void *_directorySource;
}

@property(readonly) void* addressBook;
@property(readonly) NSArray * groups;
@property(readonly) NSArray * sources;
@property(readonly) void* directorySource;
@property(readonly) NSString * name;
@property(readonly) void* sourceForNewRecords;
@property(readonly) void* groupForNewRecords;
@property(getter=isEditable,readonly) bool editable;
@property(readonly) bool isDirectory;
@property(readonly) bool shouldChangeModelSelectionWhenDisplayed;
@property(readonly) bool showsAllContacts;

+ (id)newContactsFilterFromDictionaryRepresentation:(id)arg1 withAddressBook:(void*)arg2;
+ (id)_newContactsFilterFromGroupWrapperRepresentation:(id)arg1 withAddressBook:(void*)arg2;

- (void*)sourceForNewRecords;
- (void*)groupForNewRecords;
- (bool)shouldChangeModelSelectionWhenDisplayed;
- (void)invalidateSourcesForAllContacts;
- (void*)directorySource;
- (id)_sortedRecordsForRecords:(id)arg1 byNameProperty:(int)arg2;
- (void)_getWritableSource:(const void**)arg1 andGroup:(const void**)arg2;
- (void*)_defaultSourceForAccountContainingSource:(void*)arg1;
- (id)sortedSourcesForSources:(id)arg1;
- (id)sortedGroupsForGroups:(id)arg1;
- (id)initWithDirectorySource:(void*)arg1 addressBook:(void*)arg2;
- (id)initWithGroups:(id)arg1 sources:(id)arg2 addressBook:(void*)arg3;
- (bool)showsAllContacts;
- (bool)isEditable;
- (id)copyDictionaryRepresentation;
- (id)sources;
- (id)groups;
- (void*)addressBook;
- (id)initWithAddressBook:(void*)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (void)dealloc;
- (id)description;
- (bool)isDirectory;

@end
