/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFIMAPOfflineCopyOnStupidServerOperation : MFIMAPOperation  {
    struct __CFArray { } *messageIds;
    struct __CFArray { } *internalDates;
}


- (void)setMessageId:(id)arg1 andInternalDate:(id)arg2 forMessageWithSourceUid:(unsigned int)arg3;
- (bool)getMessageId:(id*)arg1 andInternalDate:(id*)arg2 forDestinationUid:(unsigned int)arg3;
- (void)expungeTemporaryUid:(unsigned int)arg1;
- (void)serializeIntoData:(id)arg1;
- (unsigned char)_magic;
- (void)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long*)arg2;
- (unsigned int)approximateSize;
- (void)dealloc;

@end
