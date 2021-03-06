/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSCharacterSet;

@interface NSScanner : NSObject <NSCopying> {
}

@property(copy,readonly) NSString * string;
@property unsigned long long scanLocation;
@property(copy) NSCharacterSet * charactersToBeSkipped;
@property bool caseSensitive;
@property(retain) id locale;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)localizedScannerWithString:(id)arg1;
+ (id)scannerWithString:(id)arg1;

- (bool)scanDouble:(double*)arg1;
- (bool)scanUpToString:(id)arg1 intoString:(id*)arg2;
- (bool)scanInteger:(long long*)arg1;
- (id)locale;
- (void)setLocale:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)string;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)scanDecimal:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; }*)arg1;
- (bool)scanHexInt:(unsigned int*)arg1;
- (bool)scanUnsignedInteger:(unsigned long long*)arg1;
- (bool)scanHexFloat:(float*)arg1;
- (bool)scanHexDouble:(double*)arg1;
- (bool)scanFloat:(float*)arg1;
- (id)_invertedSkipSet;
- (bool)scanHexLongLong:(unsigned long long*)arg1;
- (bool)scanUnsignedLongLong:(unsigned long long*)arg1;
- (bool)scanLongLong:(long long*)arg1;
- (void)setCaseSensitive:(bool)arg1;
- (bool)caseSensitive;
- (id)charactersToBeSkipped;
- (bool)scanInt:(int*)arg1;
- (bool)scanString:(id)arg1 intoString:(id*)arg2;
- (bool)scanUpToCharactersFromSet:(id)arg1 intoString:(id*)arg2;
- (bool)scanCharactersFromSet:(id)arg1 intoString:(id*)arg2;
- (void)setCharactersToBeSkipped:(id)arg1;
- (bool)_scanDecimal:(unsigned long long)arg1 into:(long long*)arg2;
- (id)_remainingString;
- (void)setScanLocation:(unsigned long long)arg1;
- (unsigned long long)scanLocation;
- (bool)isAtEnd;
- (id)mf_nextTokenWithPunctuation:(struct __CFCharacterSet { }*)arg1;
- (bool)mf_scanUpAndOverString:(id)arg1;
- (id)mf_remainingString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfFirstMatchWithRegularExpression:(id)arg1;
- (bool)mf_scanUpToRegularExpression:(id)arg1;
- (bool)scanCGFloat:(double*)arg1;

@end
