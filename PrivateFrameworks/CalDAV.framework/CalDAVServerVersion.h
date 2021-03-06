/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSString, NSSet;

@interface CalDAVServerVersion : NSObject <NSCopying> {
    bool_supportsTimeRangeFilter;
    bool_supportsTodoTimeRangeFilter;
    bool_supportsTimeRangeFilterWithoutEndDate;
    bool_supportsTimeRangeFilterOnInbox;
    bool_supportsAutoSchedule;
    bool_supportsPrivateComments;
    bool_supportsSharing;
    bool_supportsSharingNoScheduling;
    bool_supportsCalendarProxy;
    bool_supportsInboxAvailability;
    bool_supportsPrivateEvents;
    bool_supportsSubscriptionCalendars;
    bool_supportsPrincipalPropertySearch;
    bool_supportsExtendedCalendarQuery;
    bool_supportsRequestCompression;
    bool_supportsManagedAttachments;
    bool_supportsCheckForValidEmail;
    bool_supportsChecksumming;
    bool_supportsCalendarHomeSync;
    bool_supportsCalendarNoTimezone;
    double _version;
    NSString *_supportedCalendarComponentSets;
    NSSet *_complianceClasses;
    NSString *_serverHeader;
}

@property(readonly) NSString * type;
@property double version;
@property bool supportsTimeRangeFilter;
@property bool supportsTodoTimeRangeFilter;
@property bool supportsTimeRangeFilterWithoutEndDate;
@property bool supportsTimeRangeFilterOnInbox;
@property bool supportsAutoSchedule;
@property bool supportsPrivateComments;
@property bool supportsSharing;
@property bool supportsSharingNoScheduling;
@property bool supportsCalendarProxy;
@property bool supportsInboxAvailability;
@property bool supportsPrivateEvents;
@property bool supportsSubscriptionCalendars;
@property bool supportsPrincipalPropertySearch;
@property bool supportsExtendedCalendarQuery;
@property bool supportsRequestCompression;
@property bool supportsManagedAttachments;
@property bool supportsCheckForValidEmail;
@property bool supportsChecksumming;
@property bool supportsCalendarHomeSync;
@property(copy) NSString * supportedCalendarComponentSets;
@property bool supportsCalendarNoTimezone;
@property(retain) NSSet * complianceClasses;
@property(copy) NSString * serverHeader;

+ (id)versionWithPropertyValue:(id)arg1;
+ (id)_prototypeMatchingServerHeaders:(id)arg1;
+ (id)versionWithHTTPHeaders:(id)arg1;

- (void)setSupportsCalendarNoTimezone:(bool)arg1;
- (bool)supportsCalendarNoTimezone;
- (void)setSupportsCalendarHomeSync:(bool)arg1;
- (bool)supportsCalendarHomeSync;
- (void)setSupportsChecksumming:(bool)arg1;
- (bool)supportsChecksumming;
- (void)setSupportsCheckForValidEmail:(bool)arg1;
- (bool)supportsCheckForValidEmail;
- (void)setSupportsManagedAttachments:(bool)arg1;
- (bool)supportsManagedAttachments;
- (void)setSupportsPrincipalPropertySearch:(bool)arg1;
- (void)setSupportsSubscriptionCalendars:(bool)arg1;
- (bool)supportsSubscriptionCalendars;
- (void)setSupportsCalendarProxy:(bool)arg1;
- (bool)supportsCalendarProxy;
- (void)setSupportsSharingNoScheduling:(bool)arg1;
- (bool)supportsSharingNoScheduling;
- (void)setSupportsSharing:(bool)arg1;
- (void)setSupportsPrivateComments:(bool)arg1;
- (bool)supportsPrivateComments;
- (void)setSupportsAutoSchedule:(bool)arg1;
- (void)setSupportsTimeRangeFilterOnInbox:(bool)arg1;
- (void)setSupportsTimeRangeFilterWithoutEndDate:(bool)arg1;
- (void)setSupportsTodoTimeRangeFilter:(bool)arg1;
- (bool)supportsTodoTimeRangeFilter;
- (void)setSupportsTimeRangeFilter:(bool)arg1;
- (bool)supportsRequestCompression;
- (id)_allFlagKeys;
- (id)complianceClasses;
- (id)serverHeader;
- (void)setSupportsRequestCompression:(bool)arg1;
- (void)_setPropertiesFromComplianceClasses:(id)arg1;
- (void)setSupportsInboxAvailability:(bool)arg1;
- (bool)supportsInboxAvailability;
- (void)setComplianceClasses:(id)arg1;
- (id)_additionalFlagKeys;
- (id)_propertiesToComplianceClasses;
- (void)setServerHeader:(id)arg1;
- (bool)supportsTimeRangeFilterWithoutEndDate;
- (bool)supportsTimeRangeFilterOnInbox;
- (bool)supportsTimeRangeFilter;
- (bool)supportsAutoSchedule;
- (bool)supportsSharing;
- (void)setSupportsExtendedCalendarQuery:(bool)arg1;
- (bool)supportsExtendedCalendarQuery;
- (bool)supportsPrincipalPropertySearch;
- (id)supportedCalendarComponentSets;
- (void)setSupportedCalendarComponentSets:(id)arg1;
- (id)propertyValue;
- (void)setSupportsPrivateEvents:(bool)arg1;
- (bool)supportsPrivateEvents;
- (double)version;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)type;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setVersion:(double)arg1;

@end
