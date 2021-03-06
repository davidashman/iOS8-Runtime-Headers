/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSSet;

@interface CTCallCenter : NSObject  {
    void *_server;
    NSSet *_currentCalls;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _callEventHandler;

}

@property(retain) NSSet * currentCalls;
@property(copy) id callEventHandler;


- (void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)arg1;
- (void)setCurrentCalls:(id)arg1;
- (id)callEventHandler;
- (bool)getCurrentCallSetFromServer:(id)arg1;
- (bool)calculateCallStateChanges:(id)arg1;
- (void)setCallEventHandler:(id)arg1;
- (void)handleNotificationFromConnection:(void*)arg1 ofType:(id)arg2 withInfo:(id)arg3;
- (void)cleanUpServerConnection;
- (bool)setUpServerConnection;
- (id)currentCalls;
- (id)init;
- (void)dealloc;
- (id)description;

@end
