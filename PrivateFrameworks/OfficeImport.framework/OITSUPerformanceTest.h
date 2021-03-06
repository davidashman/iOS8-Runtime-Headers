/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface OITSUPerformanceTest : NSObject  {
    NSString *mName;
    SEL mSelector;
    id mTarget;
    double mGoalTime;
    double mPrecision;
    boolmQuiet;
    struct TSUOpstat_s { 
        boolrunning; 
        unsigned long long count; 
        struct timeval { 
            long long tv_sec; 
            int tv_usec; 
        } min_time; 
        struct timeval { 
            long long tv_sec; 
            int tv_usec; 
        } max_time; 
        struct timeval { 
            long long tv_sec; 
            int tv_usec; 
        } total_time; 
        struct timeval { 
            long long tv_sec; 
            int tv_usec; 
        } last_time; 
    } mTiming;
    boolmPassed;
}

@property(readonly) NSString * name;
@property struct TSUOpstat_s { boolx1; unsigned long long x2; struct timeval { long long x_3_1_1; int x_3_1_2; } x3; struct timeval { long long x_4_1_1; int x_4_1_2; } x4; struct timeval { long long x_5_1_1; int x_5_1_2; } x5; struct timeval { long long x_6_1_1; int x_6_1_2; } x6; } timing;
@property double goalTime;
@property double precision;
@property bool quiet;
@property(readonly) bool passed;

+ (id)csvHeader;

- (void)setGoalTime:(double)arg1;
- (double)goalTime;
- (id)csvString;
- (bool)quiet;
- (bool)passed;
- (void)setQuiet:(bool)arg1;
- (id)initWithName:(id)arg1 selector:(SEL)arg2 target:(id)arg3 goalTime:(double)arg4;
- (void)setPrecision:(double)arg1;
- (double)precision;
- (void)setTiming:(struct TSUOpstat_s { boolx1; unsigned long long x2; struct timeval { long long x_3_1_1; int x_3_1_2; } x3; struct timeval { long long x_4_1_1; int x_4_1_2; } x4; struct timeval { long long x_5_1_1; int x_5_1_2; } x5; struct timeval { long long x_6_1_1; int x_6_1_2; } x6; })arg1;
- (struct TSUOpstat_s { boolx1; unsigned long long x2; struct timeval { long long x_3_1_1; int x_3_1_2; } x3; struct timeval { long long x_4_1_1; int x_4_1_2; } x4; struct timeval { long long x_5_1_1; int x_5_1_2; } x5; struct timeval { long long x_6_1_1; int x_6_1_2; } x6; })timing;
- (void)report;
- (void)run;
- (id)name;
- (void)dealloc;

@end
