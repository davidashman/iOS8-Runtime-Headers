/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreAuthentication.framework/CoreAuthentication
 */

@class LAClient, NSDictionary, NSString, <LAUIDelegate>, NSData;

@interface VRCredentialReference : NSObject  {
    LAClient *_client;
    <LAUIDelegate> *_delegateProxy;
    NSDictionary *_lastEvaluatePolicyResult;
    NSString *_creatorDisplayName;
    NSData *_credentialHandle;
}

@property(readonly) NSString * creatorDisplayName;
@property(readonly) NSData * credentialHandle;


- (id)credentialHandle;
- (void)sendClientRequest:(id)arg1 params:(id)arg2 reply:(id)arg3;
- (id)resultForTag:(id)arg1;
- (bool)evaluateACL:(id)arg1 operation:(id)arg2 hints:(id)arg3 error:(id*)arg4;
- (bool)evaluatePolicy:(id)arg1 hints:(id)arg2 error:(id*)arg3;
- (bool)setupNewReferenceWithError:(id*)arg1;
- (void)setupWithCredentialHandle:(id)arg1 uiDelegate:(id)arg2 reply:(id)arg3;
- (void)setupWithCredentialHandle:(id)arg1 domain:(id)arg2 reply:(id)arg3;
- (void)setupWithCredentialHandle:(id)arg1 reply:(id)arg2;
- (void)setupNewReferenceWithReply:(id)arg1;
- (void)resultForTag:(id)arg1 reply:(id)arg2;
- (void)evaluateACL:(id)arg1 operation:(id)arg2 hints:(id)arg3 reply:(id)arg4;
- (void)evaluatePolicy:(id)arg1 hints:(id)arg2 reply:(id)arg3;
- (bool)setupWithCredentialHandle:(id)arg1 error:(id*)arg2;
- (id)creatorDisplayName;
- (void)setupWithCredentialHandle:(id)arg1 domain:(id)arg2 uiDelegate:(id)arg3 reply:(id)arg4;
- (void)invalidate;
- (void).cxx_destruct;

@end
