/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSNumber;

@interface MPCloudAssetDownloadSessionIdentifier : NSObject <NSCopying> {
    NSNumber *_storeID;
    NSNumber *_persistentID;
}

@property(copy) NSNumber * storeID;
@property(copy) NSNumber * persistentID;

+ (id)identifierForContext:(id)arg1;

- (void)setStoreID:(id)arg1;
- (id)storeID;
- (void)setPersistentID:(id)arg1;
- (id)persistentID;
- (id)initWithContext:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
