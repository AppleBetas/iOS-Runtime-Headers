/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>

@class FBDisplayLayoutTransition, SBWorkspaceAlert, SBUIAnimationController, NSString;

@interface SBAlertToAlertWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver> {

	BOOL _animatingAlertDeactivation;
	FBDisplayLayoutTransition* _layoutTransition;
	BOOL _activation;
	SBWorkspaceAlert* _activatingAlert;
	SBWorkspaceAlert* _deactivatingAlert;
	SBUIAnimationController* _animation;

}

@property (nonatomic,retain) SBWorkspaceAlert * activatingAlert;                //@synthesize activatingAlert=_activatingAlert - In the implementation block
@property (nonatomic,retain) SBWorkspaceAlert * deactivatingAlert;              //@synthesize deactivatingAlert=_deactivatingAlert - In the implementation block
@property (assign,nonatomic) BOOL activation;                                   //@synthesize activation=_activation - In the implementation block
@property (nonatomic,retain) SBUIAnimationController * animation;               //@synthesize animation=_animation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(SBWorkspaceAlert *)activatingAlert;
-(SBWorkspaceAlert *)deactivatingAlert;
-(BOOL)activation;
-(BOOL)_isFromMainSwitcher;
-(void)_updateSceneLayout;
-(void)_deactivateAlertIfNecessary;
-(void)_alertAnimationComplete:(id)arg1 ;
-(void)_doAlertTransition;
-(void)_cleanUpAnimation;
-(void)setActivatingAlert:(SBWorkspaceAlert *)arg1 ;
-(void)setDeactivatingAlert:(SBWorkspaceAlert *)arg1 ;
-(void)setActivation:(BOOL)arg1 ;
-(void)_willBegin;
-(void)dealloc;
-(NSString *)debugDescription;
-(SBUIAnimationController *)animation;
-(void)setAnimation:(SBUIAnimationController *)arg1 ;
-(void)_didComplete;
-(void)_begin;
@end

