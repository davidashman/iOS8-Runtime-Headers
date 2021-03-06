/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, PLManagedObjectContext;

@interface PLPTPdAssetEnumerator : NSObject <NSFastEnumeration> {
    PLManagedObjectContext *_managedObjectContext;
    NSArray *_assetObjectIDs;
    NSArray *_albumObjectIDs;
    NSArray *_resultStore;
}

+ (id)enumeratorWithAssetObjectIDs:(id)arg1 albumObjectIDs:(id)arg2 managedObjectContext:(id)arg3;

- (id)assetsFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (unsigned long long)getPTPdInfo:(id*)arg1 count:(unsigned long long)arg2 fetchOffset:(unsigned long long)arg3;
- (id)init;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;

@end
