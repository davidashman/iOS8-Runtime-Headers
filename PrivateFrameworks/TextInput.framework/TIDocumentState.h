/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TIDocumentState : NSObject <NSSecureCoding> {
    NSString *_contextBeforeInput;
    NSString *_markedText;
    NSString *_selectedText;
    NSString *_contextAfterInput;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _selectedRangeInMarkedText;
}

@property(readonly) NSString * contextBeforeInput;
@property(readonly) NSString * markedText;
@property(readonly) NSString * selectedText;
@property(readonly) NSString * contextAfterInput;
@property(readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRangeInMarkedText;

+ (id)documentStateWithText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)documentStateWithContextBefore:(id)arg1 markedText:(id)arg2 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 contextAfter:(id)arg4;
+ (id)documentStateWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;
+ (id)documentStateWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;
+ (bool)supportsSecureCoding;
+ (id)documentStateOfDocument:(id)arg1;
+ (id)documentStateOfSecureTextDocument:(id)arg1;

- (id)initWithText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)inputIndexWithTerminatorPredicate:(id)arg1;
- (id)inputStemWithTerminatorPredicate:(id)arg1;
- (id)wordPrefixOfString:(id)arg1 withTerminatorPredicate:(id)arg2 reverse:(bool)arg3;
- (id)documentStateAfterCollapsingSelection;
- (id)documentStateAfterDeletingForward;
- (id)documentStateAfterDeletingBackward;
- (id)documentStateAfterUnmarkingText;
- (unsigned long long)hashString:(id)arg1 intoHashValue:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRangeInMarkedText;
- (id)contextAfterInput;
- (id)selectedText;
- (id)markedText;
- (bool)string:(id)arg1 matchesString:(id)arg2;
- (id)contextBeforeInput;
- (id)initWithContextBefore:(id)arg1 markedText:(id)arg2 selectedText:(id)arg3 contextAfter:(id)arg4 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (bool)documentIsEmpty;
- (id)documentStateAfterReplacingText:(id)arg1 withText:(id)arg2;
- (id)inputStringWithTerminatorPredicate:(id)arg1;
- (id)documentStateAfterInsertingTextAfterSelection:(id)arg1;
- (id)documentStateAfterInsertingText:(id)arg1;
- (id)documentStateAfterSettingMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)_positionFromPosition:(id)arg1 toPreviousWordStartInDocument:(id)arg2 tokenAccumulator:(id)arg3;
- (id)copyTextInRange:(id)arg1 fromDocument:(id)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 inDocument:(id)arg3;
- (id)_contextAfterPosition:(id)arg1 inDocument:(id)arg2;
- (id)_contextBeforePosition:(id)arg1 inDocument:(id)arg2;
- (id)_positionFromPosition:(id)arg1 toPreviousWordBoundaryInDocument:(id)arg2 tokenAccumulator:(id)arg3;
- (id)initWithSecureTextDocument:(id)arg1;
- (id)initWithDocument:(id)arg1;

@end
