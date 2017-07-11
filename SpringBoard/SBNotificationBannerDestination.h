/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NCNotificationViewControllerDelegatePrivate.h>
#import <SpringBoard/SBDashBoardExternalBehaviorProviding.h>
#import <SpringBoard/SBMotionGestureObserver.h>
#import <SpringBoard/SBAssistantObserver.h>
#import <libobjc.A.dylib/NCNotificationAlertDestination.h>
#import <SpringBoard/SBNotificationDestinationHomeButtonPressHandler.h>
#import <SpringBoard/SBNotificationExtensionVisibilityProviding.h>

@protocol NCNotificationAlertDestinationDelegate, OS_dispatch_source, OS_dispatch_semaphore;
@class SBLockScreenManager, SBNotificationCenterController, SBQuietModeStateAggregator, SBSetupManager, SBNotificationBannerWindow, NCNotificationViewController, NSObject, FBUIApplicationSceneDeactivationAssertion, SBAppStatusBarSettingsAssertion, SBNotificationLongLookBannerDestination, NSString;

@interface SBNotificationBannerDestination : NSObject <NCNotificationViewControllerDelegatePrivate, SBDashBoardExternalBehaviorProviding, SBMotionGestureObserver, SBAssistantObserver, NCNotificationAlertDestination, SBNotificationDestinationHomeButtonPressHandler, SBNotificationExtensionVisibilityProviding> {

	BOOL _userInteractionInProgress;
	id<NCNotificationAlertDestinationDelegate> _delegate;
	SBLockScreenManager* _lockScreenManager;
	SBNotificationCenterController* _notificationCenterController;
	SBQuietModeStateAggregator* _quietModeStateAggregator;
	SBSetupManager* _setupManager;
	SBNotificationBannerWindow* _bannerWindow;
	NCNotificationViewController* _presentedBanner;
	NSObject*<OS_dispatch_source> _presentTimer;
	NSObject*<OS_dispatch_source> _replaceTimer;
	NSObject*<OS_dispatch_source> _dismissTimer;
	NSObject*<OS_dispatch_semaphore> _bannerPresentationSemaphore;
	FBUIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	SBAppStatusBarSettingsAssertion* _statusBarAssertion;
	SBNotificationLongLookBannerDestination* _longLookDestination;

}

