/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, _UITabBarItemAppearanceStorage;

@interface UITabBarButtonLabel : UILabel  {
    double _boundsWidth;
    _UITabBarItemAppearanceStorage *_appearanceStorage;
    bool_isSelected;
    bool_isHighlighted;
    Class _appearanceGuideClass;
    UIColor *_unselectedTintColor;
}

@property(setter=_setAppearanceGuideClass:) Class _appearanceGuideClass;
@property(getter=_unselectedTintColor,setter=_setUnselectedTintColor:,retain) UIColor * unselectedTintColor;

+ (double)_fontPointSizeForIdiom:(long long)arg1;

- (void)dealloc;
- (id)_unselectedTintColor;
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (void)_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)_setUnselectedTintColor:(id)arg1;
- (void)sizeToFitBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateForFontChangeWithIdiom:(long long)arg1;
- (id)_containingTabBarButton;
- (void)updateTextColorsForState;
- (id)_fontForIdiom:(long long)arg1;
- (bool)_shouldCeilSizeToViewScale;
- (void)setSelected:(bool)arg1;
- (void)_setAppearanceGuideClass:(Class)arg1;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (void)tintColorDidChange;
- (Class)_appearanceGuideClass;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;

@end
