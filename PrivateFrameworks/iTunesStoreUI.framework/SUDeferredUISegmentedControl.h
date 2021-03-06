/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, NSMutableArray;

@interface SUDeferredUISegmentedControl : UISegmentedControl <SUDeferredUIView> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _deferredFrame;
    double _deferredMaxTotalWidth;
    double _deferredMinSegmentWidth;
    NSMutableArray *_deferredSegments;
    long long _deferredSegmentedControlStyle;
    unsigned long long _deferredSelectedSegmentIndex;
    bool_deferredSizeToFit;
    bool_isDeferringInterfaceUpdates;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(getter=isDeferringInterfaceUpdates) bool deferringInterfaceUpdates;


- (void)_saveSegmentsAsDeferred;
- (void)_insertSegmentWithValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_commitDeferredInterfaceUpdates;
- (void)_saveCurrentStateAsDeferred;
- (void)sizeToFitWithMinimumSegmentWidth:(double)arg1 maximumTotalWidth:(double)arg2;
- (void)setDeferringInterfaceUpdates:(bool)arg1;
- (bool)isDeferringInterfaceUpdates;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)dealloc;
- (long long)selectedSegmentIndex;
- (unsigned long long)numberOfSegments;
- (id)imageForSegmentAtIndex:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (id)titleForSegmentAtIndex:(unsigned long long)arg1;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)removeSegmentAtIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned long long)arg2 animated:(bool)arg3;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(bool)arg3;
- (long long)segmentedControlStyle;
- (void)setSelectedSegmentIndex:(long long)arg1;
- (void)removeAllSegments;
- (void)setSegmentedControlStyle:(long long)arg1;
- (void)sizeToFit;

@end
