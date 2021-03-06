/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDRubyProperties : NSObject  {
    unsigned int mOriginal : 1;
    struct { int x1; unsigned short x2; unsigned short x3; unsigned short x4; int x5; boolx6; boolx7; boolx8; boolx9; boolx10; } *mOriginalProperties;
}

@property int alignment;
@property unsigned short phoneticGuideFontSize;
@property unsigned short baseFontSize;
@property unsigned short distanceBetween;
@property int phoneticGuideLanguage;


- (void)clearPhoneticGuideLanguage;
- (bool)isPhoneticGuideLanguageOverridden;
- (void)setPhoneticGuideLanguage:(int)arg1;
- (int)phoneticGuideLanguage;
- (void)clearDistanceBetween;
- (bool)isDistanceBetweenOverridden;
- (void)setDistanceBetween:(unsigned short)arg1;
- (unsigned short)distanceBetween;
- (void)clearBaseFontSize;
- (bool)isBaseFontSizeOverridden;
- (void)setBaseFontSize:(unsigned short)arg1;
- (unsigned short)baseFontSize;
- (void)clearPhoneticGuideFontSize;
- (bool)isPhoneticGuideFontSizeOverridden;
- (void)setPhoneticGuideFontSize:(unsigned short)arg1;
- (unsigned short)phoneticGuideFontSize;
- (void)clearAlignment;
- (bool)isAnythingOverriddenIn:(struct { int x1; unsigned short x2; unsigned short x3; unsigned short x4; int x5; boolx6; boolx7; boolx8; boolx9; boolx10; }*)arg1;
- (bool)isAnythingOverridden;
- (bool)isAlignmentOverridden;
- (void)setAlignment:(int)arg1;
- (int)alignment;
- (id)init;
- (void)dealloc;

@end
