/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSUPointerKeyDictionary;

@interface EDKeyedCollection : EDCollection  {
    OITSUPointerKeyDictionary *mMap;
}


- (bool)isOverwritingKeyOK;
- (bool)isObjectInMap:(id)arg1;
- (void)removeFromMap:(id)arg1;
- (void)insertIntoMap:(id)arg1;
- (id)objectWithKey:(long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)addObject:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
