/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIViewElement, NSString;

@interface SKUIPageComponent : NSObject <SSMetricsEventFieldProvider> {
    long long _metricsLocationPosition;
    SKUIViewElement *_viewElement;
}

@property(readonly) SKUIViewElement * viewElement;
@property(readonly) long long componentType;
@property(getter=isMissingItemData,readonly) bool missingItemData;
@property(readonly) NSString * metricsElementName;
@property long long metricsLocationPosition;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)viewElement;
- (void)_setMetricsLocationPosition:(long long)arg1;
- (long long)metricsLocationPosition;
- (void)_enumerateMissingItemIdentifiersFromLockups:(id)arg1 startIndex:(long long)arg2 usingBlock:(id)arg3;
- (void)_enumerateMissingItemIdentifiersFromLinks:(id)arg1 startIndex:(long long)arg2 usingBlock:(id)arg3;
- (void)_enumerateMissingItemIdentifiersFromBricks:(id)arg1 startIndex:(long long)arg2 usingBlock:(id)arg3;
- (id)metricsElementName;
- (bool)isMissingItemData;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(id)arg2;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithViewElement:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;
- (long long)componentType;
- (id)valueForMetricsField:(id)arg1;
- (void).cxx_destruct;

@end
