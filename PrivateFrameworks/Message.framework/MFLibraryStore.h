/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSDate, MFMessageCriterion, MFMessageLibrary;

@interface MFLibraryStore : MFMailMessageStore  {
    MFMessageLibrary *_library;
    NSDate *_earliestReceivedDate;
    MFMessageCriterion *_criterion;
    unsigned long long _serverMessageCount;
    unsigned long long _fetchWindow;
}

@property(retain) NSDate * earliestReceivedDate;

+ (unsigned int)defaultLoadOptions;
+ (id)storeWithCriterion:(id)arg1;
+ (id)sharedInstanceIfExists;
+ (id)storeWithMailbox:(id)arg1;
+ (bool)storeAtPathIsWritable:(id)arg1;
+ (bool)createEmptyStoreForPath:(id)arg1;
+ (id)sharedInstance;

- (unsigned long long)growFetchWindow;
- (id)earliestReceivedDate;
- (void)_setNeedsAutosave;
- (void)willFetchMessages;
- (id)serverSearchResults;
- (long long)oldestKnownConversation;
- (struct __CFDictionary { }*)copySendersByLibraryIDForConversation:(long long)arg1 limit:(long long)arg2;
- (id)copyOfMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1;
- (id)copyOfMessageInfosMatchingCriterion:(id)arg1;
- (id)messageWithLibraryID:(unsigned int)arg1 options:(unsigned int)arg2;
- (void)libraryFinishedSendingMessages;
- (void)handleMessagesCompacted:(id)arg1;
- (void)handleMessagesWillBeCompacted:(id)arg1;
- (void)handleMessageFlagsChanged:(id)arg1;
- (void)_addInvocationToQueue:(id)arg1;
- (void)handleMessagesAdded:(id)arg1 earliestReceivedDate:(id)arg2;
- (void)purgeMessages:(id)arg1;
- (void)compactMessages:(id)arg1;
- (id)_fetchFullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(bool)arg3 didDownload:(bool*)arg4;
- (id)_copyDataFromMimePart:(id)arg1 threshold:(unsigned int)arg2 downloadIfNecessary:(bool)arg3;
- (bool)_fetchDataForMimePart:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 isComplete:(bool*)arg3 consumer:(id)arg4;
- (id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4 usePartDatas:(bool)arg5 didDownload:(bool*)arg6;
- (id)_memberMessagesWithCompactionNotification:(id)arg1;
- (void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;
- (id)filterMessagesByMembership:(id)arg1;
- (unsigned long long)_calculateFetchWindowWithAdditionalMultiple:(bool)arg1;
- (unsigned long long)_fetchWindowMinimum;
- (unsigned long long)_fetchWindowMultiple;
- (bool)_isSingleCoreDevice;
- (void)setEarliestReceivedDate:(id)arg1;
- (void)addCountsForMessages:(id)arg1 shouldUpdateUnreadCount:(bool)arg2;
- (id)copyOfMessagesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned int)arg2;
- (id)copyOfMessagesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned int)arg2 generation:(unsigned long long*)arg3;
- (id)copyOfMessageInfos;
- (void)_updateMailboxUnreadCount;
- (void)_queueMessagesWereCompacted:(id)arg1;
- (void)_queueMessagesWillBeCompacted:(id)arg1;
- (void)_queueMessageFlagsChanged:(id)arg1;
- (void)_queueMessagesAdded:(id)arg1;
- (id)initWithCriterion:(id)arg1;
- (id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(bool)arg3;
- (id)mailbox;
- (id)dataPathForMessage:(id)arg1 part:(id)arg2;
- (id)criterion;
- (id)initWithMailbox:(id)arg1;
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(bool)arg3;
- (id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2;
- (bool)allowsAppend;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(bool)arg2;
- (void)doCompact;
- (bool)canCompact;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg1 limit:(unsigned int)arg2;
- (id)mutableCopyOfAllMessages;
- (unsigned long long)indexOfMessage:(id)arg1;
- (bool)hasMessageForAccount:(id)arg1;
- (unsigned long long)unreadCountMatchingCriterion:(id)arg1;
- (void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2;
- (void)invalidateFetchWindow;
- (bool)shouldGrowFetchWindow;
- (void)writeUpdatedMessageDataToDisk;
- (id)initWithMailboxUid:(id)arg1 readOnly:(bool)arg2;
- (bool)shouldCancel;
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(bool)arg2;
- (id)messageForMessageID:(id)arg1 options:(unsigned int)arg2;
- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)deleteMessages:(id)arg1 moveToTrash:(bool)arg2;
- (id)copyMessagesMatchingText:(id)arg1 options:(unsigned int)arg2;
- (id)copyOfAllMessages;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
- (unsigned long long)fetchWindow;
- (unsigned long long)nonDeletedCountIncludingServerSearch:(bool)arg1 andThreadSearch:(bool)arg2;
- (unsigned long long)serverUnreadOnlyOnServerCount;
- (unsigned long long)unreadCount;
- (unsigned long long)totalCount;
- (void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2;
- (void)updateUserInfoToLatestValues;
- (void)openSynchronously;
- (id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(bool)arg3 partial:(bool*)arg4;
- (void)_flushAllCaches;
- (bool)hasCompleteDataForMimePart:(id)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(bool)arg2 isEncrypted:(bool)arg3 forMessage:(id)arg4;
- (bool)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 isComplete:(bool*)arg3 withConsumer:(id)arg4 downloadIfNecessary:(bool)arg5 didDownload:(bool*)arg6;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4 didDownload:(bool*)arg5;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4 didDownload:(bool*)arg5;
- (id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (bool)bodyFetchRequiresNetworkActivity;
- (id)bodyDataForMessage:(id)arg1 isComplete:(bool*)arg2 isPartial:(bool*)arg3 downloadIfNecessary:(bool)arg4;
- (void)updateMetadata;
- (id)library;
- (void)setLibrary:(id)arg1;
- (id)URLString;
- (void)dealloc;

@end
