/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray;

@interface CKDFetchShareInvitationsOperation : CKDOperation  {
    bool_queryAllContainers;
    NSArray *_shareInvitations;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _shareInvitationFetchedProgressBlock;

    long long _fetchType;
}

@property(retain) NSArray * shareInvitations;
@property(copy) id shareInvitationFetchedProgressBlock;
@property long long fetchType;
@property bool queryAllContainers;


- (void)setShareInvitations:(id)arg1;
- (void)_handleShareInvitationFetched:(id)arg1 responseCode:(id)arg2;
- (id)shareInvitationFetchedProgressBlock;
- (id)shareInvitations;
- (void)setShareInvitationFetchedProgressBlock:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)setQueryAllContainers:(bool)arg1;
- (bool)queryAllContainers;
- (void)setFetchType:(long long)arg1;
- (long long)fetchType;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void).cxx_destruct;

@end
