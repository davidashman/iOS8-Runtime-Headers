/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKThemeBrush;

@interface GKBadgedGameIconBrush : GKThemeBrush  {
    GKThemeBrush *_badgeBrush;
}

@property(retain) GKThemeBrush * badgeBrush;


- (void)setBadgeBrush:(id)arg1;
- (id)badgeBrush;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (double)scaleForInput:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForInput:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
