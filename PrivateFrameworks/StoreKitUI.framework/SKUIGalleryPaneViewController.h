/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIEmbeddedMediaView, SKUIMediaComponent;

@interface SKUIGalleryPaneViewController : UIViewController  {
    SKUIMediaComponent *_component;
    long long _galleryIndex;
}

@property(readonly) SKUIMediaComponent * component;
@property(readonly) long long galleryIndex;
@property(readonly) SKUIEmbeddedMediaView * mediaView;


- (id)initWithMediaComponent:(id)arg1 galleryIndex:(long long)arg2;
- (long long)galleryIndex;
- (id)component;
- (id)mediaView;
- (void).cxx_destruct;

@end
