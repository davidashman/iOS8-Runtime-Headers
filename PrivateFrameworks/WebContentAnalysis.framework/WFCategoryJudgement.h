/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WFCategoryJudgement : NSObject  {
    float score;
    long long category;
}

+ (id)categoryJudgementWithCategory:(long long)arg1 score:(float)arg2;

- (long long)compareByScore:(id)arg1;
- (long long)compareByCategory:(id)arg1;
- (void)setScore:(float)arg1;
- (long long)category;
- (id)description;
- (float)score;
- (void)setCategory:(long long)arg1;

@end
