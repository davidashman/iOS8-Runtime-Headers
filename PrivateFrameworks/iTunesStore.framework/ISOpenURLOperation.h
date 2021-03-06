/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation  {
    ISOpenURLRequest *_request;
}

@property(readonly) ISOpenURLRequest * openURLRequest;


- (id)openURLRequest;
- (id)_newSortedTargetsArray;
- (bool)_openURL:(id)arg1;
- (id)initWithOpenURLRequest:(id)arg1;
- (void)run;
- (id)init;
- (void)dealloc;

@end
