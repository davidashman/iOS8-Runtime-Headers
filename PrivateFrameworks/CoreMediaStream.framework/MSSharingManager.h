/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSTimer, NSString, NSArray, MSSharingProtocol, MSMediaStreamDaemon, NSMutableDictionary, <MSSharingManagerDelegate>, NSMutableArray;

@interface MSSharingManager : NSObject <MSSharingManager, MSSharingProtocolDelegate> {
    NSString *_personID;
    NSString *_manifestPath;
    NSArray *_shares;
    NSMutableArray *_sharesWithLocalModifications;
    MSSharingProtocol *_protocol;
    int _state;
    bool_requestCurrentStateRequested;
    NSMutableArray *_invitationQueue;
    NSMutableArray *_invitationResponseQueue;
    NSMutableDictionary *_manageShareByPersonID;
    NSMutableArray *_deleteQueue;
    NSTimer *_manageShareDebounceTimer;
    <MSSharingManagerDelegate> *_delegate;
    MSMediaStreamDaemon *_daemon;
}

@property MSMediaStreamDaemon * daemon;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property <MSSharingManagerDelegate> * delegate;
@property(readonly) NSString * personID;
@property(retain) NSArray * shares;

+ (id)_clearInstantiatedSharingManagersByPersonID;
+ (void)forgetPersonID:(id)arg1;
+ (void)abortAllActivities;
+ (id)existingSharingManagerForPersonID:(id)arg1;
+ (id)sharingManagerForPersonID:(id)arg1;

- (void)sharingProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)sharingProtocol:(id)arg1 didFailToSendInvitations:(id)arg2;
- (void)sharingProtocol:(id)arg1 didCompleteTransactionWithError:(id)arg2;
- (void)sharingProtocol:(id)arg1 didFindShareState:(id)arg2;
- (void)_requestCurrentShareState;
- (void)_sendNextManagedShare;
- (void)_sendNextInvitation;
- (void)_sendNextInvitationResponse;
- (void)_sendNextDeletion;
- (id)_sharesWithLocalModifications;
- (void)_shareDebounceTimerDidFire:(id)arg1;
- (void)_performNextQueuedAction;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)refreshCurrentShareState;
- (void)removeShare:(id)arg1;
- (void)modifyShare:(id)arg1;
- (void)respondToInvitation:(id)arg1 accept:(bool)arg2;
- (void)sendInvitationsForShares:(id)arg1;
- (void)setShares:(id)arg1;
- (id)shares;
- (void)setDaemon:(id)arg1;
- (id)personID;
- (id)daemon;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)abort;

@end
