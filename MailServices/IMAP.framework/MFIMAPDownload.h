/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class MFCountingDataConsumer, NSMutableArray, MFBaseFilterDataConsumer;

@interface MFIMAPDownload : NSObject  {
    unsigned int _uid;
    NSMutableArray *_pendingFetchResults;
    MFCountingDataConsumer *_countingConsumer;
    MFBaseFilterDataConsumer *_mainConsumer;
}

@property(readonly) MFBaseFilterDataConsumer * mainConsumer;


- (id)mainConsumer;
- (unsigned long long)lengthOfDataBeforeLineConversion;
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (void)processResults;
- (void)handleFetchResult:(id)arg1;
- (unsigned long long)consumerBytesFetched;
- (unsigned long long)bytesFetched;
- (id)initWithUid:(unsigned int)arg1;
- (unsigned long long)expectedLength;
- (bool)isComplete;
- (id)data;
- (void)setError:(id)arg1;
- (id)error;
- (void)dealloc;
- (unsigned int)uid;

@end