@property (nonatomic,retain,readonly) NCNotificationViewController * presentedBanner; 
@property (nonatomic,retain) NCNotificationViewController * presentedBanner;                                     //@synthesize presentedBanner=_presentedBanner - In the implementation block
@property (nonatomic,retain) SBNotificationBannerWindow * bannerWindow;                                          //@synthesize bannerWindow=_bannerWindow - In the implementation block
@property (assign,getter=isUserInteractionInProgress,nonatomic) BOOL userInteractionInProgress;                  //@synthesize userInteractionInProgress=_userInteractionInProgress - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> presentTimer;                                         //@synthesize presentTimer=_presentTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> replaceTimer;                                         //@synthesize replaceTimer=_replaceTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> dismissTimer;                                         //@synthesize dismissTimer=_dismissTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> bannerPresentationSemaphore;                       //@synthesize bannerPresentationSemaphore=_bannerPresentationSemaphore - In the implementation block
@property (nonatomic,retain) FBUIApplicationSceneDeactivationAssertion * resignActiveAssertion;                  //@synthesize resignActiveAssertion=_resignActiveAssertion - In the implementation block
@property (nonatomic,retain) SBAppStatusBarSettingsAssertion * statusBarAssertion;                               //@synthesize statusBarAssertion=_statusBarAssertion - In the implementation block
@property (nonatomic,retain) SBNotificationLongLookBannerDestination * longLookDestination;                      //@synthesize longLookDestination=_longLookDestination - In the implementation block
@property (nonatomic,retain) SBLockScreenManager * lockScreenManager;                                            //@synthesize lockScreenManager=_lockScreenManager - In the implementation block
@property (nonatomic,retain) SBNotificationCenterController * notificationCenterController;                      //@synthesize notificationCenterController=_notificationCenterController - In the implementation block
@property (nonatomic,retain) SBQuietModeStateAggregator * quietModeStateAggregator;                              //@synthesize quietModeStateAggregator=_quietModeStateAggregator - In the implementation block
@property (nonatomic,retain) SBSetupManager * setupManager;                                                      //@synthesize setupManager=_setupManager - In the implementation block
@property (getter=isPresentingBanner,nonatomic,readonly) BOOL presentingBanner; 
@property (getter=isPresentingBannerInLongLook,nonatomic,readonly) BOOL presentingBannerInLongLook; 
@property (getter=isDismissingBanner,nonatomic,readonly) BOOL dismissingBanner; 
@property (getter=isPreventingAutomaticLock,nonatomic,readonly) BOOL preventingAutomaticLock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,copy,readonly) NSString * dashBoardIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (assign,nonatomic,__weak) id<NCNotificationDestinationDelegate> delegate; 
@property (nonatomic,readonly) NSString * identifier; 
-(NSString *)dashBoardIdentifier;
-(void)_dismissPresentedBannerAnimated:(BOOL)arg1 ;
-(BOOL)isPresentingBannerInLongLook;
-(BOOL)isNotificationContentExtensionVisible:(id)arg1 ;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(long long)idleTimerDuration;
-(long long)idleWarnMode;
-(void)_runLongLookPresentationTestWithBeginBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_runBannerPresentationTestWithBeginBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)assistant:(id)arg1 viewWillAppear:(long long)arg2 ;
-(SBAppStatusBarSettingsAssertion *)statusBarAssertion;
-(void)setStatusBarAssertion:(SBAppStatusBarSettingsAssertion *)arg1 ;
-(void)assistant:(id)arg1 viewDidDisappear:(long long)arg2 ;
-(BOOL)isPresentingBanner;
-(void)presentModalBannerForNotificationRequest:(id)arg1 sourceAction:(id)arg2 ;
-(SBLockScreenManager *)lockScreenManager;
-(SBNotificationCenterController *)notificationCenterController;
-(void)setLockScreenManager:(SBLockScreenManager *)arg1 ;
-(void)setNotificationCenterController:(SBNotificationCenterController *)arg1 ;
-(BOOL)_isQuietModeEnabledAndActive;
-(SBQuietModeStateAggregator *)quietModeStateAggregator;
-(void)setQuietModeStateAggregator:(SBQuietModeStateAggregator *)arg1 ;
-(BOOL)handleHomeButtonPress;
-(NCNotificationViewController *)presentedBanner;
-(void)_postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isDismissingBanner;
-(id)_viewControllerForPresentation;
-(void)_setupSystemStateChangeNotifications;
-(void)_setupDismissalNotifications;
-(void)_setupTimers;
-(BOOL)_isPresentingBanner;
-(BOOL)_isPresentingBannerInLongLook;
-(BOOL)_isPresentingBannerPreventingAutomaticLock;
-(BOOL)isPreventingAutomaticLock;
-(void)_postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 modal:(BOOL)arg3 sourceAction:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_isPresentingStickyBanner;
-(BOOL)_isPresentedBannerBeingDragged;
-(BOOL)_isInSetupMode;
-(BOOL)_isPendingBannerPresentation;
-(BOOL)_canReceiveNotificationRequestIfLocked:(id)arg1 ;
-(BOOL)_presentedBannerMatchesNotificationRequest:(id)arg1 ;
-(BOOL)_isPresentingActiveAlert;
-(FBUIApplicationSceneDeactivationAssertion *)resignActiveAssertion;
-(void)_cancelReplaceAndDismissTimers;
-(void)_setReadyForNotificationRequestsCoalescingWith:(id)arg1 ;
-(BOOL)_isContentSuppressedForNotificationRequest:(id)arg1 ;
-(void)_updateMotionGestureObservation;
-(void)_startReplaceAndDismissTimersForRequest:(id)arg1 ;
-(void)_dismissBannerCompleted;
-(void)_setStatusBarsHidden:(BOOL)arg1 withDuration:(double)arg2 ;
-(BOOL)isUserInteractionInProgress;
-(void)setUserInteractionInProgress:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)bannerPresentationSemaphore;
-(BOOL)_isPresentingBannerForAudioMessage;
-(void)_resetPresentTimer;
-(BOOL)_isPresentingBannerWithHiddenPreview;
-(BOOL)_isUILocked;
-(BOOL)_isNotificationCenterVisible;
-(void)setBannerPresentationSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)_notificationViewControllerForRequest:(id)arg1 ;
-(void)_presentNotificationViewController:(id)arg1 modal:(BOOL)arg2 forRequest:(id)arg3 sourceAction:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setPresentedBanner:(NCNotificationViewController *)arg1 ;
-(void)_scheduleNotificationViewControllerPresentationBlock:(/*^block*/id)arg1 ;
-(void)_setReadyForNotificationRequests;
-(BOOL)_isDeviceAuthenticated;
-(SBSetupManager *)setupManager;
-(BOOL)_isShowingShortLookAtRest;
-(id)_startTimerWithDelay:(unsigned long long)arg1 eventHandler:(/*^block*/id)arg2 ;
-(void)_startReplaceTimer;
-(void)_startDismissTimer;
-(void)_cancelReplaceTimer;
-(void)_cancelDismissTimer;
-(void)_setupModeChanged;
-(void)_dismissNonStickyBanner;
-(void)_dismissBannerForUILocking;
-(void)_dismissPresentedBannerAndClearNotification:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_cleanupRootViewControllerPresentationStack;
-(void)didReceiveRaiseGesture;
-(void)presentModalBannerForNotificationRequest:(id)arg1 ;
-(void)presentModalBannerAndExpandForNotificationRequest:(id)arg1 ;
-(void)setSetupManager:(SBSetupManager *)arg1 ;
-(void)setBannerWindow:(SBNotificationBannerWindow *)arg1 ;
-(NSObject*<OS_dispatch_source>)presentTimer;
-(void)setPresentTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)replaceTimer;
-(void)setReplaceTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setDismissTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setResignActiveAssertion:(FBUIApplicationSceneDeactivationAssertion *)arg1 ;
-(SBNotificationLongLookBannerDestination *)longLookDestination;
-(void)setLongLookDestination:(SBNotificationLongLookBannerDestination *)arg1 ;
-(id)init;
-(void)setDelegate:(id<NCNotificationDestinationDelegate>)arg1 ;
-(void)dealloc;
-(id<NCNotificationDestinationDelegate>)delegate;
-(NSString *)identifier;
-(long long)idleTimerMode;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(id)_rootViewController;
-(SBNotificationBannerWindow *)bannerWindow;
-(void)_lockStateChanged;
-(long long)participantState;
-(id)materialSettingsForNotificationViewController:(id)arg1 ;
-(id)notificationViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2 ;
-(void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)notificationViewControllerShouldPan:(id)arg1 ;
-(BOOL)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg1 ;
-(void)notificationViewController:(id)arg1 shouldFinishLongLookTransitionWithCompletionBlock:(/*^block*/id)arg2 ;
-(BOOL)notificationViewController:(id)arg1 suggestsDismissingShortLookWithSource:(id)arg2 ;
-(void)longLookWillPresentForNotificationViewController:(id)arg1 ;
-(void)notificationViewController:(id)arg1 didPresentLongLook:(BOOL)arg2 ;
-(void)notificationViewController:(id)arg1 didDismissLongLook:(BOOL)arg2 ;
-(void)notificationViewController:(id)arg1 didDismissShortLook:(BOOL)arg2 ;
-(void)notificationViewControllerWillBeginUserInteraction:(id)arg1 ;
-(void)notificationViewControllerDidEndUserInteraction:(id)arg1 ;
-(void)notificationViewController:(id)arg1 didCommitToShortLookPresentation:(BOOL)arg2 withCoordinator:(id)arg3 ;
-(void)notificationViewController:(id)arg1 didCommitToLongLookPresentation:(BOOL)arg2 withCoordinator:(id)arg3 ;
-(BOOL)shouldLoadAudioAccessoryViewForNotificationViewController:(id)arg1 ;
-(void)notificationViewControllerIsReadyToBePresented:(id)arg1 ;
-(void)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(BOOL)canReceiveNotificationRequest:(id)arg1 ;
-(void)prepareDestinationToReceiveCriticalNotificationRequest:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)dismissTimer;
@end

