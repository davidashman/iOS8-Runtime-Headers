/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSIndexPath;

@interface _UICollectionViewItemKey : NSObject <NSCopying> {
    NSIndexPath *_indexPath;
    NSString *_identifier;
    bool_isClone;
    unsigned long long _type;
}

@property(readonly) unsigned long long type;
@property(retain,readonly) NSIndexPath * indexPath;
@property(retain,readonly) NSString * identifier;
@property(readonly) bool isClone;

+ (id)collectionItemKeyForLayoutAttributes:(id)arg1;
+ (id)collectionItemKeyForDecorationViewOfKind:(id)arg1 andIndexPath:(id)arg2;
+ (id)collectionItemKeyForSupplementaryViewOfKind:(id)arg1 andIndexPath:(id)arg2;
+ (id)collectionItemKeyForCellWithIndexPath:(id)arg1;

- (id)identifier;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)type;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyAsClone:(bool)arg1;
- (bool)isClone;
- (id)initWithType:(unsigned long long)arg1 indexPath:(id)arg2 identifier:(id)arg3 clone:(bool)arg4;
- (id)initWithType:(unsigned long long)arg1 indexPath:(id)arg2 identifier:(id)arg3;
- (id)indexPath;

@end
