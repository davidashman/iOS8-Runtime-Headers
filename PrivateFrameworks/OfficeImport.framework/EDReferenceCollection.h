/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDReferenceCollection : EDCollection  {
    boolmCoalesce;
}

+ (id)coalesceCollection;
+ (id)noCoalesceCollection;

- (bool)coalesceReferenceAtIndex1:(unsigned long long)arg1 index2:(unsigned long long)arg2;
- (void)coalesce;
- (id)initWihNoCoalesce;
- (id)referenceToCellWithIndex:(unsigned long long)arg1 byRow:(bool)arg2;
- (id)reverseReferencesByRow:(bool)arg1;
- (unsigned long long)countOfCellsBeingReferenced;
- (id)init;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)addObject:(id)arg1;

@end
