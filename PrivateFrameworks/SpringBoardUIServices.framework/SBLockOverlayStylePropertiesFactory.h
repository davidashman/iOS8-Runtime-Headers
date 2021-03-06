/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class NSMutableDictionary;

@interface SBLockOverlayStylePropertiesFactory : NSObject  {
    NSMutableDictionary *_deviceQualityToProperties;
    unsigned long long _style;
}

@property(readonly) unsigned long long style;

+ (id)overlayPropertiesFactoryWithStyle:(unsigned long long)arg1;

- (id)propertiesWithDeviceDefaultGraphicsQuality;
- (id)_fetchAndCachePropsForDeviceQuality:(long long)arg1;
- (id)propertiesWithGraphicsQuality:(long long)arg1;
- (unsigned long long)style;
- (void)dealloc;
- (id)initWithStyle:(unsigned long long)arg1;

@end
