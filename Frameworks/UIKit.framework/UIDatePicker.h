/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, NSCalendar, NSTimeZone, NSDate, NSLocale, _UIDatePickerView;

@interface UIDatePicker : UIControl <UIPickerViewScrollTesting, NSCoding> {
    _UIDatePickerView *_pickerView;
    bool_useCurrentDateDuringDecoding;
}

@property(getter=_usesBlackChrome,setter=_setUsesBlackChrome:) bool usesBlackChrome;
@property(getter=_drawsBackground,setter=_setDrawsBackground:) bool drawsBackground;
@property(getter=_allowsZeroCountDownDuration,setter=_setAllowsZeroCountDownDuration:) bool allowsZeroCountDownDuration;
@property(getter=_allowsZeroTimeInterval,setter=_setAllowsZeroTimeInterval:) bool allowsZeroTimeInterval;
@property(getter=_dateUnderSelectionBar,readonly) NSDate * dateUnderSelectionBar;
@property(getter=_contentWidth,readonly) double contentWidth;
@property(getter=_isTimeIntervalMode,readonly) bool isTimeIntervalMode;
@property(getter=_useCurrentDateDuringDecoding,setter=_setUseCurrentDateDuringDecoding:) bool useCurrentDateDuringDecoding;
@property(getter=_usesModernStyle,setter=_setUsesModernStyle:) bool _usesModernStyle;
@property(getter=_highlightColor,setter=_setHighlightColor:,retain) UIColor * highlightColor;
@property(getter=_textColor,setter=_setTextColor:,retain) UIColor * textColor;
@property(getter=_textShadowColor,setter=_setTextShadowColor:,retain) UIColor * textShadowColor;
@property double timeInterval;
@property long long datePickerMode;
@property(retain) NSLocale * locale;
@property(copy) NSCalendar * calendar;
@property(retain) NSTimeZone * timeZone;
@property(retain) NSDate * date;
@property(retain) NSDate * minimumDate;
@property(retain) NSDate * maximumDate;
@property double countDownDuration;
@property long long minuteInterval;

+ (Class)_pickerViewClass;

- (void)_setLocale:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCalendar:(id)arg1;
- (id)calendar;
- (int)second;
- (int)minute;
- (int)hour;
- (id)timeZone;
- (id)locale;
- (void)setLocale:(id)arg1;
- (id)date;
- (void)setTimeZone:(id)arg1;
- (void)setDelegate:(id)arg1;
- (double)timeInterval;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_labelTextForCalendarUnit:(unsigned long long)arg1;
- (id)_selectedTextForCalendarUnit:(unsigned long long)arg1;
- (id)_dateUnderSelectionBar;
- (void)_setHighlightsToday:(bool)arg1;
- (void)_setAllowsZeroTimeInterval:(bool)arg1;
- (bool)_allowsZeroTimeInterval;
- (void)_setAllowsZeroCountDownDuration:(bool)arg1;
- (bool)_allowsZeroCountDownDuration;
- (bool)_usesBlackChrome;
- (void)_setUsesBlackChrome:(bool)arg1;
- (void)_setHidesLabels:(bool)arg1;
- (void)setDate:(id)arg1 animate:(bool)arg2;
- (void)setHighlightsToday:(bool)arg1;
- (void)setStaggerTimeIntervals:(bool)arg1;
- (void)setDateComponents:(id)arg1;
- (id)dateComponents;
- (void)setCountDownDuration:(double)arg1;
- (double)countDownDuration;
- (void)setDate:(id)arg1 animated:(bool)arg2;
- (long long)minuteInterval;
- (id)maximumDate;
- (id)minimumDate;
- (id)_locale;
- (long long)datePickerMode;
- (bool)_useCurrentDateDuringDecoding;
- (void)_setUseCurrentDateDuringDecoding:(bool)arg1;
- (void)setMaximumDate:(id)arg1;
- (void)setMinimumDate:(id)arg1;
- (bool)_isTimeIntervalMode;
- (void)setMinuteInterval:(long long)arg1;
- (void)setDatePickerMode:(long long)arg1;
- (void)_insertPickerView;
- (void)setTimeInterval:(double)arg1;
- (void)setDate:(id)arg1;
- (double)_contentWidth;
- (void)invalidateIntrinsicContentSize;
- (void)awakeFromNib;
- (void)_setTextShadowColor:(id)arg1;
- (id)_textShadowColor;
- (void)_setHighlightColor:(id)arg1;
- (id)_highlightColor;
- (void)_setUsesModernStyle:(bool)arg1;
- (void)_setDrawsBackground:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)_performScrollTest:(id)arg1 withIterations:(long long)arg2 rowsToScroll:(long long)arg3 inComponent:(long long)arg4;
- (id)_textColor;
- (bool)_usesModernStyle;
- (bool)_drawsBackground;
- (void)_setTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_UIAppearance_setBackgroundColor:(id)arg1;

@end
