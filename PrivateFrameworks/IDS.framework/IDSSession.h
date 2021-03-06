/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class _IDSSession;

@interface IDSSession : NSObject  {
    _IDSSession *_internal;
}

@property(readonly) int socket;
@property bool isAudioEnabled;
@property long long invitationTimeOut;
@property(readonly) unsigned int sessionEndedReason;


- (void)sendInvitation;
- (long long)invitationTimeOut;
- (void)setInvitationTimeOut:(long long)arg1;
- (void)sendInvitationWithData:(id)arg1;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3;
- (unsigned int)sessionEndedReason;
- (bool)sendData:(id)arg1 error:(id*)arg2;
- (void)sendSessionMessage:(id)arg1;
- (void)endSessionWithData:(id)arg1;
- (void)cancelInvitation;
- (void)declineInvitationWithData:(id)arg1;
- (void)acceptInvitationWithData:(id)arg1;
- (void)cancelInvitationWithData:(id)arg1;
- (void)sendInvitationWithData:(id)arg1 declineOnError:(bool)arg2;
- (void)sendInvitationWithOptions:(id)arg1;
- (bool)isAudioEnabled;
- (id)_internal;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setIsAudioEnabled:(bool)arg1;
- (void)declineInvitation;
- (void)acceptInvitation;
- (unsigned int)state;
- (void)dealloc;
- (int)socket;
- (void)endSession;

@end
