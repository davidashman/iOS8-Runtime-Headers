/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray, NSString, NSPredicate, NSEntityDescription;

@interface NSFetchRequest : NSPersistentStoreRequest <NSCoding> {
    NSArray *_groupByProperties;
    NSPredicate *_havingPredicate;
    id *_additionalPrivateIvars;
    NSArray *_valuesToFetch;
    NSEntityDescription *_entity;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned long long _batchSize;
    unsigned long long _fetchLimit;
    NSArray *_relationshipKeyPathsForPrefetching;
    struct _fetchRequestFlags { 
        unsigned int distinctValuesOnly : 1; 
        unsigned int includesSubentities : 1; 
        unsigned int includesPropertyValues : 1; 
        unsigned int resultType : 3; 
        unsigned int returnsObjectsAsFaults : 1; 
        unsigned int excludePendingChanges : 1; 
        unsigned int isInUse : 1; 
        unsigned int entityIsName : 1; 
        unsigned int refreshesRefetched : 1; 
        unsigned int propertiesValidated : 1; 
        unsigned int disableCaching : 1; 
        unsigned int _RESERVED : 19; 
    } _flags;
}

@property(retain) NSEntityDescription * entity;
@property(readonly) NSString * entityName;
@property(retain) NSPredicate * predicate;
@property(retain) NSArray * sortDescriptors;
@property unsigned long long fetchLimit;
@property(retain) NSArray * affectedStores;
@property unsigned long long resultType;
@property bool includesSubentities;
@property bool includesPropertyValues;
@property bool returnsObjectsAsFaults;
@property(copy) NSArray * relationshipKeyPathsForPrefetching;
@property bool includesPendingChanges;
@property bool returnsDistinctResults;
@property(copy) NSArray * propertiesToFetch;
@property unsigned long long fetchOffset;
@property unsigned long long fetchBatchSize;
@property bool shouldRefreshRefetchedObjects;
@property(copy) NSArray * propertiesToGroupBy;
@property(retain) NSPredicate * havingPredicate;

+ (id)fetchRequestWithEntityName:(id)arg1;
+ (void)initialize;
+ (bool)accessInstanceVariablesDirectly;

- (id)stores;
- (void)_incrementInUseCounter;
- (void)_resolveEntityWithContext:(id)arg1;
- (void)setHavingPredicate:(id)arg1;
- (void)setGroupByProperties:(id)arg1;
- (id)groupByProperties;
- (void)setFetchOffset:(unsigned long long)arg1;
- (void)setPropertiesToFetch:(id)arg1;
- (id)_asyncResultHandle;
- (void)_setAsyncResultHandle:(id)arg1;
- (void)setRelationshipKeyPathsForPrefetching:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setPropertiesToGroupBy:(id)arg1;
- (id)initWithEntityName:(id)arg1;
- (void)setAffectedStores:(id)arg1;
- (id)_newValidatedProperties:(id)arg1 groupBy:(bool)arg2 error:(id*)arg3;
- (id)affectedStores;
- (void)setResultType:(unsigned long long)arg1;
- (void)_setDisablePersistentStoreResultCaching:(bool)arg1;
- (void)setShouldRefreshRefetchedObjects:(bool)arg1;
- (void)setReturnsObjectsAsFaults:(bool)arg1;
- (void)setIncludesPropertyValues:(bool)arg1;
- (void)setIncludesSubentities:(bool)arg1;
- (void)setReturnsDistinctResults:(bool)arg1;
- (bool)_disablePersistentStoreResultCaching;
- (bool)shouldRefreshRefetchedObjects;
- (bool)includesPendingChanges;
- (bool)returnsDistinctResults;
- (id)relationshipKeyPathsForPrefetching;
- (id)havingPredicate;
- (void)setEntity:(id)arg1;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7;
- (bool)_isEditable;
- (void)_throwIfNotEditable;
- (bool)hasChanges;
- (unsigned long long)fetchOffset;
- (id)propertiesToFetch;
- (bool)returnsObjectsAsFaults;
- (id)propertiesToGroupBy;
- (unsigned long long)resultType;
- (void)setIncludesPendingChanges:(bool)arg1;
- (void)setFetchLimit:(unsigned long long)arg1;
- (void)setFetchBatchSize:(unsigned long long)arg1;
- (unsigned long long)fetchBatchSize;
- (unsigned long long)fetchLimit;
- (id)sortDescriptors;
- (bool)includesSubentities;
- (bool)includesPropertyValues;
- (id)entity;
- (unsigned long long)requestType;
- (id)entityName;
- (id)predicate;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setPredicate:(id)arg1;

@end
