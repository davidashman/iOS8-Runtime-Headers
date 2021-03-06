/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSSet, NSMutableDictionary, NSMutableSet, MFError;

@interface MFDAMoveResponseConsumer : MFDAMailAccountConsumer <DAMessageMoveRequestConsumer> {
    NSSet *_messagesIDs;
    NSMutableDictionary *_newRemoteIDsByMessageID;
    NSMutableSet *_failures;
    MFError *_error;
}

@property(retain) MFError * error;


- (void)resultsForMessageMove:(id)arg1;
- (void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3;
- (id)initWithMessageIDs:(id)arg1 newRemoteIDsByMessageID:(id)arg2 failures:(id)arg3;
- (void)setError:(id)arg1;
- (id)error;
- (void)dealloc;

@end
