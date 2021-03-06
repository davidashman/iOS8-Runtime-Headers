/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILabel, UIActivityIndicatorView;

@interface UIPrintStatusTableViewCell : UITableViewCell  {
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_titleLabel;
    UILabel *_hostLabel;
}

@property(retain) UILabel * titleLabel;
@property(retain) UILabel * hostLabel;
@property bool showActive;


- (void)dealloc;
- (void)setHostLabel:(id)arg1;
- (id)hostLabel;
- (void)setShowActive:(bool)arg1;
- (bool)showActive;
- (void)setTitleLabel:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)titleLabel;
- (void)layoutSubviews;

@end
