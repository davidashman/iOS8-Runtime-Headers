/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSURL;

@interface NSURLSessionAVAssetDownloadTask : NSURLSessionTask  {
    unsigned long long _AVAssetDownloadToken;
    NSURL *_URL;
    NSURL *_destinationURL;
}

@property(readonly) unsigned long long AVAssetDownloadToken;
@property(copy,readonly) NSURL * URL;
@property(copy,readonly) NSURL * destinationURL;


- (id)destinationURL;
- (unsigned long long)AVAssetDownloadToken;
- (id)URL;

@end
