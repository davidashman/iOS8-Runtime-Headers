/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NSURL, NSMutableData, NSUUID;

@interface NEFilterSource : NSObject  {
    bool_registered;
    long long _status;
    NSURL *_url;
    long long _direction;
    unsigned long long _socketIdentifier;
    NSMutableData *_pendingData;
    NSUUID *_flowUUID;
    unsigned long long _pendingDataStartIndex;
    unsigned long long _peekIndex;
    unsigned long long _passLength;
}

@property(readonly) long long status;
@property(readonly) NSURL * url;
@property(readonly) long long direction;
@property(readonly) unsigned long long socketIdentifier;
@property bool registered;
@property(retain) NSMutableData * pendingData;
@property(retain) NSUUID * flowUUID;
@property unsigned long long pendingDataStartIndex;
@property unsigned long long peekIndex;
@property unsigned long long passLength;

+ (bool)filterRequired;
+ (void)connectToAgentWithCompletionHandler:(id)arg1;
+ (unsigned int)filterUnit;
+ (unsigned int)checkPolicyFilterUnit;
+ (void)initializeGlobals;

- (void)setFlowUUID:(id)arg1;
- (void)setPendingData:(id)arg1;
- (void)dataCompleteWithCompletionQueue:(id)arg1 completionHandler:(id)arg2;
- (void)addData:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(id)arg3;
- (id)initWithURL:(id)arg1 direction:(long long)arg2 socketIdentifier:(unsigned long long)arg3;
- (void)prepareAgentWithHandler:(id)arg1;
- (bool)sendDataToPluginWithConnection:(id)arg1 completionHandler:(id)arg2;
- (void)setPassLength:(unsigned long long)arg1;
- (void)setPeekIndex:(unsigned long long)arg1;
- (unsigned long long)peekIndex;
- (void)setPendingDataStartIndex:(unsigned long long)arg1;
- (unsigned long long)pendingDataStartIndex;
- (id)pendingData;
- (unsigned long long)passLength;
- (unsigned long long)socketIdentifier;
- (id)flowUUID;
- (long long)direction;
- (long long)status;
- (void)setRegistered:(bool)arg1;
- (bool)registered;
- (id)url;
- (void).cxx_destruct;

@end
