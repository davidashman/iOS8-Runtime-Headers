/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class TIUserDictionaryEntryValue;

@interface TIUserDictionaryTransaction : NSObject <NSSecureCoding> {
    TIUserDictionaryEntryValue *_valueToDelete;
    TIUserDictionaryEntryValue *_valueToInsert;
}

@property(retain) TIUserDictionaryEntryValue * valueToDelete;
@property(retain) TIUserDictionaryEntryValue * valueToInsert;

+ (bool)supportsSecureCoding;

- (void)setValueToInsert:(id)arg1;
- (void)setValueToDelete:(id)arg1;
- (id)valueToInsert;
- (id)valueToDelete;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;

@end
