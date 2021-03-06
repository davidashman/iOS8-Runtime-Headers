/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDDocument, WDListLevel;

@interface WDListLevelOverride : NSObject  {
    WDDocument *mDocument;
    WDListLevel *mListLevel;
    unsigned char mLevel;
    long long mStartNumber;
    boolmStartNumberOverridden;
}


- (bool)isStartNumberOverridden;
- (id)initWithDocument:(id)arg1 level:(unsigned char)arg2;
- (id)mutableListLevel;
- (void)setStartNumber:(long long)arg1;
- (long long)startNumber;
- (id)listLevel;
- (bool)isListLevelOverridden;
- (unsigned char)level;
- (void)dealloc;
- (id)description;

@end
