/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer  {
    unsigned char _lastEncoded;
    unsigned long long _required;
    bool_forTextPart;
    bool_badlyEncoded;
}

@property bool forTextPart;


- (bool)forTextPart;
- (void)setForTextPart:(bool)arg1;
- (void)done;
- (long long)appendData:(id)arg1;

@end
