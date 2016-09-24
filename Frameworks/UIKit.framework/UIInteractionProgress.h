/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInteractionProgress : NSObject {
    int  _atLeastTwoUpdates;
    double  _mostRecentUpdateTime;
    NSPointerArray * _observers;
    double  _percentComplete;
    double  _previousPercentComplete;
    double  _previousUpdateTime;
}

@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) double velocity;

- (void).cxx_destruct;
- (unsigned int)_indexOfObserver:(id)arg1;
- (void)addProgressObserver:(id)arg1;
- (id)description;
- (void)endInteraction:(BOOL)arg1;
- (void)endInteraction:(BOOL)arg1 finalVelocity:(float)arg2;
- (id)init;
- (int)numberOfObservers;
- (float)percentComplete;
- (void)removeProgressObserver:(id)arg1;
- (void)setPercentComplete:(float)arg1;
- (float)velocity;

@end