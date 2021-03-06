/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class NSArray;

@interface MFIMAPMessage : MFMailMessage  {
    unsigned long long _size;
    NSArray *_customFlags;
    unsigned int _uid;
    unsigned long long _uniqueRemoteId;
}


- (id)remoteID;
- (id)customFlags;
- (void)setHasTemporaryUid:(bool)arg1;
- (void)setIsPartial:(bool)arg1;
- (long long)compareByNumberWithMessage:(id)arg1;
- (id)initWithFlags:(unsigned long long)arg1 customFlags:(id)arg2 size:(unsigned long long)arg3 uid:(unsigned int)arg4;
- (id)mailboxName;
- (id)remoteMailboxURL;
- (bool)isPartial;
- (void)setUniqueRemoteId:(unsigned long long)arg1;
- (unsigned long long)uniqueRemoteId;
- (id)originalMailboxURL;
- (bool)hasTemporaryUid;
- (void)setPreferredEncoding:(unsigned int)arg1;
- (bool)isMessageContentsLocallyAvailable;
- (void)setUid:(unsigned int)arg1;
- (unsigned long long)messageSize;
- (id)messageID;
- (void)dealloc;
- (id)description;
- (unsigned int)uid;

@end
