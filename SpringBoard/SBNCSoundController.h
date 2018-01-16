/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBLockScreenManager, SBLockStateAggregator, SBQuietModeStateAggregator, NSMutableDictionary, NSMutableSet;

@interface SBNCSoundController : NSObject {

	SBLockScreenManager* _lockScreenManager;
	SBLockStateAggregator* _lockStateAggregator;
	SBQuietModeStateAggregator* _quietModeStateAggregator;
	NSMutableDictionary* _playingSounds;
	NSMutableSet* _requestsRequiringExplicitKill;

}

@property (nonatomic,retain) SBLockScreenManager * lockScreenManager;                            //@synthesize lockScreenManager=_lockScreenManager - In the implementation block
@property (nonatomic,retain) SBLockStateAggregator * lockStateAggregator;                        //@synthesize lockStateAggregator=_lockStateAggregator - In the implementation block
@property (nonatomic,retain) SBQuietModeStateAggregator * quietModeStateAggregator;              //@synthesize quietModeStateAggregator=_quietModeStateAggregator - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * playingSounds;                                //@synthesize playingSounds=_playingSounds - In the implementation block
@property (nonatomic,retain) NSMutableSet * requestsRequiringExplicitKill;                       //@synthesize requestsRequiringExplicitKill=_requestsRequiringExplicitKill - In the implementation block
-(void)_hardwareButtonPressed:(id)arg1 ;
-(SBLockScreenManager *)lockScreenManager;
-(void)playSoundIfPossibleForNotificationRequest:(id)arg1 ;
-(void)setLockScreenManager:(SBLockScreenManager *)arg1 ;
-(BOOL)_isQuietModeEnabledAndActive;
-(BOOL)_isDeviceUILocked;
-(SBQuietModeStateAggregator *)quietModeStateAggregator;
-(SBLockStateAggregator *)lockStateAggregator;
-(void)setLockStateAggregator:(SBLockStateAggregator *)arg1 ;
-(void)setQuietModeStateAggregator:(SBQuietModeStateAggregator *)arg1 ;
-(void)_notificationCenterDidDismiss;
-(NSMutableDictionary *)playingSounds;
-(id)_soundWithNotificationSound:(id)arg1 ;
-(NSMutableSet *)requestsRequiringExplicitKill;
-(BOOL)canPlaySoundForNotificationRequest:(id)arg1 ;
-(void)_killSounds;
-(id)initWithLockScreenManager:(id)arg1 lockStateAggregator:(id)arg2 quietModeStateAggregator:(id)arg3 ;
-(void)setPlayingSounds:(NSMutableDictionary *)arg1 ;
-(void)setRequestsRequiringExplicitKill:(NSMutableSet *)arg1 ;
-(id)init;
-(void)playSoundForNotificationRequest:(id)arg1 ;
-(void)stopSoundForNotificationRequest:(id)arg1 ;
@end

