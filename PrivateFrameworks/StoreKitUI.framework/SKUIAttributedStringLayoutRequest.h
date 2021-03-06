/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, NSAttributedString;

@interface SKUIAttributedStringLayoutRequest : NSObject <SKUILayoutRequest> {
    NSAttributedString *_attributedString;
    long long _numberOfLines;
    bool_wantsBaselineOffset;
    double _width;
}

@property(readonly) NSAttributedString * attributedString;
@property long long numberOfLines;
@property bool wantsBaselineOffset;
@property double width;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) Class layoutClass;


- (Class)layoutClass;
- (void)setWidth:(double)arg1;
- (double)width;
- (void)setWantsBaselineOffset:(bool)arg1;
- (bool)wantsBaselineOffset;
- (id)attributedString;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAttributedString:(id)arg1;
- (long long)numberOfLines;
- (void)setNumberOfLines:(long long)arg1;

@end
