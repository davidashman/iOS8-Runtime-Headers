/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Photos.framework/Photos
 */

@class NSString, NSData, NSDate, CLLocation, NSURL;

@interface PHAsset : PHObject <_PLImageLoadingAsset> {
    bool_hidden;
    bool_favorite;
    bool_complete;
    bool_hasAdjustments;
    bool_cloudIsDeletable;
    int _exifOrientation;
    int _avalanchePickType;
    long long _mediaType;
    unsigned long long _mediaSubtypes;
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    double _duration;
    NSString *_burstIdentifier;
    NSString *_uniformTypeIdentifier;
    unsigned long long _persistenceState;
    unsigned long long _thumbnailIndex;
    NSString *_directory;
    NSString *_filename;
    NSDate *_trashedDate;
    long long _assetSource;
    NSString *_cloudIdentifier;
    long long _cloudPlaceholderKind;
    NSData *_locationData;
}

@property(readonly) long long mediaType;
@property(readonly) unsigned long long mediaSubtypes;
@property(readonly) unsigned long long pixelWidth;
@property(readonly) unsigned long long pixelHeight;
@property(readonly) NSDate * creationDate;
@property(readonly) NSDate * modificationDate;
@property(readonly) CLLocation * location;
@property(readonly) double duration;
@property(getter=isHidden,readonly) bool hidden;
@property(getter=isFavorite,readonly) bool favorite;
@property(readonly) NSString * burstIdentifier;
@property(readonly) unsigned long long burstSelectionTypes;
@property(readonly) bool representsBurst;
@property(readonly) long long imageOrientation;
@property(readonly) NSString * uniformTypeIdentifier;
@property(readonly) unsigned long long persistenceState;
@property(readonly) unsigned long long thumbnailIndex;
@property(readonly) NSString * directory;
@property(readonly) NSString * filename;
@property(readonly) NSDate * trashedDate;
@property(readonly) bool complete;
@property(readonly) NSURL * ALAssetURL;
@property(readonly) int exifOrientation;
@property(readonly) bool isHDVideo;
@property(readonly) bool isJPEG;
@property(readonly) bool isPartOfBurst;
@property(readonly) bool hasAdjustments;
@property(readonly) long long assetSource;
@property(copy,readonly) NSString * cloudIdentifier;
@property(readonly) long long cloudPlaceholderKind;
@property(readonly) NSString * detailedDebugDescription;
@property(readonly) int avalanchePickType;
@property(readonly) NSData * locationData;
@property(readonly) bool cloudIsDeletable;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)fetchAssetsWithBurstIdentifier:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithMediaType:(long long)arg1 options:(id)arg2;
+ (bool)managedObjectSupportsBursts;
+ (bool)managedObjectSupportsHiddenState;
+ (id)_transformMediaSubtypeComparisonPredicate:(id)arg1;
+ (id)fetchAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithOptions:(id)arg1;
+ (id)fetchKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (unsigned long long)pl_phAssetMediaSubtypeForPLAssetSubtype:(short)arg1;
+ (id)identifierCode;
+ (bool)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1;
+ (id)managedEntityName;
+ (id)pl_managedAssetsForAssets:(id)arg1;
+ (id)fetchAssetsWithALAssetURLs:(id)arg1 options:(id)arg2;

