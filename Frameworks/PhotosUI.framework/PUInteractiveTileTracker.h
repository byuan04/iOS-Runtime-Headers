/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUInteractiveTileTracker : NSObject {
    int  __state;
    PUTileHider * __tileHider;
    struct PUDisplayVelocity { 
        float x; 
        float y; 
        float scale; 
        float rotation; 
    }  _currentVelocity;
    <PUInteractiveTileTrackerDelegate> * _delegate;
    struct { 
        BOOL respondsToWillStartTrackingTileController; 
        BOOL respondsToDidStopTrackingTileController; 
    }  _delegateFlags;
    float  _progress;
    BOOL  _shouldEnd;
    BOOL  _shouldFinish;
    PUTilingView * _tilingView;
    PUTileController * _trackedTileController;
}

@property (setter=_setState:, nonatomic) int _state;
@property (setter=_setTileHider:, nonatomic, retain) PUTileHider *_tileHider;
@property (nonatomic) struct PUDisplayVelocity { float x1; float x2; float x3; float x4; } currentVelocity;
@property (nonatomic) <PUInteractiveTileTrackerDelegate> *delegate;
@property (nonatomic) float progress;
@property (nonatomic) BOOL shouldEnd;
@property (nonatomic) BOOL shouldFinish;
@property (nonatomic, readonly) PUTilingView *tilingView;
@property (nonatomic, readonly) PUTileController *trackedTileController;

- (void).cxx_destruct;
- (void)_setState:(int)arg1;
- (void)_setTileHider:(id)arg1;
- (void)_setTrackedTileController:(id)arg1;
- (int)_state;
- (id)_tileHider;
- (void)_updateTrackedTileController;
- (void)completeTracking;
- (void)configureTileReattachmentContext:(id)arg1;
- (struct PUDisplayVelocity { float x1; float x2; float x3; float x4; })currentVelocity;
- (id)delegate;
- (id)init;
- (id)initWithTilingView:(id)arg1;
- (float)progress;
- (void)setCurrentVelocity:(struct PUDisplayVelocity { float x1; float x2; float x3; float x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setShouldEnd:(BOOL)arg1;
- (void)setShouldFinish:(BOOL)arg1;
- (BOOL)shouldEnd;
- (BOOL)shouldFinish;
- (void)startTileControllerTracking;
- (void)stopTileControllerTracking;
- (id)tileControllerToTrack;
- (id)tilingView;
- (id)trackedTileController;
- (void)update;
- (void)updateGestureRecognizerTracking;
- (void)updateTileControllerTracking;

@end
