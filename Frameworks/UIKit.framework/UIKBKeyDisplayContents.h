/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSArray, UIKBKeyDisplayContents;

@interface UIKBKeyDisplayContents : NSObject  {
    bool_isCustomGlyph;
    bool_secondaryIsCustomGlyph;
    bool_fillPath;
    bool_force1xImages;
    bool_stringKeycapOverImage;
    NSString *_displayString;
    NSString *_displayStringImage;
    NSString *_secondaryDisplayStringImage;
    NSString *_secondaryDisplayString;
    NSArray *_variantDisplayStrings;
    NSArray *_variantDisplayImages;
    long long _highlightedVariantIndex;
    long long _displayPathType;
    UIKBKeyDisplayContents *_fallbackContents;
}

@property(retain) NSString * displayString;
@property(retain) NSString * displayStringImage;
@property(retain) NSString * secondaryDisplayStringImage;
@property bool isCustomGlyph;
@property(retain) NSString * secondaryDisplayString;
@property bool secondaryIsCustomGlyph;
@property(retain) NSArray * variantDisplayStrings;
@property(retain) NSArray * variantDisplayImages;
@property long long highlightedVariantIndex;
@property long long displayPathType;
@property bool fillPath;
@property bool force1xImages;
@property bool stringKeycapOverImage;
@property(retain) UIKBKeyDisplayContents * fallbackContents;

+ (id)displayContents;

- (id)displayString;
- (void)dealloc;
- (id)description;
- (void)setStringKeycapOverImage:(bool)arg1;
- (void)setFallbackContents:(id)arg1;
- (void)setFillPath:(bool)arg1;
- (void)setVariantDisplayImages:(id)arg1;
- (void)setSecondaryIsCustomGlyph:(bool)arg1;
- (void)setSecondaryDisplayString:(id)arg1;
- (id)secondaryDisplayStringImage;
- (bool)stringKeycapOverImage;
- (id)fallbackContents;
- (bool)force1xImages;
- (bool)fillPath;
- (long long)displayPathType;
- (id)variantDisplayStrings;
- (id)variantDisplayImages;
- (bool)secondaryIsCustomGlyph;
- (bool)isCustomGlyph;
- (void)setForce1xImages:(bool)arg1;
- (id)displayStringImage;
- (id)secondaryDisplayString;
- (void)setIsCustomGlyph:(bool)arg1;
- (void)setSecondaryDisplayStringImage:(id)arg1;
- (void)setDisplayStringImage:(id)arg1;
- (void)setDisplayPathType:(long long)arg1;
- (long long)highlightedVariantIndex;
- (void)setHighlightedVariantIndex:(long long)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setVariantDisplayStrings:(id)arg1;

@end
