/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMAnimationDelegate : NSObject <CAAnimationDelegate> {
    id /* block */  _completion;
    id /* block */  _start;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) id /* block */ start;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void)setStart:(id /* block */)arg1;
- (id /* block */)start;

@end