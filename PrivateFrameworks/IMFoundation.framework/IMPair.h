/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMPair : NSObject <NSCopying> {
    id _first;
    id _second;
}

@property(retain) id first;
@property(retain) id second;

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;

- (id)first;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (void)setFirst:(id)arg1;
- (id)second;
- (void)setSecond:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
