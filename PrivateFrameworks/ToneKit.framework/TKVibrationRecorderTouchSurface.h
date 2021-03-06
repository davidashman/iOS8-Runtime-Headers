/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@class <TKVibrationRecorderTouchSurfaceDelegate>, TKVibrationRecorderTouchSurfaceRecordedDataWrapper, TLVibrationPattern;

@interface TKVibrationRecorderTouchSurface : TKVibrationRecorderRippleView  {
    bool_recordingModeEnabled;
    bool_shouldIgnoreCurrentTouch;
    bool_replayModeEnabled;
    <TKVibrationRecorderTouchSurfaceDelegate> *_delegate;
    double _vibrationPatternMaximumDuration;
    TKVibrationRecorderTouchSurfaceRecordedDataWrapper *_recordedDataWrapper;
    TLVibrationPattern *_vibrationPatternToReplay;
    double _replayModeWasEnteredStartTime;
}

@property <TKVibrationRecorderTouchSurfaceDelegate> * delegate;
@property(getter=_isRecordingModeEnabled,setter=_setRecordingModeEnabled:) bool _recordingModeEnabled;
@property(setter=_setVibrationPatternMaximumDuration:) double _vibrationPatternMaximumDuration;
@property(setter=_setRecordedDataWrapper:,retain) TKVibrationRecorderTouchSurfaceRecordedDataWrapper * _recordedDataWrapper;
@property(setter=_setShouldIgnoreCurrentTouch:) bool _shouldIgnoreCurrentTouch;
@property(getter=_isReplayModeEnabled,setter=_setReplayModeEnabled:) bool _replayModeEnabled;
@property(setter=_setVibrationPatternToReplay:,retain) TLVibrationPattern * _vibrationPatternToReplay;
@property(setter=_setReplayModeWasEnteredStartTime:) double _replayModeWasEnteredStartTime;


- (id)_vibrationPatternToReplay;
- (double)_replayModeWasEnteredStartTime;
- (void)_updateTouchLocationForReplayMode:(id)arg1;
- (void)_setReplayModeWasEnteredStartTime:(double)arg1;
- (id)_recordedDataWrapper;
- (void)_setRecordingModeEnabled:(bool)arg1;
- (bool)_shouldIgnoreCurrentTouch;
- (void)_recordTouchLocation:(struct CGPoint { double x1; double x2; })arg1 touchPhase:(int)arg2;
- (void)_setShouldIgnoreCurrentTouch:(bool)arg1;
- (bool)_isRecordingModeEnabled;
- (void)_setVibrationPatternToReplay:(id)arg1;
- (void)_setRecordedDataWrapper:(id)arg1;
- (void)currentVibrationComponentShouldEnd;
- (double)_vibrationPatternMaximumDuration;
- (void)_setReplayModeEnabled:(bool)arg1;
- (bool)_isReplayModeEnabled;
- (void)exitRecordingMode;
- (id)initWithVibrationPatternMaximumDuration:(double)arg1 styleProvider:(id)arg2;
- (void)_setVibrationPatternMaximumDuration:(double)arg1;
- (void)exitReplayMode;
- (void)enterRecordingMode;
- (void)enterReplayModeWithVibrationPattern:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
