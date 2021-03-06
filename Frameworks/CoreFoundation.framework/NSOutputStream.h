/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSOutputStream : NSStream  {
}

@property(readonly) bool hasSpaceAvailable;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)outputStreamWithURL:(id)arg1 append:(bool)arg2;
+ (id)outputStreamToFileAtPath:(id)arg1 append:(bool)arg2;
+ (id)outputStreamToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
+ (id)outputStreamToMemory;

- (bool)hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (unsigned long long)_cfTypeID;
- (struct { long long x1; int x2; })_cfStreamError;

@end
