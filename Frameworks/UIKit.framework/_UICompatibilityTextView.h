/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIFont, NSString, UIView, NSAttributedString, <UITextViewDelegate>, UITextRange, NSDictionary, <UITextInputDelegate>, <UITextInputTokenizer>, UITextPosition, UIColor;

@interface _UICompatibilityTextView : UIScrollView <UITextLinkInteraction, UITextInput> {
    id _private;
    boolm_editing;
    UIView *m_inputView;
}

@property <UITextViewDelegate> * delegate;
@property(copy) NSString * text;
@property(retain) UIFont * font;
@property(retain) UIColor * textColor;
@property long long textAlignment;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;
@property(getter=isEditable) bool editable;
@property unsigned long long dataDetectorTypes;
@property bool allowsEditingTextAttributes;
@property(copy) NSAttributedString * attributedText;
@property(copy) NSDictionary * typingAttributes;
@property(retain) UIView * inputView;
@property(retain) UIView * inputAccessoryView;
@property bool clearsOnInsertion;
@property(getter=isEditing) bool editing;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property long long autocapitalizationType;
@property long long autocorrectionType;
@property long long spellCheckingType;
@property long long keyboardType;
@property long long keyboardAppearance;
@property long long returnKeyType;
@property bool enablesReturnKeyAutomatically;
@property(getter=isSecureTextEntry) bool secureTextEntry;
@property(copy) UITextRange * selectedTextRange;
@property(readonly) UITextRange * markedTextRange;
@property(copy) NSDictionary * markedTextStyle;
@property(readonly) UITextPosition * beginningOfDocument;
@property(readonly) UITextPosition * endOfDocument;
@property <UITextInputDelegate> * inputDelegate;
@property(readonly) <UITextInputTokenizer> * tokenizer;
@property(readonly) UIView * textInputView;
@property long long selectionAffinity;

+ (void)initialize;
+ (id)_bestInterpretationForDictationResult:(id)arg1;
+ (id)excludedElementsForHTML;
+ (bool)_isCompatibilityTextView;

- (bool)isEditing;
- (bool)isEditable;
- (bool)resignFirstResponder;
- (bool)becomeFirstResponder;
- (id)text;
- (void)insertText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)undoManager;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)undoManagerForWebView:(id)arg1;
- (void)webViewDidChange:(id)arg1;
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (id)textInputTraits;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })offset;
- (id)selectedText;
- (id)font;
- (void)_dealloc;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)webView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)lineHeight;
- (void)removeFromSuperview;
- (id)typingAttributes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (long long)selectionAffinity;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (Class)_printFormatterClass;
- (void)scrollToMakeCaretVisible:(bool)arg1;
- (void)setScrollerIndicatorSubrect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAllowsFourWayRubberBanding:(bool)arg1;
- (bool)scrollingEnabled;
- (void)setAllowsRubberBanding:(bool)arg1;
- (void)displayScrollerIndicators;
- (bool)showScrollerIndicators;
- (void)setShowScrollerIndicators:(bool)arg1;
- (double)bottomBufferHeight;
- (void)setBottomBufferHeight:(double)arg1;
- (id)automaticallySelectedOverlay;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setMarginTop:(int)arg1;
- (int)marginTop;
- (void)setBecomesEditableWithGestures:(bool)arg1;
- (bool)becomesEditableWithGestures;
- (id)contentAsHTMLString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSelectionToStart;
- (void)_transliterateChinese:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)select:(id)arg1;
- (void)updateSelection;
- (void)disableClearsOnInsertion;
- (bool)clearsOnInsertion;
- (void)_setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (struct CGPoint { double x1; double x2; })constrainedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 font:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 webView:(id)arg2;
- (bool)willInteractWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)cancelInteractionWithLink;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isInteractingWithLink;
- (void)tapLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)mightHaveLinks;
- (void)setSelectionGranularity:(long long)arg1;
- (long long)selectionGranularity;
- (unsigned long long)_allowedLinkTypes;
- (void)resetDataDetectorsResultsWithWebLock;
- (void)recalculateStyle;
- (void)setContentToHTMLString:(id)arg1;
- (void)_transferTextViewPropertiesFromText:(id)arg1;
- (void)_transferAttribute:(id)arg1 fromString:(id)arg2 andSetPropertyWith:(SEL)arg3 usingValueClass:(Class)arg4;
- (void)startDataDetectorsWithWebLock;
- (bool)shouldStartDataDetectors;
- (void)_updateForNewSize:(struct CGSize { double x1; double x2; })arg1 withOldSize:(struct CGSize { double x1; double x2; })arg2;
- (void)ensureSelection;
- (void)scrollRectToVisibleInContainingScrollView;
- (bool)shouldScrollEnclosingScrollView;
- (void)_showTextStyleOptions:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)_addShortcut:(id)arg1;
- (void)_define:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)replace:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)setClearsOnInsertion:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleTextRect;
- (void)setSelectionToEnd;
- (void)selectAll:(id)arg1;
- (void)performBecomeEditableTasks;
- (void)delayedUpdateForKeyboardDidShow;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)cancelDataDetectorsWithWebLock;
- (void)keyboardDidShow:(id)arg1;
- (void)updateContentEditableAttribute:(bool)arg1;
- (void)updateWebViewObjects;
- (id)_proxyTextInput;
- (struct CGSize { double x1; double x2; })tileSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)styleString;
- (unsigned long long)dataDetectorTypes;
- (bool)allowsEditingTextAttributes;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setLineHeight:(double)arg1;
- (void)setEditable:(bool)arg1;
- (void)setAllowsEditingTextAttributes:(bool)arg1;
- (void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(bool)arg2;
- (id)_keyboardResponder;
- (id)inputAccessoryView;
- (id)inputView;
- (bool)canResignFirstResponder;
- (void)selectAll;
- (void)setSelectionAffinity:(long long)arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (id)metadataDictionariesForDictationResults;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (id)insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)selectionRectsForRange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)tokenizer;
- (void)setInputDelegate:(id)arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (void)unmarkText;
- (void)setMarkedTextStyle:(id)arg1;
- (id)markedTextStyle;
- (id)markedTextRange;
- (id)selectedTextRange;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)deleteBackward;
- (bool)hasText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)inputDelegate;
- (id)textInRange:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)endOfDocument;
- (id)beginningOfDocument;
- (long long)textAlignment;
- (void)setTypingAttributes:(id)arg1;
- (id)textInputView;
- (id)textColor;
- (void)scrollSelectionToVisible:(bool)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (bool)keyboardInputChanged:(id)arg1;
- (bool)keyboardInputShouldDelete:(id)arg1;
- (bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(bool)arg3;
- (id)selectionView;
- (id)interactionAssistant;
- (void)setEditing:(bool)arg1;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (void)setScrollingEnabled:(bool)arg1;
- (void)setScrollEnabled:(bool)arg1;
- (id)_automationValue;
- (bool)_alwaysHandleScrollerMouseEvent;
- (bool)_requiresKeyboardWhenFirstResponder;
- (struct CGImage { }*)createSnapshotWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGImage { }*)newSnapshotWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)didMoveToSuperview;
- (bool)canBecomeFirstResponder;
- (bool)isFirstResponder;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)_populateArchivedSubviews:(id)arg1;

@end
