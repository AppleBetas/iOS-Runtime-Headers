/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:36 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBNotificationDestinationHomeButtonPressHandler;
@class SBHardwareButtonActionList, SBHardwareButtonService;

@interface SBHomeHardwareButtonActions : NSObject {

	BOOL _screenWasDimOnMenuDown;
	BOOL _dontUnlockOnButtonUp;
	BOOL _isGuidedAccessActive;
	SBHardwareButtonActionList* _buttonUpActions;
	SBHardwareButtonActionList* _buttonUpPostActions;
	unsigned long long _menuButtonHoldStartTime;
	double _menuButtonHoldStartAbsoluteTime;
	SBHardwareButtonService* _hardwareButtonService;
	BOOL _buttonDown;
	double _currentLongPressDuration;
	id<SBNotificationDestinationHomeButtonPressHandler> _bannerDestination;
	id<SBNotificationDestinationHomeButtonPressHandler> _notificationCenterDestination;

}

@property (assign,getter=isButtonDown,nonatomic) BOOL buttonDown;                                                                   //@synthesize buttonDown=_buttonDown - In the implementation block
@property (assign,nonatomic) double currentLongPressDuration;                                                                       //@synthesize currentLongPressDuration=_currentLongPressDuration - In the implementation block
@property (assign,nonatomic,__weak) id<SBNotificationDestinationHomeButtonPressHandler> bannerDestination;                          //@synthesize bannerDestination=_bannerDestination - In the implementation block
@property (assign,nonatomic,__weak) id<SBNotificationDestinationHomeButtonPressHandler> notificationCenterDestination;              //@synthesize notificationCenterDestination=_notificationCenterDestination - In the implementation block
+(Class)safeCategoryBaseClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id<SBNotificationDestinationHomeButtonPressHandler>)bannerDestination;
-(void)setBannerDestination:(id<SBNotificationDestinationHomeButtonPressHandler>)arg1 ;
-(id<SBNotificationDestinationHomeButtonPressHandler>)notificationCenterDestination;
-(void)setNotificationCenterDestination:(id<SBNotificationDestinationHomeButtonPressHandler>)arg1 ;
-(BOOL)isButtonDown;
-(void)performAfterMenuButtonUpIsHandledUsingBlock:(/*^block*/id)arg1 ;
-(void)performInitialButtonDownActions;
-(void)performFinalButtonUpActions;
-(void)performLongPressActions;
-(void)guidedAccessWasActivated;
-(void)guidedAccessWasDeactivated;
-(void)_cancelPreheatingOfPlugin;
-(BOOL)_shouldIgnorePressesDueToProxOrIdle:(id*)arg1 ;
-(void)performWhenMenuButtonIsUpUsingBlock:(/*^block*/id)arg1 ;
-(double)currentLongPressDuration;
-(void)_preheatPluginForPresentationAfterInterval:(double)arg1 ;
-(BOOL)_performButtonPreflightActions;
-(void)_logMenuButtonHoldTime;
-(void)performInitialButtonUpActions;
-(void)performDoublePressDownActions;
-(void)performTriplePressUpActions;
-(void)performLongPressCancelledActions;
-(void)performDoubleTapUpActions;
-(void)setCurrentLongPressDuration:(double)arg1 ;
-(id)init;
-(void)setButtonDown:(BOOL)arg1 ;
-(void)performSinglePressUpActions;
@end

