/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationWatchdog : BSWatchdog  {
    int _type;
}

@property(readonly) int type;

+ (id)stringForType:(int)arg1;

- (id)initWithType:(int)arg1 timeout:(double)arg2 queue:(id)arg3 completion:(id)arg4;
- (id)initWithTimeout:(double)arg1 queue:(id)arg2 completion:(id)arg3;
- (int)type;
- (id)description;

@end
