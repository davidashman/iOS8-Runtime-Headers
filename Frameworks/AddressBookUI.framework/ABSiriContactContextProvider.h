/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class CNContact;

@interface ABSiriContactContextProvider : NSObject <AFContextProvider> {
    CNContact *_contact;
}


- (id)getCurrentContext;
- (bool)allowContextProvider:(id)arg1;
- (void)_removeContextProviderOnMainThread;
- (id)contextManager;
- (id)initWithContact:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)dealloc;

@end
