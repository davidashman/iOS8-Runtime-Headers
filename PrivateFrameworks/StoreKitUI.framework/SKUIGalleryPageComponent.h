/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray;

@interface SKUIGalleryPageComponent : SKUIPageComponent  {
    NSArray *_childComponents;
    double _cycleInterval;
    bool_hidesPageIndicator;
}

@property(readonly) NSArray * childComponents;
@property double cycleInterval;
@property bool hidesPageIndicator;


- (void)setHidesPageIndicator:(bool)arg1;
- (bool)hidesPageIndicator;
- (void)setCycleInterval:(double)arg1;
- (id)childComponents;
- (double)cycleInterval;
- (id)metricsElementName;
- (id)initWithCustomPageContext:(id)arg1;
- (long long)componentType;
- (void).cxx_destruct;

@end
