/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <SFUOutputStream>, NSString;

@interface OISFUOffsetOutputStream : NSObject <SFUOutputStream> {
    <SFUOutputStream> *mOutputStream;
    long long mInitialOffset;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (id)closeLocalStream;
- (bool)canCreateInputStream;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (id)initWithOutputStream:(id)arg1;
- (id)inputStream;
- (bool)canSeek;
- (long long)offset;
- (void)close;
- (void)dealloc;

@end
