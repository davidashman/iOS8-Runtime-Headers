/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class NSURL, NSString;

@interface IKAssetElement : IKViewElement  {
    bool_infiniteDuration;
}

@property(retain,readonly) NSURL * url;
@property(readonly) long long type;
@property(readonly) long long keyDelivery;
@property(getter=isInfiniteDuration,readonly) bool infiniteDuration;
@property(retain,readonly) NSString * actionParams;
@property(retain,readonly) NSString * adamID;
@property(retain,readonly) NSString * bookmarkID;
@property(retain,readonly) NSString * contentID;
@property(retain,readonly) NSString * serviceID;

+ (bool)shouldParseChildDOMElements;

- (bool)isInfiniteDuration;
- (id)serviceID;
- (id)bookmarkID;
- (id)actionParams;
- (bool)infiniteDuration;
- (long long)keyDelivery;
- (id)contentID;
- (id)adamID;
- (id)url;
- (long long)type;

@end
