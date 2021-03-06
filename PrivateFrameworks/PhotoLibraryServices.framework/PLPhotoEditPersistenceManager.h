/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString;

@interface PLPhotoEditPersistenceManager : NSObject  {
}

@property(readonly) NSString * latestFormatIdentifier;
@property(readonly) NSString * latestFormatVersion;


- (id)_allImporterClasses;
- (Class)_latestExporterClass;
- (id)_allConverterClasses;
- (id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3;
- (bool)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2;
- (bool)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 intoModel:(id)arg4 baseOrientation:(long long)arg5;
- (id)dataFromPhotoEditModel:(id)arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3 exifOrientation:(int)arg4;
- (id)latestFormatVersion;
- (id)latestFormatIdentifier;

@end
