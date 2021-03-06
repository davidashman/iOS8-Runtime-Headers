/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTheme, OADTextListStyle, NSMutableArray, OADColorMap;

@interface PDSlideMaster : PDSlideBase  {
    NSMutableArray *mSlideLayouts;
    OADTheme *mTheme;
    OADColorMap *mColorMap;
    OADTextListStyle *mTitleTextStyle;
    OADTextListStyle *mBodyTextStyle;
    OADTextListStyle *mOtherTextStyle;
    boolmHeaderPlaceholderIsVisible;
    boolmFooterPlaceholderIsVisible;
    boolmSlideNumberPlaceholderIsVisible;
    boolmDateTimePlaceholderIsVisible;
}

@property(retain) NSMutableArray * slideLayouts;
@property bool headerPlaceholderIsVisible;
@property bool footerPlaceholderIsVisible;
@property bool slideNumberPlaceholderIsVisible;
@property bool dateTimePlaceholderIsVisible;


- (bool)dateTimePlaceholderIsVisible;
- (bool)slideNumberPlaceholderIsVisible;
- (bool)footerPlaceholderIsVisible;
- (bool)headerPlaceholderIsVisible;
- (id)slideLayouts;
- (id)initWithDefaultsAndTheme:(id)arg1;
- (id)otherTextStyle;
- (bool)hasMappableSlideNumberShape;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(bool)arg4;
- (id)parentTextStyleForTables;
- (id)bodyTextStyle;
- (id)titleTextStyle;
- (void)addSlideLayout:(id)arg1;
- (unsigned long long)slideLayoutCount;
- (void)setSlideLayouts:(id)arg1;
- (void)setOtherTextStyle:(id)arg1;
- (void)setBodyTextStyle:(id)arg1;
- (void)setTitleTextStyle:(id)arg1;
- (id)slideLayoutOfType:(int)arg1;
- (id)addSlideLayout;
- (id)slideLayoutAtIndex:(unsigned long long)arg1;
- (void)setSlideNumberPlaceholderIsVisible:(bool)arg1;
- (void)setDateTimePlaceholderIsVisible:(bool)arg1;
- (void)setFooterPlaceholderIsVisible:(bool)arg1;
- (void)setHeaderPlaceholderIsVisible:(bool)arg1;
- (void)doneWithContent;
- (id)drawingTheme;
- (id)parentSlideBase;
- (id)fontScheme;
- (id)defaultTheme;
- (id)styleMatrix;
- (id)colorScheme;
- (void)setTheme:(id)arg1;
- (id)theme;
- (id)colorMap;
- (id)init;
- (void)dealloc;

@end
