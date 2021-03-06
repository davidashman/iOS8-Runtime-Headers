/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSString, CKSharedItemID, CKShareID;

@interface CKCommentNotification : CKNotification <NSSecureCoding> {
    CKShareID *_shareID;
    NSString *_commentID;
    CKSharedItemID *_commentedItemID;
    NSString *_commenterID;
    NSString *_message;
}

@property(copy) CKShareID * shareID;
@property(copy) NSString * commentID;
@property(copy) CKSharedItemID * commentedItemID;
@property(copy) NSString * commenterID;
@property(copy) NSString * message;

+ (bool)supportsSecureCoding;

- (void)setCommentedItemID:(id)arg1;
- (id)commenterID;
- (id)commentedItemID;
- (void)setCommenterID:(id)arg1;
- (void)setCommentID:(id)arg1;
- (id)initWithRemoteNotificationDictionary:(id)arg1;
- (id)commentID;
- (void)setShareID:(id)arg1;
- (id)shareID;
- (id)CKPropertiesDescription;
- (void)setMessage:(id)arg1;
- (id)message;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
