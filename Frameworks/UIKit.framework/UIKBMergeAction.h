/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSArray, UIKBGeometry;

@interface UIKBMergeAction : NSObject <NSCopying> {
    NSString *_remainingKeyName;
    NSString *_disappearingKeyName;
    NSArray *_orderedKeyList;
    UIKBGeometry *_factors;
}

@property(retain) NSString * remainingKeyName;
@property(retain) NSString * disappearingKeyName;
@property(retain) NSArray * orderedKeyList;
@property(retain) UIKBGeometry * factors;

+ (id)mergeActionWithOrderedKeyList:(id)arg1 factors:(id)arg2;
+ (id)mergeActionWithRemainingKeyName:(id)arg1 disappearingKeyName:(id)arg2 factors:(id)arg3;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setFactors:(id)arg1;
- (void)setOrderedKeyList:(id)arg1;
- (void)setDisappearingKeyName:(id)arg1;
- (void)setRemainingKeyName:(id)arg1;
- (id)factors;
- (id)remainingKeyName;
- (id)disappearingKeyName;
- (id)orderedKeyList;

@end
