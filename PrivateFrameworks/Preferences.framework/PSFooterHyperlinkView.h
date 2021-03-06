/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, UITextView, NSURL;

@interface PSFooterHyperlinkView : UIView <PSHeaderFooterView, UITextViewDelegate> {
    UITextView *_textView;
    NSString *_text;
    NSURL *_URL;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _linkRange;
    id _target;
    SEL _action;
}

@property(retain) NSString * text;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } linkRange;
@property id target;
@property SEL action;
@property(retain) NSURL * URL;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (struct _NSRange { unsigned long long x1; unsigned long long x2; })linkRange;
- (void)_linkify;
- (void)setLinkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (id)initWithSpecifier:(id)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)text;
- (void)setTarget:(id)arg1;
- (void)setURL:(id)arg1;
- (id)URL;
- (void)dealloc;
- (id)target;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
