/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSArray, NSString;

@interface AAFamilyEligibilityResponse : AAResponse  {
    bool_hasPendingInvites;
    NSArray *_familyFeaturePrimaryDescriptions;
    NSArray *_familyFeatureSecondaryDescriptions;
    NSString *_familyFeatureSecondaryTitle;
    NSString *_underageEligibilityAlertTitle;
    NSString *_underageEligibilityAlertMessage;
}

@property(readonly) bool eligible;
@property(readonly) long long eligibilityStatus;
@property(readonly) bool hasPendingInvites;
@property(readonly) NSArray * familyFeaturePrimaryDescriptions;
@property(readonly) NSArray * familyFeatureSecondaryDescriptions;
@property(readonly) NSString * familyFeatureSecondaryTitle;
@property(readonly) NSString * underageEligibilityAlertTitle;
@property(readonly) NSString * underageEligibilityAlertMessage;


- (id)underageEligibilityAlertMessage;
- (id)underageEligibilityAlertTitle;
- (bool)hasPendingInvites;
- (long long)eligibilityStatus;
- (id)familyFeatureSecondaryTitle;
- (id)familyFeatureSecondaryDescriptions;
- (id)familyFeaturePrimaryDescriptions;
- (bool)eligible;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (void).cxx_destruct;

@end
