/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKTimelapseState : NSObject <NSCoding, NSCopying> {
    BOOL  _allFramesWritten;
    int  _captureOrientation;
    double  _captureTimeInterval;
    double  _focusLensPosition;
    int  _frameIndexStride;
    NSDate * _lastFrameResponseTime;
    int  _nextFrameIndex;
    CLLocation * _startLocation;
    NSDate * _startTime;
    int  _stopReasons;
    NSDate * _stopTime;
    NSString * _timelapseUUID;
    BOOL  _usingFrontCamera;
}

@property (nonatomic) BOOL allFramesWritten;
@property (nonatomic) int captureOrientation;
@property (nonatomic, readonly) double captureTimeInterval;
@property (nonatomic, readonly) int connectionMode;
@property (nonatomic) double focusLensPosition;
@property (nonatomic, readonly) int frameIndexStride;
@property (nonatomic, retain) NSDate *lastFrameResponseTime;
@property (nonatomic, readonly) int nextFrameIndex;
@property (nonatomic, retain) CLLocation *startLocation;
@property (nonatomic, retain) NSDate *startTime;
@property (nonatomic) int stopReasons;
@property (nonatomic, retain) NSDate *stopTime;
@property (nonatomic, retain) NSString *timelapseUUID;
@property (getter=isUsingFrontCamera, nonatomic) BOOL usingFrontCamera;

+ (double)maxTimeToWaitForWrittenFrameAfterStop;
+ (id)stateWithContentsOfFile:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_commonCMKTimelapseStateInitWithCoder:(id)arg1;
- (BOOL)addStopReasons:(int)arg1 stopTime:(id)arg2;
- (BOOL)allFramesWritten;
- (BOOL)canContinueCapture;
- (int)captureOrientation;
- (double)captureTimeInterval;
- (int)connectionMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filePathForNextFrameIndex;
- (float)focusLensPosition;
- (void)forceCompleted;
- (int)frameIndexStride;
- (BOOL)incrementFrameIndex;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToState:(id)arg1;
- (BOOL)isReadyForWritingMovie;
- (BOOL)isUsingFrontCamera;
- (id)lastFrameResponseTime;
- (BOOL)mergeSecondaryState:(id)arg1;
- (int)nextFrameIndex;
- (void)setAllFramesWritten:(BOOL)arg1;
- (void)setCaptureOrientation:(int)arg1;
- (void)setFocusLensPosition:(float)arg1;
- (void)setLastFrameResponseTime:(id)arg1;
- (void)setStartLocation:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setStopReasons:(int)arg1;
- (void)setStopTime:(id)arg1;
- (void)setTimelapseUUID:(id)arg1;
- (void)setUsingFrontCamera:(BOOL)arg1;
- (id)startLocation;
- (id)startTime;
- (int)stopReasons;
- (id)stopTime;
- (id)timelapseUUID;
- (BOOL)writeToFile:(id)arg1 createDirectoryIfNeeded:(BOOL)arg2;

@end