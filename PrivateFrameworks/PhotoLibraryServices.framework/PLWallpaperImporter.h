/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, PLPhotoLibrary, NSData, PLManagedObjectContext;

@interface PLWallpaperImporter : NSObject  {
    NSData *_wallpaperFileHash;
    NSArray *_allWallpaperURLs;
    PLPhotoLibrary *photoLibrary;
}

@property(retain,readonly) NSArray * allWallpaperURLs;
@property(retain) PLPhotoLibrary * photoLibrary;
@property(retain,readonly) PLManagedObjectContext * managedObjectContext;

+ (void)importWallpaperAssetsIntoPhotoLibrary:(id)arg1;
+ (id)posterImageURL;

- (void)addWallpaperURLsForModel:(id)arg1 toURLs:(id)arg2;
- (id)allExistingWallpaperAssets;
- (void)importAll;
- (void)deleteAll;
- (id)wallpaperFileHash;
- (id)allWallpaperURLs;
- (void)updateAsNeeded;
- (void)setPhotoLibrary:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)photoLibrary;
- (id)managedObjectContext;
- (id)init;
- (void)dealloc;

@end
