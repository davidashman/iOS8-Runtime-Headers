/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUINavigationBarViewElement, NSArray, SKUISectionViewElement, SKUIDividerViewElement, NSMutableArray, SKUIIndexBarViewElement;

@interface SKUIStackTemplateElement : SKUIViewElement  {
    NSMutableArray *_collectionElements;
    bool_usesSplits;
}

@property(readonly) NSArray * collectionElements;
@property(readonly) SKUIIndexBarViewElement * indexBarViewElement;
@property(readonly) SKUINavigationBarViewElement * navigationBarElement;
@property(readonly) SKUISectionViewElement * leftSectionElement;
@property(readonly) SKUISectionViewElement * rightSectionElement;
@property(readonly) SKUIDividerViewElement * splitViewDividerElement;


- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)navigationBarElement;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)splitViewDividerElement;
- (id)collectionElements;
- (id)rightSectionElement;
- (id)leftSectionElement;
- (id)indexBarViewElement;
- (void).cxx_destruct;

@end
