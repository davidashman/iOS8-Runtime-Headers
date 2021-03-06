/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIJSDOMFeatureNavigationDocument, SKUISectionViewElement;

@interface SKUISplitViewTemplateElement : SKUIViewElement  {
    SKUIJSDOMFeatureNavigationDocument *_leftNavigationDocument;
    long long _preferredDisplayMode;
    SKUIJSDOMFeatureNavigationDocument *_rightNavigationDocument;
}

@property(readonly) long long preferredDisplayMode;
@property(readonly) SKUIJSDOMFeatureNavigationDocument * leftNavigationDocument;
@property(readonly) SKUIJSDOMFeatureNavigationDocument * rightNavigationDocument;
@property(readonly) SKUISectionViewElement * leftSectionElement;
@property(readonly) SKUISectionViewElement * rightSectionElement;
@property(readonly) bool usesInlineSplitContent;

+ (id)supportedFeatures;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (bool)usesInlineSplitContent;
- (id)rightNavigationDocument;
- (id)leftNavigationDocument;
- (id)_sectionElementForIndex:(long long)arg1;
- (id)rightSectionElement;
- (id)leftSectionElement;
- (void).cxx_destruct;
- (long long)preferredDisplayMode;

@end
