/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSDictionary, __NSCFLocalDownloadFile, NSObject<OS_dispatch_data>;

@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener> {
    bool_canWrite;
    bool_suppressProgress;
    bool_needFinish;
    bool_didIssueNeedFinish;
    int _seqNo;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fileCompletion;

    __NSCFLocalDownloadFile *_downloadFile;
    NSObject<OS_dispatch_data> *_writeBuffer;
    unsigned long long _ioSuspend;
    unsigned long long _totalWrote;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _resumeCallback;

    long long _initialResumeSize;
    NSDictionary *_originalResumeInfo;
    unsigned long long __transientWriteProgress;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __afterDidReportProgressOnQueue;

}

@property(copy) id fileCompletion;
@property(retain) __NSCFLocalDownloadFile * downloadFile;
@property bool canWrite;
@property bool suppressProgress;
@property NSObject<OS_dispatch_data> * writeBuffer;
@property unsigned long long ioSuspend;
@property int seqNo;
@property bool needFinish;
@property bool didIssueNeedFinish;
@property unsigned long long totalWrote;
@property(copy) id resumeCallback;
@property long long initialResumeSize;
@property(retain) NSDictionary * originalResumeInfo;
@property unsigned long long _transientWriteProgress;
@property(copy) id _afterDidReportProgressOnQueue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)isKindOfClass:(Class)arg1;
- (void)_private_posixError:(int)arg1;
- (void)cancelByProducingResumeData:(id)arg1;
- (id)initWithSession:(id)arg1 request:(id)arg2 ident:(unsigned long long)arg3;
- (int)openItemForPath:(id)arg1 mode:(int)arg2;
- (void)_private_fileCompletion;
- (void)setDidIssueNeedFinish:(bool)arg1;
- (bool)didIssueNeedFinish;
- (void)setIoSuspend:(unsigned long long)arg1;
- (unsigned long long)ioSuspend;
- (void)writeAndResume;
- (void)_private_errorCompletion;
- (id)createResumeInformation:(id)arg1;
- (void)setSeqNo:(int)arg1;
- (int)seqNo;
- (id)writeBuffer;
- (void)set_afterDidReportProgressOnQueue:(id)arg1;
- (void)reportProgress:(unsigned long long)arg1;
- (id)_afterDidReportProgressOnQueue;
- (id)fileCompletion;
- (void)setSuppressProgress:(bool)arg1;
- (bool)suppressProgress;
- (void)set_transientWriteProgress:(unsigned long long)arg1;
- (unsigned long long)_transientWriteProgress;
- (unsigned long long)totalWrote;
- (void)_onqueue_cancelByProducingResumeData:(id)arg1;
- (id)resumeCallback;
- (void)checkWrite;
- (void)setNeedFinish:(bool)arg1;
- (bool)needFinish;
- (id)originalResumeInfo;
- (void)setResumeCallback:(id)arg1;
- (void)setWriteBuffer:(id)arg1;
- (void)setOriginalResumeInfo:(id)arg1;
- (long long)initialResumeSize;
- (void)setTotalWrote:(unsigned long long)arg1;
- (bool)setupForNewDownload:(id)arg1;
- (void)setInitialResumeSize:(long long)arg1;
- (bool)canWrite;
- (void)setCanWrite:(bool)arg1;
- (id)downloadFile;
- (void)setDownloadFile:(id)arg1;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(id)arg2;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(id)arg2;
- (void)_task_onqueue_didFinish;
- (id)initWithTask:(id)arg1;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(id)arg2;
- (void)setFileCompletion:(id)arg1;
- (id)initWithSession:(id)arg1 resumeData:(id)arg2 ident:(unsigned long long)arg3;
- (id)initWithSession:(id)arg1 request:(id)arg2 filePath:(id)arg3 ident:(unsigned long long)arg4;
- (void)_onqueue_completeInitialization;
- (void)dealloc;

@end
