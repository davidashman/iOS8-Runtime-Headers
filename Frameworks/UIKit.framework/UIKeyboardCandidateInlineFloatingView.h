/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIKeyboardCandidateListDelegate>, NSString, UIKeyboardCandidateGridCollectionViewController, TIKeyboardCandidateResultSet, UIKeyboardCandidateSortControl;

@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateGridCollectionViewControllerDelegate> {
    bool_reducedWidth;
    bool_showHiddenCandidatesOnly;
    int _position;
    TIKeyboardCandidateResultSet *_candidateSet;
    NSString *_inlineText;
    double _maxX;
    UIKeyboardCandidateGridCollectionViewController *_collectionViewController;
    <UIKeyboardCandidateListDelegate> *_candidateListDelegate;
    UIKeyboardCandidateSortControl *_sortSelectionBar;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _inlineRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _previousCollapsedFrame;
}

@property(retain) TIKeyboardCandidateResultSet * candidateSet;
@property(copy) NSString * inlineText;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inlineRect;
@property double maxX;
@property(getter=isReducedWidth,readonly) bool reducedWidth;
@property(readonly) UIKeyboardCandidateGridCollectionViewController * collectionViewController;
@property <UIKeyboardCandidateListDelegate> * candidateListDelegate;
@property int position;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previousCollapsedFrame;
@property(readonly) UIKeyboardCandidateSortControl * sortSelectionBar;
@property bool showHiddenCandidatesOnly;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (unsigned long long)currentIndex;
- (bool)hasCandidates;
- (id)currentCandidate;
- (id)candidates;
- (void)setPosition:(int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layout;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })size;
- (int)position;
- (void)setPreviousCollapsedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previousCollapsedFrame;
- (void)sortSelectionBarAction;
- (void)expand;
- (id)sortSelectionBar;
- (void)adjustFrameForInlineText:(id)arg1 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 maxX:(double)arg3;
- (void)setMaxX:(double)arg1;
- (void)setInlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 maxX:(double)arg5 layout:(bool)arg6 showHiddenCandidatesOnly:(bool)arg7;
- (double)maxX;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedFrameFromDesiredFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textHeight:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedInlineRectFromInlineText:(id)arg1 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)isAcceptableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 afterScrollBy:(double)arg2;
- (void)updateLayerBorderWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inlineRect;
- (bool)isReducedWidth;
- (id)collectionViewController;
- (void)setCandidateSet:(id)arg1 showHiddenCandidatesOnly:(bool)arg2;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (id)activeCandidateList;
- (void)setShowHiddenCandidatesOnly:(bool)arg1;
- (bool)showHiddenCandidatesOnly;
- (unsigned long long)gridCollectionViewSelectedSortMethodIndex:(id)arg1;
- (unsigned long long)gridCollectionViewNumberOfColumns:(id)arg1;
- (void)padInlineFloatingViewExpand:(id)arg1;
- (bool)padInlineFloatingViewIsExpanded:(id)arg1;
- (id)_inheritedRenderConfig;
- (id)inlineText;
- (void)revealHiddenCandidates;
- (void)candidatesDidChange;
- (bool)handleTabKeyWithShift:(bool)arg1;
- (bool)handleNumberKey:(unsigned long long)arg1;
- (void)setInlineText:(id)arg1;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 maxX:(double)arg5 layout:(bool)arg6;
- (unsigned long long)selectedSortIndex;
- (id)keyboardBehaviors;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (void)showPreviousRow;
- (void)showNextRow;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (bool)showCandidate:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (bool)isHiddenCandidatesList;
- (bool)isExtendedList;
- (void)candidateListSelectionDidChange:(id)arg1;
- (id)statisticsIdentifier;
- (void)setCandidateListDelegate:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxX:(double)arg4 layout:(bool)arg5;
- (void)setCandidateSet:(id)arg1;
- (id)candidateSet;
- (void)candidateListAcceptCandidate:(id)arg1;
- (id)candidateListDelegate;
- (void)showNextCandidate;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)didMoveToWindow;

@end
