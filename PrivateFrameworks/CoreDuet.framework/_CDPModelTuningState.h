/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPModelTuningState : NSObject <NSSecureCoding> {
    double  _bestLogLambda;
    double  _bestScore;
    double  _bestThreshold;
    double  _bestW0;
    int  _i;
    int  _j;
}

@property (nonatomic) double bestLogLambda;
@property (nonatomic) double bestScore;
@property (nonatomic) double bestThreshold;
@property (nonatomic) double bestW0;
@property (nonatomic) int i;
@property (nonatomic) int j;
@property (nonatomic, readonly) double progress;

+ (id)initialTuningState;
+ (BOOL)supportsSecureCoding;

- (float)bestLogLambda;
- (float)bestScore;
- (float)bestThreshold;
- (float)bestW0;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)i;
- (id)initWithCoder:(id)arg1;
- (int)j;
- (float)progress;
- (void)setBestLogLambda:(float)arg1;
- (void)setBestScore:(float)arg1;
- (void)setBestThreshold:(float)arg1;
- (void)setBestW0:(float)arg1;
- (void)setI:(int)arg1;
- (void)setJ:(int)arg1;

@end