/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSMutableDictionary, NSString, NSURL, NSDictionary;

@interface PKRemoteAssetManifest : NSObject  {
    NSURL *_fileURL;
    NSMutableDictionary *_remoteAssets;
    NSString *_name;
}

@property(readonly) NSURL * fileURL;
@property(readonly) NSString * name;
@property(readonly) NSDictionary * remoteAssets;


- (id)remoteAssets;
- (id)deviceSpecificAssetForScreenScale:(double)arg1 suffix:(id)arg2;
- (id)initWithFileURL:(id)arg1 passURL:(id)arg2 error:(id*)arg3;
- (id)deviceSpecificAsset;
- (id)name;
- (id)fileURL;
- (void)dealloc;

@end
