/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface EDCollection : NSObject <NSCopying> {
    NSMutableArray *mObjects;
}

+ (id)collectionWithObject:(id)arg1;
+ (id)collection;

- (bool)isEqualToCollection:(id)arg1;
- (unsigned long long)addOrEquivalentObject:(id)arg1;
- (id)init;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)initWithObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