- (id)trashedDate;
- (unsigned long long)persistenceState;
- (id)detailedDebugDescription;
- (id)fileURLForMutationsDirectory;
- (id)fileURLForDiagnosticFile;
- (id)fileURLForXMPFile;
- (void)fetchKeywordsWithCompletionHandler:(id)arg1;
- (id)momentProperties;
- (id)embeddedThumbnailProperties;
- (id)PTPProperties;
- (id)internalProperties;
- (bool)representsBurst;
- (unsigned long long)burstSelectionTypes;
- (id)fileURLForMediumPreview;
- (id)fileURLForLargePreview;
- (id)fileURLForVideoPreviewFile;
- (id)fileURLForAdjustmentsDirectory;
- (id)_fileURLForMetadataWithExtension:(id)arg1;
- (long long)assetSource;
- (id)fileURLForPenultimateFullsizeRenderImage;
- (id)reservedFileURLForLargeDisplayableImageFileForceLarge:(bool)arg1 forceUpgradeFromSubstandardIfNecessary:(bool)arg2 outImageType:(long long*)arg3;
- (id)fileURLForSubstandardFullsizeRenderImage;
- (id)originalMetadataProperties;
- (void)fetchPropertySetsIfNeeded;
- (id)ALAssetURL;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (id)_createPropertyObjectOfClass:(Class)arg1 properties:(id)arg2 isExtraObject:(bool)arg3;
- (void)cancelContentEditingInputRequest:(unsigned long long)arg1;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(id)arg2;
- (void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(bool)arg3 resultHandler:(id)arg4;
- (unsigned long long)mediaSubtypes;
- (bool)isMediaSubtype:(unsigned long long)arg1;
- (id)pl_managedAsset;
- (id)managedAssetForPhotoLibrary:(id)arg1;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (long long)originalImageOrientation;
- (id)debugFilename;
- (bool)isPartOfBurst;
- (long long)cloudSharedAssetPlaceholderKind;
- (unsigned long long)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(id)arg2;
- (bool)isHDVideo;
- (id)duplicateProperties;
- (bool)isPhoto;
- (bool)cloudIsDeletable;
- (id)burstIdentifier;
- (bool)isIncludedInCloudFeeds;
- (bool)isIncludedInMoments;
- (bool)isLocatedAtCoordinates:(struct { double x1; double x2; })arg1;
- (id)fileURLForFullsizeRenderImage;
- (id)fileURLForFullsizeRenderVideo;
- (id)assetsLibraryURL;
- (bool)isMogul;
- (id)pathForSubstandardFullsizeRenderImageFile;
- (id)fileURLForPrebakedPortraitScrubberThumbnails;
- (id)fileURLForPrebakedLandscapeScrubberThumbnails;
- (bool)isCloudPhotoLibraryAsset;
- (id)pathForAdjustmentFile;
- (bool)isAudio;
- (unsigned long long)thumbnailIndex;
- (bool)isTimelapsePlaceholder;
- (bool)isCloudPlaceholder;
- (bool)isStreamedVideo;
- (id)thumbnailIdentifier;
- (bool)isInFlight;
- (bool)isJPEG;
- (id)reservedPathForLargeDisplayableImageFileForceLarge:(bool)arg1 forceUpgradeFromSubstandardIfNecessary:(bool)arg2 outImageType:(long long*)arg3;
- (id)pathForPenultimateFullsizeRenderImageFile;
- (bool)hasLegacyAdjustments;
- (id)pl_photoLibrary;
- (short)kindSubtype;
- (long long)cloudPlaceholderKind;
- (id)directory;
- (id)uniformTypeIdentifier;
- (int)avalanchePickType;
- (unsigned long long)effectiveThumbnailIndex;
- (id)locationData;
- (bool)hasAdjustments;
- (id)mainFileURL;
- (short)savedAssetType;
- (bool)isPhotoStreamPhoto;
- (bool)canPerformEditOperation:(long long)arg1;
- (bool)isCloudSharedAsset;
- (id)pathForOriginalFile;
- (double)aspectRatio;
- (bool)isFavorite;
- (id)cloudIdentifier;
- (int)orientation;
- (short)kind;
- (id)location;
- (id)creationDate;
- (long long)mediaType;
- (bool)isHidden;
- (bool)isVideo;
- (struct CGSize { double x1; double x2; })imageSize;
- (int)exifOrientation;
- (void).cxx_destruct;
- (id)description;
- (id)modificationDate;
- (double)duration;
- (id)filename;
- (bool)complete;
- (long long)imageOrientation;

@end
