/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSMutableDictionary;

@interface PSNavBarSpinnerManager : NSObject  {
    NSMutableDictionary *_savedRightItems;
    NSMutableDictionary *_savedLeftItems;
    NSMutableDictionary *_navigationItems;
}

+ (id)sharedSpinnerManager;

- (void)stopAnimatingForIdentifier:(id)arg1;
- (void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2;
- (void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2 hideBackButton:(bool)arg3;
- (id)init;
- (void)dealloc;

@end
