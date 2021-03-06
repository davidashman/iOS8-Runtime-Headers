/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLPublishingAgentDelegate>, NSString, NSData, PLVideoRemaker, NSMutableArray;

@interface PLPublishingAgent : NSObject <PLDataArrayInputStreamProgressDelegate, UIAlertViewDelegate> {
    id _userInfo;
    id _delegate;
    NSString *_mediaPath;
    NSData *_mediaData;
    NSString *_mimeType;
    bool_deleteAfterPublishing;
    double _changeRate;
    long long _currentValue;
    double _estimatedTimeRemaining;
    long long _maxValue;
    long long _normalizedCurrentValue;
    long long _normalizedMaxValue;
    float _percentComplete;
    float _remakingPercentComplete;
    float _progressMultiplier;
    NSMutableArray *_snapshotTimes;
    NSMutableArray *_snapshotValues;
    bool_ownerIsCamera;
    bool_needsRemaking;
    double _startTime;
    double _endTime;
    long long _approximateHDUploadSize;
    long long _approximateSDUploadSize;
    bool_mediaIsHDVideo;
    bool_enableHDUpload;
    bool_needsTrimming;
    bool_allowsHDOver3GUpload;
    int _selectedOption;
    PLVideoRemaker *_remaker;
    int _remakerMode;
    SEL _completionSelector;
    unsigned int _remakingWasCancelled : 1;
    unsigned int _remaking : 1;
    unsigned int _publishing : 1;
    bool_shouldCancelPublish;
}

@property <PLPublishingAgentDelegate> * delegate;
@property bool ownerIsCamera;
@property long long approximateHDUploadSize;
@property long long approximateSDUploadSize;
@property bool mediaIsHDVideo;
@property bool enableHDUpload;
@property bool needsTrimming;
@property int remakerMode;
@property int selectedOption;
@property float progressMultiplier;
@property bool allowsHDOver3GUpload;
@property bool shouldCancelPublish;
@property(readonly) bool allowsCellularAccessForRequests;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)publishingAgentForBundleNamed:(id)arg1 toPublishMedia:(id)arg2;

- (void)setShouldCancelPublish:(bool)arg1;
- (bool)shouldCancelPublish;
- (void)setProgressMultiplier:(float)arg1;
- (float)progressMultiplier;
- (void)setSelectedOption:(int)arg1;
- (int)remakerMode;
- (void)setNeedsTrimming:(bool)arg1;
- (bool)needsTrimming;
- (bool)enableHDUpload;
- (bool)mediaIsHDVideo;
- (long long)approximateSDUploadSize;
- (long long)approximateHDUploadSize;
- (void)setOwnerIsCamera:(bool)arg1;
- (bool)ownerIsCamera;
- (void)showAlertWithError:(id)arg1;
- (id)progressViewMessageDuringRemake;
- (bool)isRemaking;
- (void)cancelRemaking;
- (float)remakingPercentComplete;
- (void)setTotalBytesWritten:(long long)arg1 totalBytes:(long long)arg2;
- (double)maximumVideoDuration;
- (void)willDismiss;
- (void)presentModalSheetInViewController:(id)arg1;
- (void)doneButtonClicked;
- (void)cancelButtonClicked;
- (void)resignPublishingSheetResponders;
- (void)setTrimStartTime:(double)arg1 andEndTime:(double)arg2;
- (void)setRemakerMode:(int)arg1;
- (void)setPublishing:(bool)arg1;
- (bool)isPublishing;
- (bool)deleteMediaFileAfterPublishing;
- (id)mediaPath;
- (bool)allowsCellularAccessForRequests;
- (void)dataArrayInputStreamBytesWereRead:(id)arg1;
- (id)tellAFriendSubject;
- (id)tellAFriendURL;
- (bool)allowsTellingFriend;
- (bool)allowsViewingOnHost;
- (void)_remakerDidFinish:(id)arg1;
- (id)mediaTitle;
- (void)_stopNetworkObservation;
- (void)_transcodeVideo:(id)arg1;
- (void)_agentIsReadyToPublish:(id)arg1;
- (bool)isVideoMedia;
- (int)_remakerModeForSelectedOption;
- (void)setApproximateHDUploadSize:(long long)arg1;
- (void)setApproximateSDUploadSize:(long long)arg1;
- (void)_setApproximateVideoUploadSizes;
- (void)setAllowsHDOver3GUpload:(bool)arg1;
- (void)setMediaIsHDVideo:(bool)arg1;
- (void)setDeleteMediaFileAfterPublishing:(bool)arg1;
- (void)setMediaPath:(id)arg1;
- (id)initWithMedia:(id)arg1;
- (void)_setUpPublishingParams;
- (void)_startNetworkObservation;
- (void)setEnableHDUpload:(bool)arg1;
- (bool)allowsHDOver3GUpload;
- (int)selectedOption;
- (void)_cancelRemaking:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)videoRemaker:(id)arg1 progressDidChange:(float)arg2;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (id)mediaURL;
- (void)setMediaData:(id)arg1;
- (id)mediaData;
- (void)_networkReachabilityDidChange:(id)arg1;
- (id)tellAFriendBody;
- (void)_updateStatisticsFromSnapshots;
- (double)estimatedTimeRemaining;
- (void)setUserInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)userInfo;
- (id)delegate;
- (void)dealloc;
- (id)serviceName;
- (void)dismiss;
- (id)navigationController;
- (void)snapshot;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (float)percentComplete;
- (void)publish;

@end
