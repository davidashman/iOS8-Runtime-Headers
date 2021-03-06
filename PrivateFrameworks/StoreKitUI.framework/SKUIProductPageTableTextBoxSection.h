/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIColorScheme, NSString, SKUIClientContext, SKUILayoutCache;

@interface SKUIProductPageTableTextBoxSection : SKUIProductPageTableSection  {
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    bool_isExpanded;
    long long _stringIndex;
    NSString *_subtitle;
    SKUILayoutCache *_textLayoutCache;
    NSString *_title;
}

@property(retain) SKUILayoutCache * textLayoutCache;
@property long long stringIndex;
@property(copy) NSString * subtitle;
@property(copy) NSString * title;
@property(retain) SKUIColorScheme * colorScheme;


- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (void)setStringIndex:(long long)arg1;
- (void)setTextLayoutCache:(id)arg1;
- (id)textLayoutCache;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (long long)stringIndex;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (id)initWithClientContext:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void).cxx_destruct;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;

@end
