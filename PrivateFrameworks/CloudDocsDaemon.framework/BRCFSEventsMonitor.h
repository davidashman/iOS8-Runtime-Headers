/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <BRCFSEventsDelegate>, NSString, BRCRelativePath, BRCAccountSession, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_queue>, BRCFSEventsPersistedState, NSObject<OS_dispatch_source>, PQLConnection;

@interface BRCFSEventsMonitor : NSObject <BRCModule, BRCLowDiskDelegate> {
    BRCAccountSession *_session;

  /* Unexpected information at end of encoded ivar type: i */
  /* Error parsing encoded ivar type info: Ai */
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_suspendCount;


  /* Unexpected information at end of encoded ivar type: i */
  /* Error parsing encoded ivar type info: Ai */
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_resetCount;

    BRCFSEventsPersistedState *_persistedState;
    NSString *_devicePath;
    NSString *_rootPathRelativeToDevice;
    NSObject<OS_dispatch_source> *_rootVnodeWatcher;
    bool_volumeHasLowDiskSpace;
    bool_volumeIsCaseSensitive;
    struct __FSEventStream { } *_stream;
    NSObject<OS_dispatch_queue> *_streamQueue;
    NSObject<OS_dispatch_source> *_historicalEventSource;
    BRCFSEventsPersistedState *_rendezVous;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    bool_drainEvents;
    BRCRelativePath *_root;
    <BRCFSEventsDelegate> *_delegate;
    PQLConnection *_db;
}

@property <BRCFSEventsDelegate> * delegate;
@property(setter=setDB:,retain) PQLConnection * db;
@property(readonly) BRCRelativePath * root;
@property(readonly) bool volumeIsCaseSensitive;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)didProcessEventID:(unsigned long long)arg1;
- (bool)setUpStreamSynchronously:(bool)arg1 error:(id*)arg2;
- (bool)setUpRootAtPath:(id)arg1 error:(id*)arg2;
- (void)fseventAtPath:(id)arg1 withFlags:(unsigned int)arg2 andID:(unsigned long long)arg3 eventIndex:(unsigned int)arg4 eventCount:(unsigned int)arg5 initialScan:(bool)arg6;
- (void)signalAfterCurrentFSEvent:(id)arg1;
- (bool)openWithRootPath:(id)arg1 error:(id*)arg2;
- (void)setDB:(id)arg1;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(bool)arg2;
- (bool)volumeIsCaseSensitive;
- (id)initWithAccountSession:(id)arg1;
- (id)db;
- (void)_cancel;
- (void)resume;
- (id)root;
- (void)setDelegate:(id)arg1;
- (void)close;
- (id)delegate;
- (void)suspend;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;

@end
