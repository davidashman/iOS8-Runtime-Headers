/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrollViewScrollAnimation : UIAnimation  {
    struct CGPoint { 
        double x; 
        double y; 
    } _originalOffset;
    struct CGPoint { 
        double x; 
        double y; 
    } _targetOffset;
    double _accuracy;
    bool_adjustsForContentOffsetDelta;
}


- (void)dealloc;
- (void)setProgress:(float)arg1;
- (void)adjustForContentOffsetDelta:(struct CGPoint { double x1; double x2; })arg1;

@end
