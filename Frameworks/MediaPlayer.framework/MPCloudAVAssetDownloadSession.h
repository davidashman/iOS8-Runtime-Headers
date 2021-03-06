/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPStoreItemContext, MPCloudAssetDownloadSessionIdentifier;

@interface MPCloudAVAssetDownloadSession : AVAssetDownloadSession  {
    bool_isStreamingQuality;
    MPStoreItemContext *_context;
    MPCloudAssetDownloadSessionIdentifier *_downloadSessionIdentifier;
}

@property(retain) MPStoreItemContext * context;
@property(retain) MPCloudAssetDownloadSessionIdentifier * downloadSessionIdentifier;
@property bool isStreamingQuality;

+ (id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 context:(id)arg4;

- (void)setDownloadSessionIdentifier:(id)arg1;
- (id)downloadSessionIdentifier;
- (void)setIsStreamingQuality:(bool)arg1;
- (bool)isStreamingQuality;
- (id)context;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;

@end
