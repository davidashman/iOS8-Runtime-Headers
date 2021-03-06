/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class NSString;

@interface SBSUICarDisplayNowPlayingStateContext : NSObject <NSSecureCoding> {
    NSString *_stateName;
    NSString *_animationName;
    NSString *_associatedBundleID;
}

@property(copy) NSString * stateName;
@property(copy) NSString * animationName;
@property(copy) NSString * associatedBundleID;

+ (id)contextWithState:(id)arg1 animationName:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)associatedBundleID;
- (id)stateName;
- (void)setAssociatedBundleID:(id)arg1;
- (void)setAnimationName:(id)arg1;
- (void)setStateName:(id)arg1;
- (id)initWithState:(id)arg1 animationName:(id)arg2;
- (id)animationName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;

@end
