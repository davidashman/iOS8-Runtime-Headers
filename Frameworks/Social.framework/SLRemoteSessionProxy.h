/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject, NSString, NSXPCConnection, NSXPCInterface, NSMutableArray, NSLock;

@interface SLRemoteSessionProxy : NSObject  {
    NSString *_serviceName;
    NSXPCInterface *_remoteInterface;
    id _remoteProxy;
    NSXPCConnection *_connection;
    NSMutableArray *_guaranteedRemoteCalls;
    NSLock *_guaranteedRemoteCallsLock;
    NSObject *_exportedObject;
    NSXPCInterface *_exportedInterface;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _connectionResetBlock;

}

@property NSObject * exportedObject;
@property(retain) NSXPCInterface * exportedInterface;
@property(copy) id connectionResetBlock;


- (void)_remoteSessionConnectionWasInterrupted;
- (id)connectionResetBlock;
- (void)registerGuaranteedRemoteCall:(id)arg1;
- (void)dropGuaraneteedRemoteCall:(id)arg1;
- (void)setConnectionResetBlock:(id)arg1;
- (id)initForRemoteServiceName:(id)arg1 remoteInterface:(id)arg2;
- (void)_setupConnection;
- (void)setExportedObject:(id)arg1;
- (void)setExportedInterface:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)exportedInterface;
- (id)exportedObject;
- (void)disconnect;

@end
