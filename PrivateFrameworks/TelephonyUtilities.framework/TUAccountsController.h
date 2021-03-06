/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSString, NSXPCConnection;

@interface TUAccountsController : NSObject  {
    int _outgoingRelayCallerIDChangedToken;
    NSXPCConnection *_xpcConnection;
}

@property(copy,readonly) NSString * outgoingRelayCallerID;
@property(copy,readonly) NSString * formattedOutgoingRelayCallerID;
@property(retain) NSXPCConnection * xpcConnection;
@property int outgoingRelayCallerIDChangedToken;


- (void)_tearDownXPCConnection;
- (void)setOutgoingRelayCallerIDChangedToken:(int)arg1;
- (int)outgoingRelayCallerIDChangedToken;
- (void)setXpcConnection:(id)arg1;
- (id)formattedOutgoingRelayCallerID;
- (id)outgoingRelayCallerID;
- (id)xpcConnection;
- (void)_setUpXPCConnection;
- (id)init;
- (void)dealloc;

@end
