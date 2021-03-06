/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray, NSString, MFActivityMonitor, NSMutableData;

@interface MFDAMailAccountSyncConsumer : MFDAMailAccountConsumer <DAMailboxRequestConsumer, DAMailboxStreamingContentConsumer> {
    NSArray *_requests;
    NSArray *_consumers;
    NSString *_tag;
    NSString *_accountID;
    MFActivityMonitor *_monitor;
    id _streamConsumer;
    NSMutableData *_bodyData;
    bool_moreAvailable;
    bool_receivedFirstItem;
    bool_firstSyncBatch;
    int _syncKeyResets;
    int _serverErrors;
}

@property(readonly) NSString * tag;
@property(retain) id streamConsumer;
@property(readonly) bool moreAvailable;


- (void)partialResultsForMailbox:(id)arg1 actions:(id)arg2 responses:(id)arg3 percentComplete:(double)arg4 moreAvailable:(bool)arg5;
- (void)resultsForMailbox:(id)arg1 newTag:(id)arg2 actions:(id)arg3 responses:(id)arg4 percentComplete:(double)arg5 moreAvailable:(bool)arg6 sentBytesCount:(unsigned long long)arg7 receivedBytesCount:(unsigned long long)arg8;
- (void)handleSyncResponses:(id)arg1;
- (id)originalThreadMonitor;
- (id)actionsConsumer;
- (void)_setTag:(id)arg1;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
- (bool)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
- (id)streamConsumer;
- (void)setStreamConsumer:(id)arg1;
- (void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3;
- (bool)moreAvailable;
- (id)initWithCurrentTag:(id)arg1 accountID:(id)arg2 requests:(id)arg3 consumers:(id)arg4;
- (id)tag;
- (void)dealloc;
- (void)reset;

@end
