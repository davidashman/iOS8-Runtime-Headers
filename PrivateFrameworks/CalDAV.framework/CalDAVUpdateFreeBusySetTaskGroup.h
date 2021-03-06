/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSString, CoreDAVPropFindTask, NSURL, <CoreDAVTaskGroupDelegate>;

@interface CalDAVUpdateFreeBusySetTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVPropPatchTaskDelegate> {
    int _state;
    NSURL *_inboxURL;
    NSURL *_urlToAdd;
    NSString *_suffixToFilterOut;
    CoreDAVPropFindTask *_fetchTask;
}

@property <CoreDAVTaskGroupDelegate> * delegate;
@property int state;
@property(retain) NSURL * inboxURL;
@property(retain) NSURL * urlToAdd;
@property(retain) NSString * suffixToFilterOut;
@property(retain) CoreDAVPropFindTask * fetchTask;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 urlToAdd:(id)arg3 suffixToFilterOut:(id)arg4 taskManager:(id)arg5;
- (void)_startPropPatchWithURLs:(id)arg1;
- (id)urlToAdd;
- (id)suffixToFilterOut;
- (void)_startFetchFreeBusySet;
- (void)setSuffixToFilterOut:(id)arg1;
- (void)setUrlToAdd:(id)arg1;
- (void)setInboxURL:(id)arg1;
- (id)inboxURL;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (id)fetchTask;
- (void)setFetchTask:(id)arg1;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)startTaskGroup;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (void)dealloc;

@end
