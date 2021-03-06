/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSNumberFormatter;

@interface NSMassFormatter : NSFormatter  {
    void *_formatter;
    bool_isForPersonMassUse;
    void *_reserved[2];
}

@property(copy) NSNumberFormatter * numberFormatter;
@property long long unitStyle;
@property(getter=isForPersonMassUse) bool forPersonMassUse;


- (id)init;
- (void)dealloc;
- (void)setForPersonMassUse:(bool)arg1;
- (bool)isForPersonMassUse;
- (id)unitStringFromKilograms:(double)arg1 usedUnit:(long long*)arg2;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)stringForObjectValue:(id)arg1;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)stringFromValue:(double)arg1 unit:(long long)arg2;
- (id)unitStringFromValue:(double)arg1 unit:(long long)arg2;
- (long long)targetUnitFromKilograms:(double)arg1;
- (void)setUnitStyle:(long long)arg1;
- (long long)unitStyle;
- (void)setNumberFormatter:(id)arg1;
- (id)numberFormatter;
- (id)stringFromKilograms:(double)arg1;

@end
