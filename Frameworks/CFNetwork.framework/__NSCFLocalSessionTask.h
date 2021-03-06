/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSData, NSObject<OS_dispatch_data>, __NSURLSessionLocal, __NSCFURLSessionConnection, NSURL, NSString, NSInputStream, NSObject<OS_dispatch_source>, NSURLSessionConfiguration;

@interface __NSCFLocalSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass, NSURLSessionDataTaskSubclass, NSURLSessionUploadTaskSubclass, SessionConnectionDelegate> {
    bool_pendingResponseDisposition;
    bool_pendingResponseDisposition_didFinish;
    bool_duetAccountingIsDiscretionary;
    bool_didIssueDidFinish;
    __NSCFURLSessionConnection *_cfConn;
    NSURL *_uploadFile;
    NSData *_uploadData;
    NSInputStream *_uploadDataStream;
    NSObject<OS_dispatch_data> *_dataTaskData;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _dataTaskCompletion;

    NSObject<OS_dispatch_data> *_pendingResponseBytes;
    __NSURLSessionLocal *_localSession;
    unsigned long long _suspendCount;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _async_initialization;

    NSObject<OS_dispatch_source> *_resourceTimeout;
    NSString *_duetAccountedBundleID;
    struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct NetworkProxy {} *x11; struct __CFString {} *x12; int x13; int x14; } *_connKey;
    NSURLSessionConfiguration *__configuration;
}

@property(retain) __NSCFURLSessionConnection * cfConn;
@property(retain) NSURL * uploadFile;
@property(retain) NSData * uploadData;
@property(retain) NSInputStream * uploadDataStream;
@property NSObject<OS_dispatch_data> * dataTaskData;
@property(copy) id dataTaskCompletion;
@property bool pendingResponseDisposition;
@property bool pendingResponseDisposition_didFinish;
@property NSObject<OS_dispatch_data> * pendingResponseBytes;
@property(retain) __NSURLSessionLocal * localSession;
@property unsigned long long suspendCount;
@property(copy) id async_initialization;
@property NSObject<OS_dispatch_source> * resourceTimeout;
@property(retain) NSString * duetAccountedBundleID;
@property bool duetAccountingIsDiscretionary;
@property bool didIssueDidFinish;
@property struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct NetworkProxy {} *x11; struct __CFString {} *x12; int x13; int x14; }* connKey;
@property(retain) NSURLSessionConfiguration * _configuration;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)set_configuration:(id)arg1;
- (id)_configuration;
- (void)setDuetAccountingIsDiscretionary:(bool)arg1;
- (bool)duetAccountingIsDiscretionary;
- (void)setDuetAccountedBundleID:(id)arg1;
- (id)duetAccountedBundleID;
- (id)uploadDataStream;
- (id)uploadData;
- (id)uploadFile;
- (id)posixError:(int)arg1;
- (id)nsurlError:(int)arg1;
- (void)cancel_with_error:(id)arg1;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)connection:(id)arg1 _conditionalRequirementsChanged:(bool)arg2;
- (void)connectionWaiting:(id)arg1;
- (void)connection:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completion:(id)arg3;
- (void)connection:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 completion:(id)arg3;
- (void)connection:(id)arg1 challenged:(id)arg2 authCallback:(id)arg3;
- (void)connection:(id)arg1 didReceiveConnectionCacheKey:(struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct NetworkProxy {} *x11; struct __CFString {} *x12; int x13; int x14; }*)arg2;
- (void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)connectionWillFinishLoading:(id)arg1;
- (void)connection:(id)arg1 willCacheResponse:(id)arg2 responseCallback:(id)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 completion:(id)arg3;
- (void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamCallback:(id)arg3;
- (void)connection:(id)arg1 wasRedirected:(id)arg2 newRequest:(id)arg3 responseCallback:(id)arg4;
- (void)_onqueue_disavow;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_conditionalRequirementsChanged:(bool)arg1;
- (void)_onqueue_connectionWaiting;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(id)arg2;
- (void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)_onqueue_didReceiveDispatchData:(id)arg1 completion:(id)arg2;
- (void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(id)arg3;
- (void)_onqueue_needNewBodyStream:(id)arg1 withCompletion:(id)arg2;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(id)arg2;
- (void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(id)arg3;
- (id)timeoutError;
- (void)setResourceTimeout:(id)arg1;
- (void)startResourceTimer;
- (id)error:(id)arg1 code:(long long)arg2;
- (unsigned long long)suspendCount;
- (void)_onqueue_cancel_with_error:(id)arg1;
- (id)canceledError;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (id)async_initialization;
- (void)setDidIssueDidFinish:(bool)arg1;
- (bool)didIssueDidFinish;
- (id)dataTaskData;
- (bool)pendingResponseDisposition;
- (void)_finishBecomeDownload:(id)arg1;
- (void)_finishBecomeStream:(id)arg1;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(id)arg2;
- (void)_finishAllow;
- (id)pendingResponseBytes;
- (void)_onqueue_cancel;
- (void)_task_onqueue_didFinish;
- (void)setPendingResponseDisposition_didFinish:(bool)arg1;
- (bool)pendingResponseDisposition_didFinish;
- (void)_onqueue_resume;
- (void)setConnKey:(struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct NetworkProxy {} *x11; struct __CFString {} *x12; int x13; int x14; }*)arg1;
- (struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct NetworkProxy {} *x11; struct __CFString {} *x12; int x13; int x14; }*)connKey;
- (void)setPendingResponseBytes:(id)arg1;
- (void)setDataTaskData:(id)arg1;
- (void)setUploadDataStream:(id)arg1;
- (void)setUploadData:(id)arg1;
- (void)setCfConn:(id)arg1;
- (id)resourceTimeout;
- (id)initWithTask:(id)arg1;
- (void)setSuspendCount:(unsigned long long)arg1;
- (void)setLocalSession:(id)arg1;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(id)arg2;
- (void)_private_onqueue_didReceiveResponseDisposition:(long long)arg1;
- (void)setPendingResponseDisposition:(bool)arg1;
- (void)_onqueue_suspend;
- (id)localSession;
- (id)dataTaskCompletion;
- (void)_private_onqueue_didReceiveResponse:(id)arg1;
- (void)_onqueue_completeInitialization;
- (void)setAsync_initialization:(id)arg1;
- (id)_onqueue_strippedMutableRequest;
- (void)setUploadFile:(id)arg1;
- (void)setDataTaskCompletion:(id)arg1;
- (id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned long long)arg3 session:(id)arg4;
- (void)setConnection:(id)arg1;
- (id)cfConn;
- (void)dealloc;
- (id)description;

@end
