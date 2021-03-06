/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSSet, NSMapTable, NSString, IDSAccount;

@interface _IDSConnection : NSObject <IDSDaemonListenerProtocol, IDSAccountDelegate> {
    id _messageContext;
    id _delegateContext;
    NSMapTable *_delegateToInfo;
    IDSAccount *_account;
    NSSet *_commands;
    NSString *_serviceToken;
    unsigned int _delegateCapabilities;
    bool_indirectDelegateCallouts;
}

@property(readonly) bool isActive;
@property(retain,readonly) IDSAccount * account;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)sendServerMessage:(id)arg1 command:(id)arg2;
- (void)setDelegateCapabilities:(unsigned int)arg1;
- (void)account:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)account:(id)arg1 devicesChanged:(id)arg2;
- (void)account:(id)arg1 isActiveChanged:(bool)arg2;
- (bool)_shouldAcceptIncomingType:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3;
- (id)_sendWithParameters:(id)arg1 options:(id)arg2 loggingType:(id)arg3 loggingDataSize:(unsigned long long)arg4;
- (void)_callDelegatesWithBlock:(id)arg1 group:(id)arg2;
- (bool)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (id)initWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(bool)arg3 delegateContext:(id)arg4;
- (void)_setTemporaryMessageContext:(id)arg1;
- (void)sessionInvitationReceivedWithPayload:(id)arg1 forTopic:(id)arg2 sessionID:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 transportType:(id)arg6;
- (void)protobufReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)messageIdentifier:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6;
- (void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(bool)arg6;
- (void)dataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)messageReceived:(id)arg1 withGUID:(id)arg2 withPayload:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7;
- (void)_callDelegatesWithBlock:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)_connect;
- (id)account;
- (void)removeDelegate:(id)arg1;
- (bool)isActive;
- (void)dealloc;

@end
