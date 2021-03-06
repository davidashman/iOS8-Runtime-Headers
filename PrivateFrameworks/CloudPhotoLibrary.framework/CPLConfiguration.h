/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSURLSession, NSDictionary, NSURL, NSDate, NSObject<OS_dispatch_queue>;

@interface CPLConfiguration : NSObject  {
    NSURL *_configurationFileURL;
    NSDictionary *_configuration;
    NSDate *_lastUpdate;
    double _updateInterval;
    NSURLSession *_currentSession;
    NSObject<OS_dispatch_queue> *_lock;
}

+ (void)disableConfigurationFetching;

- (void)check;
- (void)_setContents:(id)arg1;
- (double)_updateInterval;
- (void)refetchFromDisk;
- (id)initWithClientLibraryBaseURL:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)_load;
- (void).cxx_destruct;
- (void)_save;

@end
