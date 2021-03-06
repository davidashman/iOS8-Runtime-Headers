/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary;

@interface CKDShareInvitationResponseURLRequest : CKDURLRequest  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _invitationResponsePostedBlock;

    NSArray *_invitationsToAccept;
    NSArray *_invitationsToDecline;
    NSMutableDictionary *_invitationIDByRequestID;
}

@property(copy) id invitationResponsePostedBlock;
@property(retain) NSArray * invitationsToAccept;
@property(retain) NSArray * invitationsToDecline;
@property(retain) NSMutableDictionary * invitationIDByRequestID;


- (void)setInvitationIDByRequestID:(id)arg1;
- (void)setInvitationResponsePostedBlock:(id)arg1;
- (id)invitationResponsePostedBlock;
- (id)invitationIDByRequestID;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (void)setInvitationsToDecline:(id)arg1;
- (id)invitationsToDecline;
- (void)setInvitationsToAccept:(id)arg1;
- (id)invitationsToAccept;
- (id)initWithInvitationsToAccept:(id)arg1 invitationsToDecline:(id)arg2;
- (int)operationType;
- (void).cxx_destruct;

@end
