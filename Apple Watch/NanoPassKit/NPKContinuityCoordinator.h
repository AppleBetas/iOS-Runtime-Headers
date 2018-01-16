/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:56:08 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSUserActivity;

@interface NPKContinuityCoordinator : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSUserActivity* _provisionPassUserActivity;
	NSUserActivity* _getPaymentPassesUserActivity;
	NSUserActivity* _passListUserActivity;
	NSUserActivity* _individualPassUserActivity;
	NSUserActivity* _currentUserActivity;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSUserActivity * provisionPassUserActivity;                 //@synthesize provisionPassUserActivity=_provisionPassUserActivity - In the implementation block
@property (nonatomic,retain) NSUserActivity * getPaymentPassesUserActivity;              //@synthesize getPaymentPassesUserActivity=_getPaymentPassesUserActivity - In the implementation block
@property (nonatomic,retain) NSUserActivity * passListUserActivity;                      //@synthesize passListUserActivity=_passListUserActivity - In the implementation block
@property (nonatomic,retain) NSUserActivity * individualPassUserActivity;                //@synthesize individualPassUserActivity=_individualPassUserActivity - In the implementation block
@property (assign,nonatomic,__weak) NSUserActivity * currentUserActivity;                //@synthesize currentUserActivity=_currentUserActivity - In the implementation block
+(id)sharedContinuityCoordinator;
-(id)init;
-(void)dealloc;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUserActivity *)currentUserActivity;
-(NSUserActivity *)passListUserActivity;
-(void)setPassListUserActivity:(NSUserActivity *)arg1 ;
-(void)_saveUserActivity:(id)arg1 ;
-(NSUserActivity *)provisionPassUserActivity;
-(id)_skeletonBridgeUserActivity;
-(void)setProvisionPassUserActivity:(NSUserActivity *)arg1 ;
-(NSUserActivity *)individualPassUserActivity;
-(void)setIndividualPassUserActivity:(NSUserActivity *)arg1 ;
-(NSUserActivity *)getPaymentPassesUserActivity;
-(void)setGetPaymentPassesUserActivity:(NSUserActivity *)arg1 ;
-(void)setCurrentUserActivity:(NSUserActivity *)arg1 ;
-(void)userViewingPassList;
-(void)userViewingPassWithUniqueID:(id)arg1 isPaymentPass:(BOOL)arg2 ;
-(void)userNeedsToProvisionPassWithUniqueID:(id)arg1 ;
-(void)userNeedsPaymentPasses;
-(id)userActivityForPassWithUniqueID:(id)arg1 ;
-(void)invalidateAllActivities;
@end

