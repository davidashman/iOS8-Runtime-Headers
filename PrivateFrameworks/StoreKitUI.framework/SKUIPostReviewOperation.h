/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSDictionary, SKUIReviewMetadata;

@interface SKUIPostReviewOperation : ISOperation  {
    NSDictionary *_responseDictionary;
    SKUIReviewMetadata *_review;
}

@property(readonly) NSDictionary * responseDictionary;


- (id)initWithReviewMetadata:(id)arg1;
- (id)_httpBody;
- (id)responseDictionary;
- (void)run;
- (void).cxx_destruct;

@end
