/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class IDSServiceMonitor, NSMutableSet;

@interface IDSServiceContainer : NSObject  {
    IDSServiceMonitor *_monitor;
    NSMutableSet *_listeners;
}

@property(retain) IDSServiceMonitor * monitor;
@property(retain,readonly) NSMutableSet * listeners;


- (id)listeners;
- (bool)addListenerID:(id)arg1;
- (bool)hasListenerID:(id)arg1;
- (id)initWithService:(id)arg1;
- (bool)removeListenerID:(id)arg1;
- (void)setMonitor:(id)arg1;
- (id)monitor;
- (void)dealloc;

@end
