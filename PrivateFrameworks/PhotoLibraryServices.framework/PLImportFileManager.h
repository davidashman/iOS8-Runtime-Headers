/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImportFileManager : NSObject  {
}

+ (bool)isCameraDirectoryFolderName:(id)arg1;
+ (bool)isImportDirectoryFolderName:(id)arg1;

- (bool)removeUnusedDCIMDirectoryAtPath:(id)arg1;
- (id)nextAvailableFilePathInDirectory:(id)arg1 withExtension:(id)arg2;
- (id)urlForNewDCIMFolderWithFolderNumber:(long long*)arg1;
- (id)_DCIMFolderNameWithNumber:(long long)arg1;
- (id)_dcimDirectory;

@end
