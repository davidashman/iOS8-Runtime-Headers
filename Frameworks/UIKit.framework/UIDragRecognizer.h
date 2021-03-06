/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITouch, UIDelayedAction;

@interface UIDragRecognizer : UIGestureRecognizer  {
    double _maximumDeviation;
    double _minimumDistance;
    struct CGPoint { 
        double x; 
        double y; 
    } _startPosition;
    bool_restrictsToAngle;
    double _angle;
    UITouch *_touch;
    UIDelayedAction *_tooSlow;
    double _startAngle;
    double _quietPeriod;
    bool_canBeginDrag;
    SEL _checkCanBeginDrag;
    UIDelayedAction *ignoreTouch;
}

@property bool restrictsToAngle;
@property double angle;
@property double maximumDeviation;
@property double minimumDistance;
@property struct CGPoint { double x1; double x2; } startPosition;
@property double startAngle;
@property(retain) UITouch * touch;
@property double quietPeriod;
@property bool canBeginDrag;
@property SEL checkCanBeginDrag;
@property(retain) UIDelayedAction * ignoreTouch;


- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })startPosition;
- (double)startAngle;
- (double)angle;
- (void)setAngle:(double)arg1;
- (void)dealloc;
- (void)setStartAngle:(double)arg1;
- (bool)canBeginDrag;
- (SEL)checkCanBeginDrag;
- (double)maximumDeviation;
- (bool)restrictsToAngle;
- (double)minimumDistance;
- (double)quietPeriod;
- (void)setStartPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setIgnoreTouch:(id)arg1;
- (id)ignoreTouch;
- (void)clearIgnoreTouch;
- (void)setRestrictsToAngle:(bool)arg1;
- (void)tooSlow:(id)arg1;
- (void)clearTimer;
- (void)setCheckCanBeginDrag:(SEL)arg1;
- (void)setQuietPeriod:(double)arg1;
- (void)setMaximumDeviation:(double)arg1;
- (void)setMinimumDistance:(double)arg1;
- (void)setCanBeginDrag:(bool)arg1;
- (void)_resetGestureRecognizer;
- (void)setTouch:(id)arg1;
- (id)touch;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
