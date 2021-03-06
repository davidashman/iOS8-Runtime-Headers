/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWebBrowserView, DOMNode, UIWebOverflowContentView, UIWebOverflowScrollListener;

@interface UIWebOverflowScrollView : UIScrollView  {
    UIWebBrowserView *_webBrowserView;
    UIWebOverflowScrollListener *_scrollListener;
    UIWebOverflowContentView *_overflowContentView;
    DOMNode *_node;
    bool_beingRemoved;
}

@property UIWebBrowserView * webBrowserView;
@property(retain) UIWebOverflowScrollListener * scrollListener;
@property(retain) UIWebOverflowContentView * overflowContentView;
@property(retain) DOMNode * node;
@property(getter=isBeingRemoved) bool beingRemoved;


- (id)superview;
- (void)dealloc;
- (bool)isBeingRemoved;
- (void)setScrollListener:(id)arg1;
- (id)scrollListener;
- (void)setWebBrowserView:(id)arg1;
- (void)prepareForRemoval;
- (id)webBrowserView;
- (bool)fixUpViewAfterInsertion;
- (void)setBeingRemoved:(bool)arg1;
- (void)_replaceLayer:(id)arg1;
- (id)overflowContentView;
- (void)setOverflowContentView:(id)arg1;
- (id)initWithLayer:(id)arg1 node:(id)arg2 webBrowserView:(id)arg3;
- (void)setNode:(id)arg1;
- (id)node;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
