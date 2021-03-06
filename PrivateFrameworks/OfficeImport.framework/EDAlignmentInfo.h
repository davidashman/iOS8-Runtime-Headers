/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface EDAlignmentInfo : NSObject <NSCopying, EDImmutableObject> {
    int mHorizontalAlignment;
    int mVerticalAlignment;
    int mIndent;
    int mTextRotation;
    boolmTextWrapped;
    boolmHorizontalAlignOverridden;
    boolmVerticalAlignOverridden;
    boolmIndentOverridden;
    boolmTextWrappedOveridden;
    boolmDoNotModify;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)alignmentInfo;

- (void)setTextRotation:(int)arg1;
- (void)setTextWrapped:(bool)arg1;
- (void)setHorizontalAlignment:(int)arg1;
- (void)setDoNotModify:(bool)arg1;
- (bool)isEqualToAlignmentInfo:(id)arg1;
- (bool)isIndentOverridden;
- (bool)isTextWrappedOverridden;
- (int)indent;
- (int)textRotation;
- (bool)isTextWrapped;
- (int)horizontalAlignment;
- (bool)isHorizontalAlignOverridden;
- (void)setIndent:(int)arg1;
- (bool)isVerticalAlignOverridden;
- (void)setVerticalAlignment:(int)arg1;
- (int)verticalAlignment;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
