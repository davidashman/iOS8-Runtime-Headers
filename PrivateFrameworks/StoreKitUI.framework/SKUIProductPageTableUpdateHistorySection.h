/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIProductPageTableExpandableHeaderView, NSArray, SKUIColorScheme, SKUIClientContext, NSDateFormatter, NSMutableIndexSet, SKUILayoutCache;

@interface SKUIProductPageTableUpdateHistorySection : SKUIProductPageTableSection  {
    SKUIClientContext *_clientContext;
    NSMutableIndexSet *_expandedIndexSet;
    long long _firstStringIndex;
    SKUIProductPageTableExpandableHeaderView *_headerView;
    NSArray *_releaseNotes;
    SKUILayoutCache *_textLayoutCache;
    SKUIColorScheme *_colorScheme;
    NSDateFormatter *_dateFormatter;
}

@property long long firstStringIndex;
@property(copy) NSArray * releaseNotes;
@property(retain) SKUILayoutCache * textLayoutCache;
@property(retain) SKUIColorScheme * colorScheme;


- (void)_reloadHeaderView;
- (long long)firstStringIndex;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (void)setReleaseNotes:(id)arg1;
- (void)setFirstStringIndex:(long long)arg1;
- (id)releaseNotes;
- (void)setTextLayoutCache:(id)arg1;
- (id)textLayoutCache;
- (id)headerViewForTableView:(id)arg1;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (id)initWithClientContext:(id)arg1;
- (void).cxx_destruct;
- (void)setExpanded:(bool)arg1;

@end
