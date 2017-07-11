/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:34 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBLockHardwareButtonActions : NSObject {

	BOOL _didPlayLockSound;
	BOOL _dontLockOnNextLockUp;
	BOOL _fadeOutInProgressFromLockButtonWhileUnlocked;
	BOOL _undidFadeOutFromLockButton;
	BOOL _useDashBoard;
	BOOL _sosGestureIsActive;
	BOOL _isButtonDown;

}

@property (nonatomic,readonly) BOOL isButtonDown;              //@synthesize isButtonDown=_isButtonDown - In the implementation block
-(BOOL)isButtonDown;
-(BOOL)performButtonDownPreActions;
-(void)performButtonDownActions;
-(BOOL)performButtonUpPreActions;
-(void)performSinglePressAction;
-(BOOL)reverseFadeOutIfNeeded;
-(void)_playLockSound;
-(void)performSOSGestureBeganActions;
-(void)performSOSGestureEndedActions;
-(void)performLongPressActions;
-(void)performSOSActionsWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
@end

