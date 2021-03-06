/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface NSMappingModel : NSObject  {
    void *_reserved;
    void *_reserved1;
    void *_reserved2;
    NSMutableArray *_entityMappings;
    NSMutableDictionary *_entityMappingsByName;
    struct __modelMappingFlags { 
        unsigned int _isInUse : 1; 
        unsigned int _reservedModelMapping : 31; 
    } _modelMappingFlags;
}

@property(retain) NSArray * entityMappings;
@property(copy,readonly) NSDictionary * entityMappingsByName;

+ (id)mappingModelFromBundles:(id)arg1 forSourceModel:(id)arg2 destinationModel:(id)arg3;
+ (id)_newMappingModelFromPaths:(id)arg1 forSourceHashes:(id)arg2 destinationHashes:(id)arg3;
+ (id)_modelPathsFromBundles:(id)arg1;
+ (void)setMigrationDebugLevel:(int)arg1;
+ (int)migrationDebugLevel;
+ (id)inferredMappingModelForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id*)arg3;
+ (void)initialize;

- (id)_destinationEntityVersionHashesByName;
- (id)_sourceEntityVersionHashesByName;
- (bool)_isInferredMappingModel;
- (void)_addEntityMapping:(id)arg1;
- (id)entityMappingsByName;
- (id)_initWithEntityMappings:(id)arg1;
- (bool)_hasInferredMappingNeedingValidation;
- (void)_setIsEditable:(bool)arg1;
- (bool)isEditable;
- (void)_createCachesAndOptimizeState;
- (void)_throwIfNotEditable;
- (void)setEntityMappings:(id)arg1;
- (id)entityMappings;
- (id)initWithContentsOfURL:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
