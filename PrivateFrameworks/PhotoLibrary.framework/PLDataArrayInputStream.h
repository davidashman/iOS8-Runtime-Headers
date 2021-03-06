/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSMutableData, <PLDataArrayInputStreamProgressDelegate>;

@interface PLDataArrayInputStream : NSInputStream  {
    NSArray *_dataArray;
    NSMutableData *_bodyData;
    unsigned long long _dataCount;
    unsigned long long _dataLength;
    unsigned long long _dataOffset;
    unsigned long long _currentIndex;
    unsigned long long _currentOffset;
    unsigned long long _currentLength;
    bool_openEventSent;
    unsigned long long _streamStatus;
    id _delegate;
    <PLDataArrayInputStreamProgressDelegate> *_progressDelegate;
    struct __CFRunLoopSource { } *_rls;
    int (*_clientCallback)();
    struct { 
        long long version; 
        void *info; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
    } _clientContext;
}

@property <PLDataArrayInputStreamProgressDelegate> * progressDelegate;


- (void)setProgressDelegate:(id)arg1;
- (id)progressDelegate;
- (id)initWithDataArray:(id)arg1;
- (void)_scheduleProgressUpdate;
- (unsigned long long)bytesRead;
- (void)_streamEventTrigger;
- (void)_scheduleCallback;
- (void)_updateProgress;
- (unsigned long long)totalBytes;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (bool)_setCFClientFlags:(unsigned long long)arg1 callback:(int (*)())arg2 context:(struct { long long x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (bool)hasBytesAvailable;
- (bool)getBuffer:(char **)arg1 length:(unsigned long long*)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)close;
- (void)open;
- (id)delegate;
- (void)dealloc;

@end
