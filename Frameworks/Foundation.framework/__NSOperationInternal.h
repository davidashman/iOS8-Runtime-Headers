/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSOperation, NSOperationQueue;

@interface __NSOperationInternal : NSObject  {
    unsigned char __pad1[8];
    NSOperation *__outerOp;
    NSOperation *__prevOp;
    NSOperation *__nextOp;
    NSOperation *__nextPriOp;
    NSOperationQueue *__queue;
    id __dependencies;
    id __down_dependencies;
    long long __unfinished_deps;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __completion;

    void *__obsInfo;
    void *__implicitObsInfo;
    long long __seqno;
    double __thread_prio;
    id __children;
    int __RC;
    int __state;
    BOOL __prio;
    unsigned char __cached_isReady;
    unsigned char __isCancelled;
    unsigned char __isBarrier;
    int __qoses;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } __wait_mutex;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    } __wait_cond;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } *__pthread;
    char *__nameBuffer;
    id __activity;
    struct pthread_override_s { } *__ov;
    unsigned char __pad3[0];
}

+ (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void*)arg7;

- (void)_invalidate;
- (void)finalize;
- (void)dealloc;
- (id)__;
- (void)_start:(id)arg1;
- (id)_dependencies;
- (void)_removeDependency:(id)arg1 outer:(id)arg2;
- (void)_addDependency:(id)arg1 outer:(id)arg2;
- (void)_waitUntilFinishedOrTimeout:(double)arg1 outer:(id)arg2;
- (void)_waitUntilFinished:(id)arg1;
- (void)_setName:(id)arg1 outer:(id)arg2;
- (id)_name;
- (void)_setCompletionBlock:(id)arg1 outer:(id)arg2;
- (id)_completionBlock;
- (void)_setThreadPriority:(double)arg1 outer:(id)arg2;
- (double)_threadPriority;
- (void)_setQueuePriority:(long long)arg1 outer:(id)arg2;
- (bool)_isReady;
- (bool)_isFinished;
- (bool)_isExecuting;
- (void)_cancel:(id)arg1;
- (bool)_isCancelled;
- (id)init:(id)arg1;
- (long long)_queuePriority;
- (id)_activity;

@end
