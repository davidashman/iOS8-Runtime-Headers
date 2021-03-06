/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSCache, NSString, MPArtworkResizeUtility;

@interface MPMediaLibraryArtworkDataSource : NSObject <MPArtworkDataSource> {
    NSCache *_fallbackCache;
    MPArtworkResizeUtility *_artworkResizeUtility;
}

@property(retain) NSCache * fallbackCache;
@property(retain) MPArtworkResizeUtility * artworkResizeUtility;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setArtworkResizeUtility:(id)arg1;
- (void)setFallbackCache:(id)arg1;
- (id)artworkResizeUtility;
- (id)fallbackCache;
- (id)_resizeArtwork:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 completionHandler:(id)arg3;
- (bool)_isRepresentationSize:(struct CGSize { double x1; double x2; })arg1 validForFittingSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_cacheRepresentation:(id)arg1 forCatalog:(id)arg2;
- (id)_representationAtSize:(struct CGSize { double x1; double x2; })arg1 forCatalog:(id)arg2;
- (struct CGSize { double x1; double x2; })_bestSizeForArtworkCatalog:(id)arg1;
- (bool)_isRepresentation:(id)arg1 validForCatalog:(id)arg2;
- (id)_cachedRepresentationForCatalog:(id)arg1;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id)arg2;
- (bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (bool)areRepresentationsForCatalog:(id)arg1 visuallyIdenticalToRepresentationsForCatalog:(id)arg2;
- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
