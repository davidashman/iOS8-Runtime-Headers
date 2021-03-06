/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUITrendingSearchView, SKUITrendingSearchTemplateElement;

@interface SKUITrendingSearchDocumentViewController : SKUIViewController <SKUIDocumentViewController> {
    SKUITrendingSearchView *_resultsView;
    SKUITrendingSearchTemplateElement *_template;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)documentDidUpdate:(id)arg1;
- (void)_resultButtonAction:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_resultsViewContentInset;
- (void)_reloadResultsView;
- (id)initWithTemplateElement:(id)arg1;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillLayoutSubviews;

@end
