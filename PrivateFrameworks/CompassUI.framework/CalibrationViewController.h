/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
 */

@class CAShapeLayer, CalibrationBallView, CompassBackgroundView, NSMutableArray, UILabel;

@interface CalibrationViewController : UIViewController {
    struct CGPoint { 
        float x; 
        float y; 
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    double _angleOfAwesome;
    double _angleToRim;
    CalibrationBallView *_ballView;
    NSMutableArray *_calibrationConstraints;
    CompassBackgroundView *_compassBackgroundView;
    CAShapeLayer *_compassBackgroundViewMask;
    } _compassOriginPoint;
    float _compassRadius;
    BOOL _ignoreMotionUpdates;
    UILabel *_instructionLabel;
    unsigned int _numCompleteTics;
    } _previousGravity;
    double _previousHorizontalAngle;
    double _previousTimestamp;
    int _quantizationType;
    BOOL _shouldCompleteTics;
    double _startTicAngle;
    float *_ticsShowingArray;
    UILabel *_titleLabel;
}

- (id).cxx_construct;
- (double)_correctedAngleForCurrentOrientation:(double)arg1;
- (void)addConstraints;
- (BOOL)circleIsCompleted;
- (double)completeCircle;
- (void)dealloc;
- (void)hideAllTics;
- (id)init;
- (id)initWithOriginPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)prefersStatusBarHidden;
- (float)quantizedPercentage:(double)arg1 forAngle:(double)arg2;
- (void)reset;
- (void)setBallAngle:(double)arg1 tiltAngle:(double)arg2;
- (void)setMotion:(id)arg1;
- (void)showTicAtAngle:(double)arg1 withCredit:(double)arg2;
- (void)showTicsBetweenStartAngle:(double)arg1 endAngle:(double)arg2 withCredit:(double)arg3;
- (void)updateMaskingPath;
- (id)updatedMaskingPath;
- (void)userDefaultsChanged:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end