/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:49 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, HKWorkout, _HKFirstPartyWorkoutSnapshot, HKHealthStore, HKSampleQuery, HKObserverQuery;

@interface NTKWorkoutComplicationDataSource : NTKComplicationDataSource {

	NSObject*<OS_dispatch_queue> _healthQueue;
	int _lockStateNotifyToken;
	BOOL _deviceIsLocked;
	int _workoutStateNotifyToken;
	NSArray* _animationImages;
	BOOL _frozen;
	BOOL _loadingLastWorkout;
	BOOL _hasKnownLastWorkoutState;
	HKWorkout* _lastWorkout;
	_HKFirstPartyWorkoutSnapshot* _activeWorkoutSnapshot;
	HKHealthStore* _healthStore;
	HKSampleQuery* _lastWorkoutQuery;
	HKObserverQuery* _workoutObservationQuery;

}

@property (assign,getter=isLoadingLastWorkout,nonatomic) BOOL loadingLastWorkout;               //@synthesize loadingLastWorkout=_loadingLastWorkout - In the implementation block
@property (nonatomic,retain) HKWorkout * lastWorkout;                                           //@synthesize lastWorkout=_lastWorkout - In the implementation block
@property (assign,nonatomic) BOOL hasKnownLastWorkoutState;                                     //@synthesize hasKnownLastWorkoutState=_hasKnownLastWorkoutState - In the implementation block
@property (nonatomic,retain) _HKFirstPartyWorkoutSnapshot * activeWorkoutSnapshot;              //@synthesize activeWorkoutSnapshot=_activeWorkoutSnapshot - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                       //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKSampleQuery * lastWorkoutQuery;                                  //@synthesize lastWorkoutQuery=_lastWorkoutQuery - In the implementation block
@property (nonatomic,retain) HKObserverQuery * workoutObservationQuery;                         //@synthesize workoutObservationQuery=_workoutObservationQuery - In the implementation block
+(id)_templateForWorkout:(id)arg1 family:(long long)arg2 ;
+(id)_unknownTemplateForFamily:(long long)arg1 ;
+(id)_workoutTintColor;
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 ;
+(BOOL)acceptsComplicationFamily:(long long)arg1 ;
-(void)dealloc;
-(void)resume;
-(void)_invalidate;
-(void)pause;
-(void)getSupportedTimeTravelDirectionsWithHandler:(/*^block*/id)arg1 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 ;
-(id)currentSwitcherTemplate;
-(void)_handleDeviceLockChange;
-(id)complicationApplicationIdentifier;
-(void)_updateActiveWorkoutState;
-(void)_startObserving;
-(void)_stopLastWorkoutQuerySynchronously:(BOOL)arg1 ;
-(void)_stopObservingSynchronously:(BOOL)arg1 ;
-(BOOL)_hasActiveWorkout;
-(id)_templateForActiveWorkout;
-(id)_noWorkoutsTemplate;
-(void)_startLastWorkoutQueryIfPossible;
-(BOOL)_hasPausedActiveWorkout;
-(id)_makeAnimatedImageProvider;
-(id)_animationImages;
-(id)_makeObservationQuery;
-(void)setWorkoutObservationQuery:(HKObserverQuery *)arg1 ;
-(HKHealthStore *)healthStore;
-(HKObserverQuery *)workoutObservationQuery;
-(id)_makeLastWorkoutQuery;
-(void)setLastWorkoutQuery:(HKSampleQuery *)arg1 ;
-(HKSampleQuery *)lastWorkoutQuery;
-(void)setLoadingLastWorkout:(BOOL)arg1 ;
-(void)setLastWorkout:(HKWorkout *)arg1 ;
-(void)setHasKnownLastWorkoutState:(BOOL)arg1 ;
-(void)setActiveWorkoutSnapshot:(_HKFirstPartyWorkoutSnapshot *)arg1 ;
-(id)lockedTemplate;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(BOOL)isLoadingLastWorkout;
-(HKWorkout *)lastWorkout;
-(BOOL)hasKnownLastWorkoutState;
-(_HKFirstPartyWorkoutSnapshot *)activeWorkoutSnapshot;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
@end

