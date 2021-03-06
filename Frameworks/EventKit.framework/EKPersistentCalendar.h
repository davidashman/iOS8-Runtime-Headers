/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, NSSet, NSURL, EKPersistentSource;

@interface EKPersistentCalendar : EKPersistentObject  {
}

@property(retain) EKPersistentSource * source;
@property(readonly) NSString * UUID;
@property(copy) NSString * title;
@property(copy) NSString * externalID;
@property(copy) NSString * externalModificationTag;
@property int displayOrder;
@property(copy) NSString * colorString;
@property(getter=isColorDisplayOnly) bool colorDisplayOnly;
@property(copy) NSString * symbolicColorName;
@property unsigned long long allowedEntityTypes;
@property bool allowsContentModifications;
@property bool prohibitsScheduling;
@property(getter=isSubscribed) bool subscribed;
@property(getter=isHidden) bool hidden;
@property(getter=isImmutable) bool immutable;
@property(getter=isSharingInvitation) bool sharingInvitation;
@property bool canBePublished;
@property bool canBeShared;
@property bool schedulingProhibited;
@property bool isFacebookBirthdayCalendar;
@property bool isHolidaySubscribedCalendar;
@property bool isFamilyCalendar;
@property bool isMarkedUndeletable;
@property bool isMarkedImmutableSharees;
@property bool isIgnoringEventAlerts;
@property bool isIgnoringSharedCalendarNotifications;
@property(readonly) bool isDefaultCalendarForSource;
@property long long sharingStatus;
@property unsigned long long invitationStatus;
@property(copy) NSString * sharedOwnerName;
@property(copy) NSURL * sharedOwnerAddress;
@property long long sharingInvitationResponse;
@property(copy) NSSet * sharees;
@property(copy) NSString * publishedURL;
@property(getter=isPublished) bool published;
@property(copy) NSString * selfIdentityDisplayName;
@property(copy) NSString * selfIdentityEmail;
@property(copy) NSURL * selfIdentityAddress;
@property(copy) NSString * selfIdentityFirstName;
@property(copy) NSString * selfIdentityLastName;
@property(copy) NSString * ownerIdentityDisplayName;
@property(copy) NSString * ownerIdentityEmail;
@property(copy) NSURL * ownerIdentityAddress;
@property(copy) NSString * ownerIdentityFirstName;
@property(copy) NSString * ownerIdentityLastName;
@property(copy) NSString * bulkRequests;
@property(copy) NSString * subcalAccountID;
@property(copy) NSString * pushKey;

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (id)calendar;

- (void)setPublished:(bool)arg1;
- (void)setIsPublished:(bool)arg1;
- (void)setSharingStatus:(long long)arg1;
- (void)setColorString:(id)arg1;
- (bool)isPublished;
- (void)setPublishedURL:(id)arg1;
- (void)setIsFamilyCalendar:(bool)arg1;
- (void)setSubscribed:(bool)arg1;
- (void)setIsMarkedUndeletable:(bool)arg1;
- (void)setIsMarkedImmutableSharees:(bool)arg1;
- (bool)canBeShared;
- (id)symbolicColorName;
- (bool)isMarkedImmutableSharees;
- (bool)isMarkedUndeletable;
- (bool)isFamilyCalendar;
- (bool)canBePublished;
- (void)setSharees:(id)arg1;
- (void)setSymbolicColorName:(id)arg1;
- (bool)validate:(id*)arg1;
- (void)setBulkRequests:(id)arg1;
- (void)setPushKey:(id)arg1;
- (id)bulkRequests;
- (id)pushKey;
- (void)setIsHolidaySubscribedCalendar:(bool)arg1;
- (void)setIsFacebookBirthdayCalendar:(bool)arg1;
- (void)setSchedulingProhibited:(bool)arg1;
- (void)setSharingInvitation:(bool)arg1;
- (void)setImmutable:(bool)arg1;
- (void)setProhibitsScheduling:(bool)arg1;
- (void)setAllowsContentModifications:(bool)arg1;
- (void)setUUID:(id)arg1;
- (void)setColorDisplayOnly:(bool)arg1;
- (bool)isColorDisplayOnly;
- (void)setDigest:(id)arg1;
- (id)digest;
- (void)setSubcalAccountID:(id)arg1;
- (id)subcalAccountID;
- (void)setOwnerIdentityLastName:(id)arg1;
- (void)setOwnerIdentityFirstName:(id)arg1;
- (void)setOwnerIdentityAddress:(id)arg1;
- (id)ownerIdentityAddress;
- (void)setOwnerIdentityEmail:(id)arg1;
- (id)ownerIdentityEmail;
- (void)setOwnerIdentityDisplayName:(id)arg1;
- (id)ownerIdentityDisplayName;
- (void)setSelfIdentityLastName:(id)arg1;
- (void)setSelfIdentityFirstName:(id)arg1;
- (void)setSelfIdentityAddress:(id)arg1;
- (id)selfIdentityAddress;
- (void)setSelfIdentityEmail:(id)arg1;
- (id)selfIdentityEmail;
- (void)setSelfIdentityDisplayName:(id)arg1;
- (id)selfIdentityDisplayName;
- (void)removeSharee:(id)arg1;
- (void)addSharee:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (id)externalModificationTag;
- (void)setIsIgnoringSharedCalendarNotifications:(bool)arg1;
- (bool)isIgnoringSharedCalendarNotifications;
- (void)setIsIgnoringEventAlerts:(bool)arg1;
- (bool)isIgnoringEventAlerts;
- (bool)isHolidaySubscribedCalendar;
- (bool)isFacebookBirthdayCalendar;
- (bool)schedulingProhibited;
- (id)publishedURL;
- (void)setSharedOwnerAddress:(id)arg1;
- (id)sharedOwnerName;
- (void)setSharedOwnerName:(id)arg1;
- (long long)sharingInvitationResponse;
- (void)setSharingInvitationResponse:(long long)arg1;
- (void)setInvitationStatus:(unsigned long long)arg1;
- (unsigned long long)invitationStatus;
- (bool)isSharingInvitation;
- (bool)prohibitsScheduling;
- (bool)isDefaultCalendarForSource;
- (void)setDisplayOrder:(int)arg1;
- (int)displayOrder;
- (bool)isImmutable;
- (id)ownerIdentityLastName;
- (id)ownerIdentityFirstName;
- (id)selfIdentityLastName;
- (id)selfIdentityFirstName;
- (void)setCanBePublished:(bool)arg1;
- (void)setCanBeShared:(bool)arg1;
- (id)sharees;
- (long long)sharingStatus;
- (id)sharedOwnerAddress;
- (bool)isSubscribed;
- (id)colorString;
- (void)setAllowedEntityTypes:(unsigned long long)arg1;
- (bool)allowsContentModifications;
- (unsigned long long)allowedEntityTypes;
- (int)entityType;
- (id)externalID;
- (void)setExternalID:(id)arg1;
- (void)setHidden:(bool)arg1;
- (id)source;
- (id)UUID;
- (void)setTitle:(id)arg1;
- (id)title;
- (bool)isHidden;
- (void)setSource:(id)arg1;
- (id)init;
- (id)description;

@end
