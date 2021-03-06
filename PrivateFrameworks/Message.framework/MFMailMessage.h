/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMessageInfo;

@interface MFMailMessage : MFMessage  {
    unsigned long long _messageFlags;
    unsigned char _subjectPrefixLength;
    unsigned long long _modSequenceNumber;
    MFMessageInfo *_info;
}

@property unsigned long long modSequenceNumber;

+ (unsigned int)displayablePriorityForPriority:(int)arg1;
+ (unsigned int)validatePriority:(int)arg1;
+ (id)forwardedMessagePrefixWithSpacer:(bool)arg1;
+ (Class)dataMessageStoreToUse;

- (void)setModSequenceNumber:(unsigned long long)arg1;
- (bool)shouldSetSummary;
- (id)mailMessageStore;
- (id)subjectAndPrefixLength:(unsigned int*)arg1;
- (void)setPriorityFromHeaders:(id)arg1;
- (id)loadMeetingData;
- (id)subjectNotIncludingReAndFwdPrefix;
- (unsigned long long)modSequenceNumber;
- (id)remoteMailboxURL;
- (id)externalConversationID;
- (void)markAsForwarded;
- (void)markAsReplied;
- (void)markAsNotFlagged;
- (void)markAsFlagged;
- (void)markAsNotViewed;
- (void)markAsViewed;
- (void)setMutableInfoFromMessage:(id)arg1;
- (id)originalMailboxURL;
- (id)copyMessageInfo;
- (id)mailbox;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (void)setConversationFlags:(unsigned long long)arg1;
- (unsigned long long)conversationFlags;
- (unsigned short)numberOfAttachments;
- (void)setMessageFlags:(unsigned long long)arg1;
- (unsigned long long)messageFlags;
- (id)loadMeetingExternalID;
- (id)loadMeetingMetadata;
- (void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 messageIDHash:(long long)arg8 conversationIDHash:(long long)arg9 summary:(id)arg10 withOptions:(unsigned int)arg11;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (id)messageStore;
- (id)account;
- (void)setSubject:(id)arg1;
- (id)subject;
- (void)setSummary:(id)arg1;
- (int)priority;
- (id)URL;
- (void)dealloc;

@end
