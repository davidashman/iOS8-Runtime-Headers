/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSString, NSObject<OS_xpc_object>, NSObject<OS_dispatch_queue>;

@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessArbiter> {
    NSObject<OS_xpc_object> *_server;
    NSObject<OS_dispatch_queue> *_serverQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _serverEventHandler;

    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_presentersByID;
    NSMutableDictionary *_providersByID;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)_willBeginOperationForReactor:(id)arg1 withDescription:(id)arg2;
+ (void)_accessPresenterOperationRecordsUsingBlock:(id)arg1;
+ (id)_fileReactorDebuggingInformation;
+ (id)_idForReactor:(id)arg1;

- (void)finalize;
- (void)dealloc;
- (void)_makeProvider:(id)arg1 observeEndOfWriteAtURL:(id)arg2 forAccessClaimWithID:(id)arg3 processIdentifier:(int)arg4;
- (void)_makeProvider:(id)arg1 observePresentationChangeOfKind:(id)arg2 withPresenterID:(id)arg3 processIdentifier:(int)arg4 url:(id)arg5 newURL:(id)arg6 completionHandler:(id)arg7;
- (void)_makeProvider:(id)arg1 providePhysicalURLForURL:(id)arg2 completionHandler:(id)arg3;
- (void)_makeProvider:(id)arg1 cancelProvidingItemAtURL:(id)arg2 forAccessClaimWithID:(id)arg3;
- (void)_makeProvider:(id)arg1 provideItemAtURL:(id)arg2 forAccessClaimWithID:(id)arg3 processIdentifier:(int)arg4 completionHandler:(id)arg5;
- (void)_makePresenter:(id)arg1 setLastPresentedItemEventIdentifier:(unsigned long long)arg2;
- (void)_makePresenter:(id)arg1 observeVersionChangeOfKind:(id)arg2 withClientID:(id)arg3 name:(id)arg4 subitemURL:(id)arg5;
- (void)_makePresenter:(id)arg1 observeUbiquityChangeWithSubitemURL:(id)arg2;
- (void)_makePresenterObserveReconnection:(id)arg1;
- (void)_makePresenterObserveDisconnection:(id)arg1;
- (void)_makePresenter:(id)arg1 observeMoveToURL:(id)arg2 withSubitemURL:(id)arg3;
- (void)_makePresenter:(id)arg1 observeChangeWithSubitemURL:(id)arg2;
- (void)_makePresenter:(id)arg1 reacquireFromWritingClaimForID:(id)arg2;
- (void)_makePresenter:(id)arg1 reacquireFromReadingClaimForID:(id)arg2;
- (void)_makePresenter:(id)arg1 relinquishToWritingClaimWithID:(id)arg2 options:(unsigned long long)arg3 subitemURL:(id)arg4 completionHandler:(id)arg5;
- (void)_makePresenter:(id)arg1 relinquishToReadingClaimWithID:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id)arg4;
- (id)_writeRelinquishmentForPresenter:(id)arg1;
- (void)_makePresenter:(id)arg1 accommodateDisconnectionWithCompletionHandler:(id)arg2;
- (void)_makePresenter:(id)arg1 accommodateDeletionWithSubitemURL:(id)arg2 completionHandler:(id)arg3;
- (void)_makePresenter:(id)arg1 relinquishToAccessClaimWithID:(id)arg2 ifNecessaryUsingSelector:(SEL)arg3 recordingRelinquishment:(id)arg4 continuer:(id)arg5;
- (id)_readRelinquishmentForPresenter:(id)arg1;
- (void)_makePresenter:(id)arg1 saveChangesWithCompletionHandler:(id)arg2;
- (id)initWithServer:(id)arg1 queue:(id)arg2 eventHandler:(id)arg3;
- (void)handleCanceledServer;
- (void)handleMessage:(id)arg1;
- (void)getDebugInfoWithCompletionHandler:(id)arg1;
- (id)fileProviders;
- (void)removeFileProvider:(id)arg1;
- (void)addFileProvider:(id)arg1 completionHandler:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;
- (void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;
- (void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;
- (void)revokeSubarbitrationClaimForID:(id)arg1;
- (void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;
- (void)revokeAccessClaimForID:(id)arg1;
- (id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(bool)arg2;
- (void)cancelAccessClaimForID:(id)arg1;
- (id)idForFileReactor:(id)arg1;
- (id)filePresenters;
- (void)removeFilePresenter:(id)arg1;
- (void)addFilePresenter:(id)arg1;

@end
