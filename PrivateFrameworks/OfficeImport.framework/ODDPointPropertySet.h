/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString, NSObject;

@interface ODDPointPropertySet : NSObject  {
    NSString *mLayoutTypeId;
    NSString *mPresentationName;
    NSString *mPresentationStyleLabel;
    int mPresentationStyleIndex;
    int mPresentationStyleCount;
    NSObject *mPresentationAssociatedId;
    boolmCustomVerticalFlip;
    double mCustomScaleX;
    double mCustomScaleY;
    double mCustomOffsetX;
    double mCustomOffsetY;
}


- (int)presentationStyleCount;
- (void)setCustomOffsetY:(double)arg1;
- (void)setCustomOffsetX:(double)arg1;
- (void)setCustomScaleY:(double)arg1;
- (void)setCustomScaleX:(double)arg1;
- (void)setCustomVerticalFlip:(bool)arg1;
- (bool)customVerticalFlip;
- (void)setPresentationAssociatedId:(id)arg1;
- (id)presentationAssociatedId;
- (void)setPresentationStyleCount:(int)arg1;
- (void)setPresentationStyleIndex:(int)arg1;
- (void)setPresentationStyleLabel:(id)arg1;
- (void)setLayoutTypeId:(id)arg1;
- (double)customOffsetY;
- (double)customOffsetX;
- (double)customScaleY;
- (double)customScaleX;
- (int)presentationStyleIndex;
- (id)presentationStyleLabel;
- (id)presentationName;
- (void)setPresentationName:(id)arg1;
- (id)layoutTypeId;
- (void)dealloc;

@end
