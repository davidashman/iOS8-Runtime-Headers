/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSAttributedString, NSArray, ABCardGroup, UIImage, <MKPlaceInfoViewControllerDelegate>, MKMapItem, MKYelpDeal, _MKPlaceViewController, NSString;

@interface MKPlaceInfoViewController : ABContactViewController <ABContactViewControllerDelegate, MKStackingViewControllerPreferredSizeUse, MKPlaceAttributionCellProvider> {
    ABCardGroup *_dealsGroup;
    ABCardGroup *_businessInfoGroup;
    ABCardGroup *_inlineMapGroup;
    bool_showAttribution;
    _MKPlaceViewController *_owner;
    <MKPlaceInfoViewControllerDelegate> *_infoDelegate;
    MKMapItem *_mapItem;
    NSArray *_businessInfoOrder;
    UIImage *_inlineMap;
    MKYelpDeal *_deal;
}

@property <MKPlaceInfoViewControllerDelegate> * infoDelegate;
@property(retain) MKMapItem * mapItem;
@property(retain) MKYelpDeal * deal;
@property(readonly) NSAttributedString * infoAttributionString;
@property _MKPlaceViewController * owner;
@property(retain) NSArray * businessInfoOrder;
@property(retain) UIImage * inlineMap;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) bool requiresPreferredContentSizeInStackingView;
@property bool showAttribution;


- (void)_launchMapsDirectionsWithSource:(id)arg1 destination:(id)arg2 directionsMode:(id)arg3;
- (void)_showDeal;
- (void)_launchMaps;
- (void)_handleBusinessAttributionRequest;
- (id)deal;
- (id)inlineMap;
- (id)businessInfoOrder;
- (void)setInlineMap:(id)arg1;
- (void)_flyoverTour:(id)arg1;
- (void)_directionsFromAddress:(id)arg1;
- (void)_directionsToAddress:(id)arg1;
- (id)infoDelegate;
- (void)setBusinessInfoOrder:(id)arg1;
- (bool)showAttribution;
- (void)_setupBusinessInfo;
- (void)_setupActions;
- (bool)requiresPreferredContentSizeInStackingView;
- (void)setDeal:(id)arg1;
- (id)infoAttributionString;
- (void)setShowAttribution:(bool)arg1;
- (void)updateInlineMapWithRefinedMapItem:(id)arg1;
- (void)setInfoDelegate:(id)arg1;
- (double)contactView:(id)arg1 heightForItemAtIndex:(long long)arg2 inGroup:(id)arg3;
- (long long)contactView:(id)arg1 numberOfItemsInGroup:(id)arg2;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4;
- (id)contactView:(id)arg1 cellForItemAtIndex:(long long)arg2 inGroup:(id)arg3;
- (id)contactHeaderView;
- (id)initWithContact:(id)arg1;
- (void)setMapItem:(id)arg1;
- (id)mapItem;
- (id)owner;
- (void)setOwner:(id)arg1;
- (void).cxx_destruct;
- (void)_updatePreferredContentSize;
- (void)viewDidLoad;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
