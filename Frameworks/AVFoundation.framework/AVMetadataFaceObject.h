/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject <NSCopying> {
    AVMetadataFaceObjectInternal *_internal;
}

@property(readonly) long long faceID;
@property(readonly) bool hasRollAngle;
@property(readonly) double rollAngle;
@property(readonly) bool hasYawAngle;
@property(readonly) double yawAngle;


- (id)initWithFaceID:(long long)arg1 hasRollAngle:(bool)arg2 rollAngle:(double)arg3 hasYawAngle:(bool)arg4 yawAngle:(double)arg5 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 optionalInfoDict:(id)arg9 originalMetadataObject:(id)arg10 sourceCaptureInput:(id)arg11;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bytePackedBagB;
- (bool)hasBytePackageB;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bytePackedBagA;
- (bool)hasBytePackageA;
- (int)constructionAlignment;
- (bool)hasConstructionAlignment;
- (int)vers1Struct;
- (bool)hasVers1Struct;
- (int)vers0Struct;
- (bool)hasVers0Struct;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 isVideoMirrored:(bool)arg3 rollAdjustment:(double)arg4;
- (id)initWithType:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6;
- (id)initWithFaceID:(long long)arg1 hasRollAngle:(bool)arg2 rollAngle:(double)arg3 hasYawAngle:(bool)arg4 yawAngle:(double)arg5 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8;
- (long long)faceID;
- (double)yawAngle;
- (bool)hasYawAngle;
- (double)rollAngle;
- (bool)hasRollAngle;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
