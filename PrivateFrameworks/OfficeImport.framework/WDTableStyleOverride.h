/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDTableRowProperties, WDDocument, WDStyle, WDParagraphProperties, WDCharacterProperties, WDTableCellProperties;

@interface WDTableStyleOverride : NSObject <NSCopying> {
    WDDocument *mDocument;
    WDStyle *mStyle;
    int mPart;
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDTableRowProperties *mTableRowProperties;
    WDTableCellProperties *mTableCellStyleProperties;
    unsigned int mParagraphPropertiesOverridden : 1;
    unsigned int mCharacterPropertiesOverridden : 1;
    unsigned int mTableRowPropertiesOverridden : 1;
    unsigned int mTableCellStylePropertiesOverridden : 1;
}


- (id)mutableTableCellStyleProperties;
- (id)mutableTableRowProperties;
- (id)mutableParagraphProperties;
- (bool)isTableRowPropertiesOverridden;
- (void)setTableCellStylePropertiesOverridden:(bool)arg1;
- (bool)isTableCellStylePropertiesOverridden;
- (id)tableCellStyleProperties;
- (void)setTableRowPropertiesOverridden:(bool)arg1;
- (bool)isTablePropertiesOverridden;
- (void)setCharacterPropertiesOverridden:(bool)arg1;
- (void)setParagraphPropertiesOverridden:(bool)arg1;
- (bool)isParagraphPropertiesOverridden;
- (id)mutableCharacterProperties;
- (id)tableRowProperties;
- (id)tableProperties;
- (id)paragraphProperties;
- (id)characterProperties;
- (bool)isCharacterPropertiesOverridden;
- (void)setPart:(int)arg1;
- (int)part;
- (void)setStyle:(id)arg1;
- (id)style;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDocument:(id)arg1;

@end
