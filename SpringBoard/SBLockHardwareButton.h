/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SBSOSTriggerObserverDelegate.h>

@class SBApplication, SBLockHardwareButtonActions, NSSet, SBButtonDownGestureRecognizer, SBTapGestureRecognizer, SBLongPressGestureRecognizer, SBPressSequenceAWDLogger, SBSOSTriggerObserver, UIGestureRecognizer, SBHomeHardwareButton, NSString;

@interface SBLockHardwareButton : NSObject <UIGestureRecognizerDelegate, SBSOSTriggerObserverDelegate> {

	SBApplication* _lastLockButtonEventRecipient;
	unsigned long long _aggdStartTime;
	SBLockHardwareButtonActions* _buttonActions;
	NSSet* _gestureRecognizers;
	SBButtonDownGestureRecognizer* _buttonDownGestureRecognizer;
	SBTapGestureRecognizer* _singlePressGestureRecognizer;
	SBLongPressGestureRecognizer* _longPressGestureRecognizer;
	SBPressSequenceAWDLogger* _lockPressSequenceLogger;
	SBSOSTriggerObserver* _sosTriggerObserver;
	SBLongPressGestureRecognizer* _sosGestureRecognizer;
	SBLongPressGestureRecognizer* _loggingGestureRecognizer;
	UIGestureRecognizer* _screenshotGestureRecognizer;
	SBHomeHardwareButton* _homeHardwareButton;

}

@property (nonatomic,retain) SBLockHardwareButtonActions * buttonActions;                              //@synthesize buttonActions=_buttonActions - In the implementation block
@property (nonatomic,retain) NSSet * gestureRecognizers;                                               //@synthesize gestureRecognizers=_gestureRecognizers - In the implementation block
@property (nonatomic,retain) SBButtonDownGestureRecognizer * buttonDownGestureRecognizer;              //@synthesize buttonDownGestureRecognizer=_buttonDownGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBTapGestureRecognizer * singlePressGestureRecognizer;                    //@synthesize singlePressGestureRecognizer=_singlePressGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBLongPressGestureRecognizer * longPressGestureRecognizer;                //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBPressSequenceAWDLogger * lockPressSequenceLogger;                       //@synthesize lockPressSequenceLogger=_lockPressSequenceLogger - In the implementation block
@property (nonatomic,retain) SBSOSTriggerObserver * sosTriggerObserver;                                //@synthesize sosTriggerObserver=_sosTriggerObserver - In the implementation block
@property (nonatomic,retain) SBLongPressGestureRecognizer * sosGestureRecognizer;                      //@synthesize sosGestureRecognizer=_sosGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBLongPressGestureRecognizer * loggingGestureRecognizer;                  //@synthesize loggingGestureRecognizer=_loggingGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) UIGestureRecognizer * screenshotGestureRecognizer;                 //@synthesize screenshotGestureRecognizer=_screenshotGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) SBHomeHardwareButton * homeHardwareButton;                         //@synthesize homeHardwareButton=_homeHardwareButton - In the implementation block
@property (nonatomic,readonly) BOOL isButtonDown; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_shouldHandleVolumeAndPowerButtonPriorities;
-(id)initWithScreenshotGestureRecognizer:(id)arg1 homeHardwareButton:(id)arg2 ;
-(BOOL)isButtonDown;
-(SBHomeHardwareButton *)homeHardwareButton;
-(BOOL)reverseFadeOutIfNeeded;
-(void)setButtonActions:(SBLockHardwareButtonActions *)arg1 ;
-(UIGestureRecognizer *)screenshotGestureRecognizer;
-(void)setScreenshotGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)setHomeHardwareButton:(SBHomeHardwareButton *)arg1 ;
-(void)screenshotRecognizerDidRecognize:(id)arg1 ;
-(void)cancelLongPress;
-(void)sosDidTrigger:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sosTriggerDidBecomeActive:(id)arg1 ;
-(void)sosTriggerDidBecomeInactive:(id)arg1 ;
-(id)initWithScreenshotGestureRecognizer:(id)arg1 homeHardwareButton:(id)arg2 buttonActions:(id)arg3 createGestures:(BOOL)arg4 ;
-(void)_createGestureRecognizers;
-(void)singlePress:(id)arg1 ;
-(void)sosGesture:(id)arg1 ;
-(void)loggingGesture:(id)arg1 ;
-(void)_reportAggdLoggingForButtonEventIsDownEvent:(BOOL)arg1 ;
-(BOOL)_tryToSendButtonDownEventsToAppForRecognizer:(id)arg1 ;
-(void)_sendButtonUpEventToAppForRecognizer:(id)arg1 ;
-(double)_timestampOnGestureRecognizer:(id)arg1 ;
-(void)_noteAXHomeClickSpeedChanged;
-(SBButtonDownGestureRecognizer *)buttonDownGestureRecognizer;
-(void)setButtonDownGestureRecognizer:(SBButtonDownGestureRecognizer *)arg1 ;
-(SBTapGestureRecognizer *)singlePressGestureRecognizer;
-(void)setSinglePressGestureRecognizer:(SBTapGestureRecognizer *)arg1 ;
-(SBPressSequenceAWDLogger *)lockPressSequenceLogger;
-(void)setLockPressSequenceLogger:(SBPressSequenceAWDLogger *)arg1 ;
-(SBSOSTriggerObserver *)sosTriggerObserver;
-(void)setSosTriggerObserver:(SBSOSTriggerObserver *)arg1 ;
-(SBLongPressGestureRecognizer *)sosGestureRecognizer;
-(void)setSosGestureRecognizer:(SBLongPressGestureRecognizer *)arg1 ;
-(SBLongPressGestureRecognizer *)loggingGestureRecognizer;
-(void)setLoggingGestureRecognizer:(SBLongPressGestureRecognizer *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(NSSet *)gestureRecognizers;
-(void)setGestureRecognizers:(NSSet *)arg1 ;
-(void)longPress:(id)arg1 ;
-(SBLongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(SBLongPressGestureRecognizer *)arg1 ;
-(void)buttonDown:(id)arg1 ;
-(SBLockHardwareButtonActions *)buttonActions;
@end

