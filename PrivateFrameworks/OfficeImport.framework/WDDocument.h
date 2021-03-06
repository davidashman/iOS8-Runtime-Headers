/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDListDefinitionTable, NSDate, WDFontTable, NSMutableArray, WDListTable, WDRevisionAuthorTable, NSString, WDText, WDStyleSheet, OADTheme, NSMutableSet, WDCitationTable, OADBackground;

@interface WDDocument : OCDDocument  {
    WDStyleSheet *mStyleSheet;
    WDFontTable *mFontTable;
    WDListDefinitionTable *mListDefinitionTable;
    WDRevisionAuthorTable *mRevisionAuthorTable;
    WDCitationTable *mCitationTable;
    WDListTable *mListTable;
    NSMutableArray *mSections;
    unsigned short mDefaultTabWidth;
    WDText *mImageBulletText;
    WDText *mFootnoteSeparator;
    WDText *mFootnoteContinuationSeparator;
    WDText *mFootnoteContinuationNotice;
    WDText *mEndnoteSeparator;
    WDText *mEndnoteContinuationSeparator;
    WDText *mEndnoteContinuationNotice;
    int mFootnoteNumberFormat;
    int mEndnoteNumberFormat;
    int mFootnotePosition;
    int mEndnotePosition;
    int mFootnoteRestart;
    int mEndnoteRestart;
    unsigned short mFootnoteNumberingStart;
    int mGutterPosition;
    NSString *mOleFilename;
    NSString *mKinsokuAltBreakBefore;
    NSString *mKinsokuAltBreakAfter;
    short mZoomPercentage;
    NSString *mVersion;
    unsigned int mMirrorMargins : 1;
    unsigned int mBorderSurroundHeader : 1;
    unsigned int mBorderSurroundFooter : 1;
    unsigned int mKinsokuStrict : 1;
    unsigned int mAutoHyphenate : 1;
    unsigned int mEvenAndOddHeaders : 1;
    unsigned int mBookFold : 1;
    unsigned int mShowMarkup : 1;
    unsigned int mShowComments : 1;
    unsigned int mTrackChanges : 1;
    unsigned int mShowRevisionMarksOnScreen : 1;
    unsigned int mShowInsertionsAndDeletions : 1;
    unsigned int mShowFormatting : 1;
    unsigned int mShowOutline : 1;
    unsigned int mNoTabForHangingIndents : 1;
    NSMutableArray *mDocumentImages;
    NSMutableArray *mChangeTrackingEditDates;
    NSMutableArray *mChangeTrackingEditAuthors;
    NSDate *mCreationDate;
    NSDate *mModificationDate;
    NSMutableArray *mImageBullets;
    OADBackground *mDocumentBackground;
    OADTheme *mTheme;
    NSMutableSet *mObjPointers;
}

+ (id)impliedColorMap;

