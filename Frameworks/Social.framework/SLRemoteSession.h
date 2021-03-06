/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class SLDatabase, NSXPCConnection;

@interface SLRemoteSession : NSObject  {
    NSXPCConnection *_connection;
    SLDatabase *_database;
}

@property(retain) NSXPCConnection * connection;
@property(retain) SLDatabase * database;


- (bool)clientHasEntitlement:(id)arg1;
- (id)initWithConnection:(id)arg1 database:(id)arg2;
- (void)setDatabase:(id)arg1;
- (id)database;
- (id)connection;
- (void)setConnection:(id)arg1;
- (void).cxx_destruct;

@end
