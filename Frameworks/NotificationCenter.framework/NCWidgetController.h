/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

@class NSXPCConnection;

@interface NCWidgetController : NSObject <_NCWidgetController_Service_IPC> {
    NSXPCConnection *_connection;
}

+ (id)widgetController;

- (void)setHasContent:(bool)arg1 forWidgetWithBundleIdentifier:(id)arg2;
- (id)_connectionForRequest;
- (void)__didReceiveHasContentRequest;
- (void)_invalidateConnection;
- (void)dealloc;

@end
