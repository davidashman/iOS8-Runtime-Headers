/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDParallelTimeNode, PDVideoNode, PDCmdBehavior, PDSetBehavior, PDAnimateMotionBehavior, PDAudioNode, PDSequentialTimeNode, PDAnimateTimeBehavior, PDAnimateEffectBehavior, PDAnimateColorBehavior, PDAnimateScaleBehavior, PDAnimateRotateBehavior;

@interface PDTimeNodeUnion : NSObject  {
    PDAnimateTimeBehavior *mTimeBehavior;
    PDAnimateEffectBehavior *mEffectBehavior;
    PDAnimateMotionBehavior *mMotionBehavior;
    PDAnimateRotateBehavior *mRotateBehavior;
    PDAnimateScaleBehavior *mScaleBehavior;
    PDAnimateColorBehavior *mColorBehavior;
    PDAudioNode *mAudio;
    PDVideoNode *mVideo;
    PDParallelTimeNode *mParallelTimeNodeGroup;
    PDSequentialTimeNode *mSequentialTimeNodeGroup;
    PDSetBehavior *mSetBehavior;
    PDCmdBehavior *mCmdBehavior;
}


- (void)setCmdBehavior:(id)arg1;
- (id)cmdBehavior;
- (void)setSequential:(id)arg1;
- (id)sequential;
- (void)setParallel:(id)arg1;
- (id)parallel;
- (id)video;
- (void)setAudio:(id)arg1;
- (id)audio;
- (void)setColorBehavior:(id)arg1;
- (id)colorBehavior;
- (void)setScaleBehavior:(id)arg1;
- (id)scaleBehavior;
- (void)setRotateBehavior:(id)arg1;
- (id)rotateBehavior;
- (void)setMotionBehavior:(id)arg1;
- (id)motionBehavior;
- (void)setEffectBehavior:(id)arg1;
- (id)effectBehavior;
- (void)setTimeBehavior:(id)arg1;
- (id)timeBehavior;
- (id)commonBehavior;
- (void)setBehavior:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)behavior;
- (void)setVideo:(id)arg1;

@end
