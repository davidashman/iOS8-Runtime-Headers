/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class CKServerChangeToken, NSDate, BRCDatabaseManager;

@interface BRCContainerMetadataSyncPersistedState : NSObject <NSSecureCoding> {
    BRCDatabaseManager *_dbManager;
    CKServerChangeToken *_serverChangeToken;
    NSDate *_lastSyncDate;
}

@property(retain) CKServerChangeToken * serverChangeToken;
@property(retain) NSDate * lastSyncDate;

+ (id)loadFromClientStateInDBManager:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)setLastSyncDate:(id)arg1;
- (void)setServerChangeToken:(id)arg1;
- (id)lastSyncDate;
- (id)serverChangeToken;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
