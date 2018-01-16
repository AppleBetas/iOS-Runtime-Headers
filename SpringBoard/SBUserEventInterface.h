/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUserEventInterfaceObserver;
@interface SBUserEventInterface : NSObject {

	id<SBUserEventInterfaceObserver> _observer;

}
+(id)sharedInstance;
-(void)resetWithInterval:(double)arg1 mode:(long long)arg2 observer:(id)arg3 ;
-(void)callbackOnNextUserEvent;
-(int)_hidModeForMode:(long long)arg1 ;
-(void)_userEventsDidIdle;
-(void)_userEventsDidUnIdle;
-(void)_userEventPresenceTriggered;
-(void)_userEventPresenceExpired;
-(void)_userEventReceived;
-(id)init;
@end

