/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;

@interface SUItemReviewStatistics : NSObject <NSCopying> {
    float _averageUserRating;
    long long _numberOfUserRatings;
    NSString *_numberOfUserRatingsString;
    long long _numberOfUserReviews;
    NSString *_numberOfUserReviewsString;
}

@property float averageUserRating;
@property long long numberOfUserRatings;
@property(copy) NSString * numberOfUserRatingsString;
@property long long numberOfUserReviews;
@property(copy) NSString * numberOfUserReviewsString;


- (void)setNumberOfUserReviewsString:(id)arg1;
- (id)numberOfUserReviewsString;
- (void)setNumberOfUserReviews:(long long)arg1;
- (long long)numberOfUserReviews;
- (void)setNumberOfUserRatingsString:(id)arg1;
- (id)numberOfUserRatingsString;
- (long long)numberOfUserRatings;
- (float)averageUserRating;
- (void)setNumberOfUserRatings:(long long)arg1;
- (void)setAverageUserRating:(float)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
