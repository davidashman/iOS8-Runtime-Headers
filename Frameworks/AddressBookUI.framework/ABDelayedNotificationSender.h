/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableArray;

@interface ABDelayedNotificationSender : NSObject  {
    struct __CFArray { } *_delegatesForDelayedNotification;
    NSMutableArray *_delayedNotifications;
    struct __CFDictionary { } *_delayedNotificationInfos;
}


- (void)addDelayedNotification:(id)arg1;
- (void)removeDelegate:(id)arg1 andDeliverDelayedNotifications:(bool)arg2;
- (void)addDelayedNotification:(id)arg1 withInfo:(struct __CFDictionary { }*)arg2 allowDuplicateNotification:(bool)arg3;
- (bool)containsDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;

@end
