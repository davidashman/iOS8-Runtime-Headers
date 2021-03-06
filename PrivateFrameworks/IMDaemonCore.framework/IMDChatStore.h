/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class NSString;

@interface IMDChatStore : NSObject  {
    NSString *_lastModificationStamp;
}

@property(retain) NSString * modificationStamp;

+ (id)sharedInstance;

- (id)chatsWithRoomname:(id)arg1 onService:(id)arg2;
- (id)chatsWithHandle:(id)arg1 onService:(id)arg2;
- (void)unarchiveChat:(id)arg1;
- (void)archiveChat:(id)arg1;
- (id)loadAllChats;
- (void)removeMessageWithGUID:(id)arg1 fromChat:(id)arg2;
- (void)addMessageWithGUID:(id)arg1 toChat:(id)arg2;
- (void)deleteChat:(id)arg1;
- (unsigned long long)unreadCountForChat:(id)arg1;
- (id)storeChat:(id)arg1;
- (void)_updateModificationDate;
- (id)modificationStamp;
- (id)chatsGUIDsForMessageWithGUID:(id)arg1;
- (void)setModificationStamp:(id)arg1;
- (id)init;
- (void)dealloc;

@end
