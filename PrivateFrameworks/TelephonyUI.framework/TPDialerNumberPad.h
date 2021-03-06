/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPDialerSoundController, NSString, <TPDialerKeypadDelegate>;

@interface TPDialerNumberPad : TPNumberPad <TPDialerKeypadProtocol> {
    bool_playsSounds;
    <TPDialerKeypadDelegate> *_delegate;
    TPDialerSoundController *_soundController;
}

@property bool playsSounds;
@property <TPDialerKeypadDelegate> * delegate;
@property(retain) TPDialerSoundController * soundController;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)dialerNumberPadNumericCharacters;
+ (id)dialerNumberPadFullCharacters;

- (bool)playsSounds;
- (void)setSoundController:(id)arg1;
- (id)soundController;
- (long long)indexForHighlightedKey;
- (void)highlightKeyAtIndex:(long long)arg1;
- (void)setSupportsHardPause:(bool)arg1;
- (bool)supportsHardPause;
- (void)setPlaysSounds:(bool)arg1;
- (void)buttonLongPressed:(id)arg1;
- (void)buttonUp:(id)arg1;
- (void)buttonDown:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)buttonTapped:(id)arg1;

@end
