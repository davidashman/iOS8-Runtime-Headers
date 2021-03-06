/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIBezierPath;

@interface MPAlternateTrackCellBackgroundView : UIView  {
    int _sectionLocation;
    UIBezierPath *_fillPath;
    UIBezierPath *_strokePath;
}

@property int sectionLocation;


- (void)_createBezierPathWithCornerRadius:(double)arg1 bottomRadius:(double)arg2 animating:(bool)arg3;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (void)_invalidatePaths;
- (void)setSectionLocation:(int)arg1;
- (int)sectionLocation;
- (void)setSectionLocation:(int)arg1 animated:(bool)arg2;
- (void)layoutSubviews;

@end
