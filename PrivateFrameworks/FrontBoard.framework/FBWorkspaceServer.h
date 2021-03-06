/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class BSSignal, NSMutableDictionary, <FBWorkspaceServerDelegate>, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSMutableArray;

@interface FBWorkspaceServer : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    BSSignal *_invalidateSignal;
    NSMutableDictionary *_sceneIDToSceneHandlerMap;
    NSMutableArray *_messagesQueuedForSend;
    <FBWorkspaceServerDelegate> *_delegate;
    unsigned long long _transactionBlockDepth;
    bool_triedToSendMessageInTransaction;
}

@property <FBWorkspaceServerDelegate> * delegate;


- (void)_queue_setXPCConnection:(id)arg1;
- (id)_handlerForSceneID:(id)arg1;
- (void)_queue_deserializeEventFromMessage:(id)arg1 ofType:(Class)arg2 withSceneHandlerBlock:(id)arg3;
- (void)_queue_deserializeEventFromMessage:(id)arg1 ofType:(Class)arg2 withHandlerBlock:(id)arg3;
- (void)_queue_handleSceneDetachContext:(id)arg1;
- (void)_queue_handleSceneUpdateContext:(id)arg1;
- (void)_queue_handleSceneAttachContext:(id)arg1;
- (void)_queue_handleSceneDidReceiveActions:(id)arg1;
- (void)_queue_handleSceneDidUpdateClientSettings:(id)arg1;
- (void)_queue_handleDestroySceneRequest:(id)arg1;
- (void)_queue_handleCreateSceneRequest:(id)arg1;
- (void)_queue_handleMessage:(id)arg1;
- (void)_queue_clientExited;
- (void)sendSceneActionsEvent:(id)arg1;
- (void)sendDestroySceneEvent:(id)arg1 withCompletion:(id)arg2;
- (void)sendSceneUpdateEvent:(id)arg1 withCompletion:(id)arg2;
- (void)sendCreateSceneEvent:(id)arg1 withCompletion:(id)arg2;
- (void)unregisterSceneEventHandlerForSceneID:(id)arg1;
- (void)registerSceneEventHandler:(id)arg1 forSceneID:(id)arg2;
- (void)sendActionsEvent:(id)arg1 completion:(id)arg2;
- (bool)_queue_handleMessage:(id)arg1 withType:(long long)arg2;
- (void)_queue_sendMessage:(long long)arg1 withMessagePacker:(id)arg2 withReplyHandler:(id)arg3;
- (void)beginTransaction;
- (id)_queue;
- (void)endTransaction;
- (void)_queue_sendMessage:(long long)arg1 withEvent:(id)arg2;
- (void)_queue_sendReplyForMessage:(id)arg1 withEvent:(id)arg2;
- (void)_queue_sendMessage:(long long)arg1 withEvent:(id)arg2 withResponseEvent:(id)arg3 ofType:(Class)arg4;
- (void)_queue_invalidate;
- (void)setDelegate:(id)arg1;
- (void)invalidate;
- (id)delegate;
- (void)dealloc;
- (id)auditToken;
- (id)initWithQueue:(id)arg1;

@end
