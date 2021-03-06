/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSMutableDictionary;

@interface SUActivityViewController : UIActivityViewController  {
    NSMutableDictionary *_customTitles;
    NSArray *_suActivityItems;
    long long _transitionSafetyCount;
}


- (void)setTitle:(id)arg1 forActivityType:(id)arg2;
- (void)dealloc;
- (id)_titleForActivity:(id)arg1;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (void)_prepareActivity:(id)arg1;
- (void)_performActivity:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
