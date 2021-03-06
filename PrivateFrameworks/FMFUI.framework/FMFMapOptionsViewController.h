/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@class MKMapAttribution, <FMFMapOptionsViewControllerDelegate>, UIView, UISegmentedControl, UIButton;

@interface FMFMapOptionsViewController : UIViewController  {
    <FMFMapOptionsViewControllerDelegate> *_delegate;
    UIButton *_mapAttributionButton;
    UIView *_topTapView;
    UISegmentedControl *_segmentedControl;
    UIView *_bottomWhitePane;
    MKMapAttribution *_mapAttribution;
}

@property <FMFMapOptionsViewControllerDelegate> * delegate;
@property(retain) UIButton * mapAttributionButton;
@property(retain) UIView * topTapView;
@property(retain) UISegmentedControl * segmentedControl;
@property(retain) UIView * bottomWhitePane;
@property(retain) MKMapAttribution * mapAttribution;


- (void)setSegmentedControl:(id)arg1;
- (void)setBottomWhitePane:(id)arg1;
- (id)bottomWhitePane;
- (void)setTopTapView:(id)arg1;
- (void)setMapAttributionButton:(id)arg1;
- (void)segmentedControlChanged:(id)arg1;
- (void)attributionButtonPressed:(id)arg1;
- (void)openInMaps:(id)arg1;
- (void)setMapAttribution:(id)arg1;
- (id)mapAttribution;
- (id)mapAttributionButton;
- (id)topTapView;
- (void)_dismiss:(id)arg1;
- (struct CGSize { double x1; double x2; })paneSize;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (id)segmentedControl;
- (void)viewDidLoad;
- (void)awakeFromNib;

@end
