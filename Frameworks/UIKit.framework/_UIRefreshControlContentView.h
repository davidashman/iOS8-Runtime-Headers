/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIRefreshControl, NSAttributedString;

@interface _UIRefreshControlContentView : UIView  {
    UIRefreshControl *_refreshControl;
    UIColor *_tintColor;
}

@property(readonly) long long style;
@property UIRefreshControl * refreshControl;
@property(retain) UIColor * tintColor;
@property(retain) NSAttributedString * attributedTitle;
@property(readonly) double minimumSnappingHeight;
@property(readonly) double maximumSnappingHeight;


- (long long)style;
- (void)dealloc;
- (void)didTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)willTransitionFromState:(int)arg1 toState:(int)arg2;
- (double)minimumSnappingHeight;
- (double)maximumSnappingHeight;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (void)refreshControlInvalidatedSnappingHeight;
- (id)refreshControl;
- (void)setRefreshControl:(id)arg1;
- (id)attributedTitle;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)setAttributedTitle:(id)arg1;

@end
