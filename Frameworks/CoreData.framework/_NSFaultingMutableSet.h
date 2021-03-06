/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObject, NSPropertyDescription;

@interface _NSFaultingMutableSet : NSMutableSet  {
    int _cd_rc;
    struct _NSFaultingMutableSetFlags { 
        unsigned int _isFault : 1; 
        unsigned int _mustPropagateDelete : 1; 
        unsigned int _reserved : 14; 
        unsigned int _relationship : 16; 
    } _flags;
    id _realSet;
    NSManagedObject *_source;
}

@property(readonly) NSManagedObject * source;
@property(readonly) NSPropertyDescription * relationship;
@property(getter=isFault,readonly) bool fault;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)alloc;
+ (bool)accessInstanceVariablesDirectly;

- (bool)_isIdenticalFault:(id)arg1;
- (bool)_shouldProcessKVOChange;
- (id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)willReadWithContents:(id)arg1;
- (id)relationship;
- (id)source;
- (void)turnIntoFault;
- (bool)isFault;
- (void)willRead;
- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(bool)arg3;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (bool)isEqualToSet:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (id)objectEnumerator;
- (id)allObjects;
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)removeObject:(id)arg1;
- (void)getObjects:(id*)arg1;
- (id)member:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)containsObject:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isSubsetOfSet:(id)arg1;
- (bool)intersectsSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (id)anyObject;
- (Class)classForArchiver;
- (id)replacementObjectForCoder:(id)arg1;
- (Class)classForCoder;

@end
