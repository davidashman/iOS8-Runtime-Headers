/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class ICSCalendar;

@interface ICSDocument : NSObject  {
    ICSCalendar *_calendar;
}

+ (void)suppressParserSyntaxErrorLogging;
+ (int)ICSChecksumVersionSpecifiedInOptions:(unsigned long long)arg1;

- (bool)validate:(id*)arg1;
- (id)ICSChecksumForVersion:(int)arg1;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (id)initWithICSString:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)ICSChecksumStringForVersion:(int)arg1;
- (id)ICSStringWithOptions:(unsigned long long)arg1;
- (id)ICSDataWithOptions:(unsigned long long)arg1;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)calendar;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithCalendar:(id)arg1;

@end
