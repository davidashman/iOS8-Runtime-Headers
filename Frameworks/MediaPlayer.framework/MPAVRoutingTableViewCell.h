/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVRoute, UISwitch, UILabel, UIView, <MPAVRoutingTableViewCellDelegate>;

@interface MPAVRoutingTableViewCell : UITableViewCell  {
    UILabel *_mirroringLabel;
    UISwitch *_mirroringSwitch;
    UIView *_mirroringSeparatorView;
    bool_mirroringSwitchVisible;
    bool_debugCell;
    <MPAVRoutingTableViewCellDelegate> *_delegate;
    MPAVRoute *_route;
}

@property <MPAVRoutingTableViewCellDelegate> * delegate;
@property(retain) MPAVRoute * route;
@property bool mirroringSwitchVisible;
@property(getter=isDebugCell) bool debugCell;


- (bool)isDebugCell;
- (bool)mirroringSwitchVisible;
- (id)route;
- (void)setDebugCell:(bool)arg1;
- (void)setMirroringSwitchVisible:(bool)arg1;
- (void)setRoute:(id)arg1;
- (void)_mirroringSwitchValueDidChange:(id)arg1;
- (void)setMirroringSwitchVisible:(bool)arg1 animated:(bool)arg2;
- (bool)_shouldShowMirroringAsEnabledForRoute:(id)arg1;
- (void)_configureLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
