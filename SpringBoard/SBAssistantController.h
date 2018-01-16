/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIPluginHost.h>
#import <SpringBoard/SBDashBoardExternalBehaviorProviding.h>

@protocol SBUIPluginViewControllerInterface, BSInvalidatable;
@class BSEventQueue, NSString, SBAssistantWindow, SBFAuthenticationAssertion, NSMutableSet, NSHashTable, FBUIApplicationSceneDeactivationAssertion, UIViewController, FBDisplayLayoutElement;

@interface SBAssistantController : SBUIPluginHost <SBDashBoardExternalBehaviorProviding> {

	BSEventQueue* _operationQueue;
	NSString* _appDisplayIDBeingHosted;
	SBAssistantWindow* _assistantWindow;
	BOOL _unlockedDevice;
	BOOL _launchedInStark;
	BOOL _isHidingOtherWindows;
	int _activationEvent;
	SBFAuthenticationAssertion* _disableAssertion;
	NSMutableSet* _dismissingReasons;
	long long _pendingDismissViewType;
	NSHashTable* _observers;
	FBUIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	UIViewController*<SBUIPluginViewControllerInterface> _mainScreenViewController;
	FBDisplayLayoutElement* _mainDisplayLayoutElement;
	FBDisplayLayoutElement* _starkDisplayLayoutElement;
	id<BSInvalidatable> _hideApplicationModalAlertsAssertion;

}

@property (assign,nonatomic) BOOL unlockedDevice;                                      //@synthesize unlockedDevice=_unlockedDevice - In the implementation block
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
+(Class)safeCategoryBaseClass;
+(BOOL)isAssistantVisible;
+(BOOL)isAssistantRunningHidden;
+(BOOL)isAssistantViewVisible:(long long)arg1 ;
+(BOOL)shouldEnterAssistant;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(BOOL)supportedAndEnabled;
-(BOOL)activatePluginForEvent:(int)arg1 eventSource:(int)arg2 context:(void*)arg3 ;
-(NSString *)dashBoardIdentifier;
-(BOOL)pluginWantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double*)arg3 ;
-(id)activationSettings;
-(BOOL)isAssistantViewVisible:(long long)arg1 ;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(long long)idleTimerDuration;
-(long long)idleWarnMode;
-(BOOL)shouldEnterAssistant;
-(void)dismissAssistantViewIfNecessary:(long long)arg1 withAnimation:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)preparePluginForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3 ;
-(void)dismissAssistantViewIfNecessary:(long long)arg1 withAnimation:(long long)arg2 factory:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissAssistantViewIfNecessary:(long long)arg1 withAnimation:(long long)arg2 ;
-(BOOL)pluginWantsInterfaceOrientation:(long long*)arg1 ;
-(BOOL)pluginSuppressesNotifications;
-(BOOL)pluginWantsScreenDimInterval:(double*)arg1 ;
-(BOOL)_isPluginLoaded;
-(void)_starkSiriWillAppear:(id)arg1 ;
-(void)_starkSiriDidAppear:(id)arg1 ;
-(void)_starkSiriWillDisappear:(id)arg1 ;
-(void)_starkSiriDidDisappear:(id)arg1 ;
-(void)_loadPlugin;
-(void)_notePluginVisibilityDidChange;
-(void)setUnlockedDevice:(BOOL)arg1 ;
-(id)_activationSettingsWithDismissalDisallowed:(BOOL)arg1 ;
-(void)dismissPluginForEvent:(int)arg1 ;
-(double)_defaultAnimatedDismissDurationForMainScreen;
-(void)_dismissForMainScreenWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isDismissingAllViews;
-(void)_toggleModalAlertHidingAssertion:(BOOL)arg1 ;
-(void)_notifyObserversViewWillAppear:(long long)arg1 ;
-(void)_bioAuthenticated:(id)arg1 ;
-(void)_viewDidAppearWithType:(long long)arg1 ;
-(void)_notifyObserversViewWillDisappear:(long long)arg1 ;
-(void)_viewDidDisappearWithType:(long long)arg1 ;
-(void)uiPluginAttemptMesaUnlock;
-(void)_notifyObserversViewDidAppear:(long long)arg1 ;
-(void)_notifyObserversViewDidDisappear:(long long)arg1 ;
-(void)_updateSceneClientSettings;
-(void)_createAssistantWindowIfNecessary;
-(void)_viewWillAppearOnMainScreen:(BOOL)arg1 ;
-(void)_viewController:(id)arg1 willAnimateAppearanceWithContext:(id)arg2 ;
-(void)_viewController:(id)arg1 setShowsStatusBar:(BOOL)arg2 ;
-(id)_fakeStatusBarForOrientation:(long long)arg1 ;
-(void)_viewDidAppearOnMainScreen:(BOOL)arg1 ;
-(void)_viewController:(id)arg1 animateAppearanceWithContext:(id)arg2 ;
-(void)_viewWillDisappearOnMainScreen:(BOOL)arg1 ;
-(void)_viewController:(id)arg1 willAnimateDisappearanceWithContext:(id)arg2 ;
-(void)_viewDidDisappearOnMainScreen:(BOOL)arg1 ;
-(void)_viewController:(id)arg1 animateDisappearanceWithContext:(id)arg2 ;
-(void)_presentForMainScreenAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleSiriPreheatCommand;
-(void)dismissAssistantView:(long long)arg1 forAlertActivation:(id)arg2 ;
-(id)mainScreenView;
-(id)transferOwnershipOfAuthenticationAssertion;
-(void)_dismissUIPlugin:(id)arg1 animated:(BOOL)arg2 ;
-(void)uiPlugin:(id)arg1 forceUpdateToInterfaceOrientation:(long long)arg2 animated:(BOOL)arg3 ;
-(BOOL)unlockedDevice;
-(id)init;
-(void)dealloc;
-(id)window;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(long long)idleTimerMode;
-(BOOL)supportedAndEnabled;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)handleSiriButtonDownEventFromSource:(int)arg1 activationEvent:(int)arg2 ;
-(void)handleSiriButtonUpEventFromSource:(int)arg1 ;
-(void)dismissAssistantViewIfNecessary:(long long)arg1 ;
-(BOOL)activateIgnoringTouches;
-(long long)participantState;
-(BOOL)uiPluginWantsActivation:(id)arg1 forEvent:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)uiPlugin:(id)arg1 isNowRunning:(BOOL)arg2 ;
-(BOOL)uiPlugin:(id)arg1 openURL:(id)arg2 ;
-(void)uiPluginUserEventOccurred:(id)arg1 ;
-(BOOL)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3 allowDismissal:(BOOL)arg4 ;
-(BOOL)uiPluginAttemptDeviceUnlock:(id)arg1 withPassword:(id)arg2 lockViewOwner:(id)arg3 ;
-(void)uiPlugin:(id)arg1 setExpectsFaceContact:(BOOL)arg2 ;
@end

