/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;

@interface UIFlicker : NSObject  {
    UIView *_target;
    struct CGPoint { 
        double x; 
        double y; 
    } _startLocation;
    int _throwIterations;
    id _delegate;
    int _mouseUpCount;
    int _mouseDraggedCount;
    float _delay;
    struct CGPoint { 
        double x; 
        double y; 
    } _offset;
}


- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })offset;
- (void)run;
- (id)init;
- (void)setTarget:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStartLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setIterations:(int)arg1;
- (void)setDelay:(float)arg1;

@end
