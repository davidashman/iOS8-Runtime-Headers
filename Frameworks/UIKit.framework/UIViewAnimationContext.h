/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UITableViewCell;

@interface UIViewAnimationContext : NSObject  {
    NSArray *_viewAnimations;
    long long _animationCount;
    id _completionHandler;
    UITableViewCell *_swipeToDeleteCell;
}

@property(retain) NSArray * viewAnimations;
@property long long animationCount;
@property(readonly) id completionHandler;
@property(retain) UITableViewCell * swipeToDeleteCell;


- (void)dealloc;
- (id)completionHandler;
- (id)swipeToDeleteCell;
- (id)viewAnimations;
- (void)setSwipeToDeleteCell:(id)arg1;
- (void)setAnimationCount:(long long)arg1;
- (long long)animationCount;
- (void)setViewAnimations:(id)arg1;
- (id)initWithCompletionHandler:(id)arg1;

@end
