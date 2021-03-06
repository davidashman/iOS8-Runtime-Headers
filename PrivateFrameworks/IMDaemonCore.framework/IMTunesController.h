/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class NSMutableDictionary, NSDictionary, NSString, NSDate, NSMutableArray;

@interface IMTunesController : NSObject  {
    NSDate *_lastChange;
    NSDictionary *_lastInfo;
    NSMutableDictionary *_playerInfo;
    NSMutableArray *_listeners;
    NSString *_messageFormat;
}

@property(readonly) bool isEnabled;
@property(readonly) NSDictionary * playerInfo;
@property(readonly) NSString * messageFormat;

+ (id)sharedTunesController;

- (void)_playerChangedNotification:(id)arg1;
- (void)_playerChanged:(id)arg1;
- (void)_updateMessage;
- (id)messageFormat;
- (id)playerInfo;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (bool)isEnabled;
- (id)init;
- (void)dealloc;

@end
