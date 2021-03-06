/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UILabel, NSNumberFormatter, UIActivityIndicatorView;

@interface PLSyncProgressView : UIView  {
    UIActivityIndicatorView *_spinner;
    UILabel *_infoLabel;
    NSNumberFormatter *_countFormatter;
    int _style;
    int _progressType;
    unsigned long long _currentCount;
    unsigned long long _totalCount;
}

@property(readonly) int style;
@property(readonly) int progressType;
@property(readonly) unsigned long long currentCount;
@property(readonly) unsigned long long totalCount;


- (void)setCurrentCount:(unsigned long long)arg1 totalCount:(unsigned long long)arg2 progressType:(int)arg3;
- (id)_progressDescription;
- (int)progressType;
- (unsigned long long)totalCount;
- (unsigned long long)currentCount;
- (int)style;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
