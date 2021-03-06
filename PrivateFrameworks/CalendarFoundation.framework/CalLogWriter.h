/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@class NSString, <CalLogFormatter>;

@interface CalLogWriter : NSObject <CalLogWriter> {
    <CalLogFormatter> *_formatter;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(retain) <CalLogFormatter> * formatter;


- (id)initWithParameters:(id)arg1;
- (void)write:(id)arg1;
- (bool)flush;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)setFormatter:(id)arg1;
- (id)formatter;

@end
