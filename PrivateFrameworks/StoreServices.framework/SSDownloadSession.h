/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSDownload, SSDownloadAsset, SSXPCConnection, NSObject<OS_dispatch_queue>;

@interface SSDownloadSession : NSObject  {
    SSXPCConnection *_controlConnection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _sessionID;
    long long _assetID;
    long long _downloadID;
}

@property(readonly) SSDownload * download;
@property(readonly) SSDownloadAsset * downloadAsset;


- (id)_copySessionPropertyWithKey:(const char *)arg1;
- (id)_initSSDownloadSession;
- (id)_initWithMessage:(id)arg1 controlConnection:(id)arg2;
- (id)downloadAsset;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)download;
- (void)dealloc;
- (id)description;

@end
