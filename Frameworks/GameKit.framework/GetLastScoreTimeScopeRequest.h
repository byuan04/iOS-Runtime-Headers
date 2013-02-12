/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGame, GKPlayer;

@interface GetLastScoreTimeScopeRequest : GKDataRequest {
    GKGame *_game;
    GKPlayer *_player;
    int _timeScope;
}

@property(retain) GKGame * game;
@property(retain) GKPlayer * player;
@property(readonly) int timeScope;

- (id)cacheKey;
- (int)cacheType;
- (void)dealloc;
- (id)game;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (id)key;
- (id)player;
- (id)request;
- (void)setGame:(id)arg1;
- (void)setPlayer:(id)arg1;
- (int)timeScope;

@end