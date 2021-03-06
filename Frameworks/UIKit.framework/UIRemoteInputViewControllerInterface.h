/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, <_UIIVCResponseDelegate>;

@interface UIRemoteInputViewControllerInterface : NSExtensionContext <_UIIVCResponseDelegate> {
    <_UIIVCResponseDelegate> *_responseDelegate;
}

@property(retain) <_UIIVCResponseDelegate> * responseDelegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)_openURL:(id)arg1 completion:(id)arg2;
- (void)_tearDownRemoteService;
- (void)_handleInputViewControllerState:(id)arg1;
- (void)_performInputViewControllerOutput:(id)arg1;
- (void)setResponseDelegate:(id)arg1;
- (id)responseDelegate;

@end
