/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class NSString;

@interface SBPasscodeNumberPadButton : TPNumberPadDarkStyleButton <SBUIPasscodeNumberPadButton> {
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingOutsideRing;
+ (id)_stringCharacterForCharacter:(unsigned int)arg1;
+ (int)_characterTypeForCharacter:(unsigned int)arg1;
+ (double)_numberPadButtonOuterCircleDiameter;
+ (struct CGSize { double x1; double x2; })defaultSize;

- (id)initForCharacter:(unsigned int)arg1;
- (id)stringCharacter;
- (int)characterType;

@end
