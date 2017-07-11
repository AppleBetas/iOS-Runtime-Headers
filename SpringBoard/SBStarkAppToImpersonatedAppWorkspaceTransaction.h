/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBStarkAppToAppWorkspaceTransaction.h>

@class SBWorkspaceAlert, SBWorkspaceApplication;

@interface SBStarkAppToImpersonatedAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction {

	SBWorkspaceAlert* _activatingAlert;
	BOOL _animatedAppDeactivation;
	SBWorkspaceApplication* _mainScreenAppThatWillBeActivated;
	id _mainScreenAppThatWillBeActivatedObserver;

}
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)_finishCommit;
-(void)_doCommit;
-(void)_noteWillActivateApplicationOnMainScreen:(id)arg1 underLock:(BOOL)arg2 ;
-(id)_effectiveTopEntity;
-(id)_newAnimationFromAppToApp;
-(id)_newAnimationFromLauncherToApp;
-(id)_newAnimationFromAppToNowPlaying;
-(id)_newAnimationFromNowPlayingToApp;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)dealloc;
@end

