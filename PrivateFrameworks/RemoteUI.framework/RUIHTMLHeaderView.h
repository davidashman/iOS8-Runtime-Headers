/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSString, RUIWebContainerView, NSURL, <RUITableHeaderDelegate>;

@interface RUIHTMLHeaderView : UIView <RUIWebContainerViewDelegate, RemoteUITableHeader> {
    RUIWebContainerView *_webContainerView;
    bool_isFirstSection;
    <RUITableHeaderDelegate> *_delegate;
    NSURL *_baseURL;
}

@property <RUITableHeaderDelegate> * delegate;
@property(retain) NSURL * baseURL;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)setSectionIsFirst:(bool)arg1;
- (id)initWithAttributes:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (id)baseURL;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
