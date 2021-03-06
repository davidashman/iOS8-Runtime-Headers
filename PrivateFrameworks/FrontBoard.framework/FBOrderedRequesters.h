/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class NSMutableArray;

@interface FBOrderedRequesters : NSObject  {
    NSMutableArray *_bands[4];
}


- (void)prioritizeRequester:(id)arg1;
- (void)addRequester:(id)arg1 toBand:(int)arg2;
- (bool)containsRequester:(id)arg1 inBand:(int)arg2;
- (id)frontmostRequester;
- (id)requesters;
- (void)removeRequester:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;

@end
