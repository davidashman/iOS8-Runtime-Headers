/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@class NSString, <PRSSessionController>, NSMutableData, NSURLSessionDataTask;

@interface PRSRealQueryTask : PRSQueryTask <PRSParsecDataHandler> {
    bool_doResume;
    bool_failed;
    bool_doCache;
    NSURLSessionDataTask *_dataTask;
    NSMutableData *_collectedData;
    double _startTime;
    NSString *_queryString;
    <PRSSessionController> *_factory;
    double _scaleFactor;
}

@property bool doResume;
@property bool failed;
@property bool doCache;
@property(retain) NSURLSessionDataTask * dataTask;
@property(retain) NSMutableData * collectedData;
@property double startTime;
@property(retain) NSString * queryString;
@property <PRSSessionController> * factory;
@property double scaleFactor;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setFactory:(id)arg1;
- (void)setCollectedData:(id)arg1;
- (void)setDoCache:(bool)arg1;
- (void)triggerQuery:(bool)arg1;
- (id)initWithSession:(id)arg1 handler:(id)arg2 factory:(id)arg3 queue:(id)arg4 scaleFactor:(double)arg5 feedback:(id)arg6;
- (id)factory;
- (id)collectedData;
- (void)_processSearchResponseOnClientQueue:(id)arg1;
- (bool)failed;
- (bool)doCache;
- (void)setDoResume:(bool)arg1;
- (bool)doResume;
- (void)setDataTask:(id)arg1;
- (id)dataTask;
- (void)setFailed:(bool)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)resume;
- (void)setStartTime:(double)arg1;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (double)startTime;
- (void)cancel;
- (void).cxx_destruct;
- (id)queryString;
- (void)setQueryString:(id)arg1;
- (double)scaleFactor;

@end
