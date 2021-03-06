/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@class PKHostPlugIn, NSObject<OS_dispatch_queue>;

@interface PKHostDefaults : NSUserDefaults  {
    PKHostPlugIn *_plugin;
    NSObject<OS_dispatch_queue> *_queue;
}

@property PKHostPlugIn * plugin;
@property(retain) NSObject<OS_dispatch_queue> * queue;


- (void)registerDefaults:(id)arg1;
- (id)plugin;
- (void)setQueue:(id)arg1;
- (void)setPlugin:(id)arg1;
- (id)initWithPlugIn:(id)arg1;
- (id)queue;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (bool)synchronize;
- (void).cxx_destruct;

@end
