/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNVirtualScheduler : NSObject <CNScheduler> {
    unsigned int  _clock;
    BOOL  _isPerforming;
    BOOL  _isStarted;
    unsigned int  _nextSchedulableTick;
    CNQueue * _queue;
    unsigned int  _stopTime;
}

@property (readonly) unsigned int clock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)providerWithScheduler:(id)arg1;
+ (unsigned int)timeWithDelay:(double)arg1 fromClock:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)_nextSchedulableTick;
- (BOOL)_performJobs;
- (id)_scheduleBlock:(id /* block */)arg1 atTime:(unsigned int)arg2;
- (void)advanceBy:(unsigned int)arg1;
- (void)advanceTo:(unsigned int)arg1;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2 qualityOfService:(unsigned int)arg3;
- (unsigned int)clock;
- (id)description;
- (BOOL)hasJobsScheduled;
- (id)init;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 qualityOfService:(unsigned int)arg2;
- (id)performCancelableBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1 qualityOfService:(unsigned int)arg2;
- (void)start;
- (void)stop;
- (double)timestamp;

@end