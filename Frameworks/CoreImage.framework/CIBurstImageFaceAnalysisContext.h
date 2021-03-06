/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class FCRFaceDetector, NSMutableDictionary, NSMutableArray;

@interface CIBurstImageFaceAnalysisContext : NSObject  {
    NSMutableDictionary *curConfig;
    NSMutableDictionary *faceIdMapping;
    NSMutableDictionary *renameMapping;
    int faceIdCounter;
    NSMutableArray *faceInfoArray;
    int numFramesSinceFullFaceCore;
    int numFramesNoFaces;
    FCRFaceDetector *faceDetector;
    NSMutableArray *faceTimestampArray;
    double latestImageTimestamp;
    int lastFaceIndex;
    boolforceFaceDetectionEnable;
    int _version;
    double timeBlinkDetectionDone;
    double timeFaceDetectionDone;
    double latestFaceTimestamp;
}

@property double timeFaceDetectionDone;
@property double timeBlinkDetectionDone;
@property bool forceFaceDetectionEnable;
@property double latestFaceTimestamp;
@property int version;


- (int)version;
- (id)processSmallFaces:(id)arg1 imageStat:(id)arg2 faces:(id)arg3 extractOptions:(id)arg4;
- (void)setLatestFaceTimestamp:(double)arg1;
- (void)addFaceToArray:(id)arg1;
- (bool)isSmallFace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateFaceCoreROI:(id)arg1 imageStat:(id)arg2 needFaceCore:(bool*)arg3;
- (void)setupFaceDetector;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })padRoiRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 paddingX:(float)arg2 paddingY:(float)arg3;
- (bool)forceFaceDetectionEnable;
- (void)calcFaceScores:(id)arg1;
- (void)extractFacesFromMetadata:(id)arg1;
- (void)dumpFaceInfoArray;
- (void)adjustFaceIdsForImageStat:(id)arg1;
- (void)calculateFaceFocusInImage:(id)arg1 imageStat:(id)arg2;
- (double)timeBlinkDetectionDone;
- (double)timeFaceDetectionDone;
- (void)setTimeBlinkDetectionDone:(double)arg1;
- (void)setTimeFaceDetectionDone:(double)arg1;
- (int)findFacesInImage:(id)arg1 imageStat:(id)arg2;
- (void)addFacesToImageStat:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (double)latestFaceTimestamp;
- (void)setForceFaceDetectionEnable:(bool)arg1;
- (id)initWithVersion:(id)arg1;
- (void)dealloc;
- (void)setVersion:(int)arg1;

@end