- (unsigned long long)revisionAuthorAddLookup:(id)arg1;
- (id)imageBulletParagraph;
- (bool)isFromBinary;
- (id)annotationBlockIterator;
- (id)endnoteBlockIterator;
- (id)footnoteBlockIterator;
- (id)annotationIterator;
- (id)endnoteIterator;
- (id)footnoteIterator;
- (id)mainRunsIterator;
- (id)mainBlocksIterator;
- (id)sectionIterator;
- (void)removeEmptySections;
- (id)documentBackground;
- (id)imageBulletText;
- (id)changeTrackingEditAuthors;
- (id)changeTrackingEditDates;
- (bool)noTabForHangingIndents;
- (bool)showOutline;
- (bool)showFormatting;
- (bool)showInsertionsAndDeletions;
- (bool)showRevisionMarksOnScreen;
- (bool)showComments;
- (bool)showMarkup;
- (void)addRevisionAuthor:(id)arg1;
- (id)revisionAuthorAt:(unsigned long long)arg1;
- (unsigned long long)revisionAuthorCount;
- (void)addImageBullets;
- (short)zoomPercentage;
- (bool)bookFold;
- (int)gutterPosition;
- (id)listDefinitionWithListId:(int)arg1;
- (id)citationTable;
- (unsigned long long)citationCount;
- (unsigned short)footnoteNumberingStart;
- (int)endnoteRestart;
- (int)footnoteRestart;
- (int)endnotePosition;
- (int)footnotePosition;
- (int)endnoteNumberFormat;
- (int)footnoteNumberFormat;
- (bool)evenAndOddHeaders;
- (bool)autoHyphenate;
- (bool)kinsokuStrict;
- (id)kinsokuAltBreakAfter;
- (id)kinsokuAltBreakBefore;
- (bool)borderSurroundFooter;
- (bool)borderSurroundHeader;
- (bool)mirrorMargins;
- (id)newAnnotationBlockIterator;
- (id)newEndnoteBlockIterator;
- (id)newFootnoteBlockIterator;
- (id)newAnnotationIterator;
- (id)newEndnoteIterator;
- (id)newFootnoteIterator;
- (id)newMainRunsIterator;
- (id)newMainBlocksIterator;
- (id)newSectionIterator;
- (void)addCitation:(id)arg1 forID:(id)arg2;
- (id)citationFor:(id)arg1;
- (void)removeObjPointer:(id)arg1;
- (void)addObjPointer:(id)arg1;
- (void)addChangeTrackingEditAtDate:(id)arg1 authorIndex:(int)arg2;
- (id)imageBulletWithCharacterOffset:(int)arg1;
- (void)setKinsokuAltBreakBefore:(id)arg1;
- (void)setKinsokuAltBreakAfter:(id)arg1;
- (void)setKinsokuStrict:(bool)arg1;
- (void)setShowOutline:(bool)arg1;
- (void)setZoomPercentage:(short)arg1;
- (void)setNoTabForHangingIndents:(bool)arg1;
- (void)setBookFold:(bool)arg1;
- (void)setGutterPosition:(int)arg1;
- (void)setFootnoteNumberingStart:(unsigned short)arg1;
- (void)setEndnoteRestart:(int)arg1;
- (void)setFootnoteRestart:(int)arg1;
- (void)setEndnoteNumberFormat:(int)arg1;
- (void)setFootnoteNumberFormat:(int)arg1;
- (void)setEndnotePosition:(int)arg1;
- (void)setFootnotePosition:(int)arg1;
- (void)setEvenAndOddHeaders:(bool)arg1;
- (void)setAutoHyphenate:(bool)arg1;
- (void)setDefaultTabWidth:(unsigned short)arg1;
- (void)setBorderSurroundFooter:(bool)arg1;
- (void)setBorderSurroundHeader:(bool)arg1;
- (void)setMirrorMargins:(bool)arg1;
- (void)setShowComments:(bool)arg1;
- (void)setShowMarkup:(bool)arg1;
- (void)setShowFormatting:(bool)arg1;
- (void)setShowInsertionsAndDeletions:(bool)arg1;
- (void)setShowRevisionMarksOnScreen:(bool)arg1;
- (id)endnoteContinuationNotice;
- (id)endnoteContinuationSeparator;
- (id)endnoteSeparator;
- (id)footnoteContinuationNotice;
- (id)footnoteContinuationSeparator;
- (id)footnoteSeparator;
- (id)revisionAuthorTable;
- (id)listDefinitionTable;
- (id)addImageBulletText;
- (id)imageBullets;
- (void)setDocumentBackground:(id)arg1;
- (void)setOleFilename:(id)arg1;
- (id)fontTable;
- (id)listTable;
- (id)listDefinitionWithListDefinitionId:(int)arg1;
- (id)listWithListId:(int)arg1;
- (id)oleFilename;
- (id)sectionAt:(unsigned long long)arg1;
- (unsigned short)defaultTabWidth;
- (unsigned long long)sectionCount;
- (id)lastSection;
- (id)applicationName;
- (id)theme;
- (void)setTrackChanges:(bool)arg1;
- (bool)trackChanges;
- (void)setLastModDate:(id)arg1;
- (id)lastModDate;
- (id)sections;
- (void)setCreationDate:(id)arg1;
- (id)creationDate;
- (id)version;
- (id)styleSheet;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)setVersion:(id)arg1;
- (id)addSection;

@end
