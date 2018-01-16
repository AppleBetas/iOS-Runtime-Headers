/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:48:11 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UIApplication.h>
#import <Bridge/PBBridgeConnectionDelegate.h>
#import <Bridge/PSSplitViewControllerNavigationDelegate.h>
#import <Bridge/SKUIApplicationDelegate.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <Bridge/COSGetStartedViewControllerDelegate.h>
#import <Bridge/COSRadarReporterDelegate.h>
#import <Bridge/NRDevicePropertyObserver.h>
#import <UIKit/UIApplicationDelegate.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_source;
@class UIWindow, COSPreferencesRootController, PSSplitViewController, NSTimer, UIAlertController, UIViewController, COSGetStartedViewController, UINavigationController, COSUnpairingViewController, SKUIApplicationController, NSObject, NSMutableDictionary, BKSApplicationStateMonitor, COSSetupController, PBBridgeCompanionController, NRDevice, NPSDomainAccessor, NSString;

@interface COSPreferencesAppController : UIApplication <PBBridgeConnectionDelegate, PSSplitViewControllerNavigationDelegate, SKUIApplicationDelegate, UISplitViewControllerDelegate, COSGetStartedViewControllerDelegate, COSRadarReporterDelegate, NRDevicePropertyObserver, UIApplicationDelegate, MCProfileConnectionObserver> {

	BOOL _isLocked;
	BOOL _loadingExternalURL;
	long long _networkStartCount;
	double _timeoutLimit;
	BOOL _settingsWasResigned;
	unsigned _rootDomainConnect;
	unsigned _pmNotifier;
	IONotificationPortRef _systemPowerPortRef;
	CFRunLoopSourceRef _pmSource;
	BOOL _syncTrapEnabled;
	BOOL _syncTrapCompleted;
	BOOL _isShowingRadarReporter;
	BOOL _launchedByNanoRegistry;
	BOOL _firstLaunch;
	BOOL _backgrounded;
	BOOL _didRegisterNRObserver;
	BOOL _isActivated;
	BOOL _isResetting;
	BOOL _isUpdatingGizmoInSetupFlow;
	UIWindow* _window;
	COSPreferencesRootController* _settingsController;
	PSSplitViewController* _settingsSplitViewController;
	unsigned long long _backgroundTaskID;
	NSTimer* _taskCompletionTimeout;
	UIAlertController* _transportReachabilityAlert;
	UIViewController* _selectedController;
	COSGetStartedViewController* _getStartedViewController;
	UINavigationController* _radarReporterNav;
	/*^block*/id _setupFlowPresentationCompletion;
	COSUnpairingViewController* _unpairingVC;
	SKUIApplicationController* _storeApplicationController;
	NSObject*<OS_dispatch_source> _inactiveDeviceTimerSource;
	NSMutableDictionary* _discoveryAssetPullRequests;
	BKSApplicationStateMonitor* _appStateMonitor;
	COSSetupController* _setupController;
	PBBridgeCompanionController* _bridgeController;
	NRDevice* _activeWatch;
	NPSDomainAccessor* _activeWatchBridgeDomainAccessor;

}

@property (assign,nonatomic) BOOL isLocked;                                                        //@synthesize isLocked=_isLocked - In the implementation block
@property (assign,nonatomic) BOOL isShowingRadarReporter;                                          //@synthesize isShowingRadarReporter=_isShowingRadarReporter - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTaskID;                                  //@synthesize backgroundTaskID=_backgroundTaskID - In the implementation block
@property (nonatomic,retain) NSTimer * taskCompletionTimeout;                                      //@synthesize taskCompletionTimeout=_taskCompletionTimeout - In the implementation block
@property (nonatomic,retain) UIAlertController * transportReachabilityAlert;                       //@synthesize transportReachabilityAlert=_transportReachabilityAlert - In the implementation block
@property (assign,nonatomic) UIViewController * selectedController;                                //@synthesize selectedController=_selectedController - In the implementation block
@property (nonatomic,retain) COSGetStartedViewController * getStartedViewController;               //@synthesize getStartedViewController=_getStartedViewController - In the implementation block
@property (nonatomic,retain) UINavigationController * radarReporterNav;                            //@synthesize radarReporterNav=_radarReporterNav - In the implementation block
@property (assign,nonatomic) BOOL launchedByNanoRegistry;                                          //@synthesize launchedByNanoRegistry=_launchedByNanoRegistry - In the implementation block
@property (assign,nonatomic) BOOL firstLaunch;                                                     //@synthesize firstLaunch=_firstLaunch - In the implementation block
@property (assign,nonatomic) BOOL backgrounded;                                                    //@synthesize backgrounded=_backgrounded - In the implementation block
@property (nonatomic,copy) id setupFlowPresentationCompletion;                                     //@synthesize setupFlowPresentationCompletion=_setupFlowPresentationCompletion - In the implementation block
@property (nonatomic,retain) COSUnpairingViewController * unpairingVC;                             //@synthesize unpairingVC=_unpairingVC - In the implementation block
@property (assign,nonatomic) BOOL didRegisterNRObserver;                                           //@synthesize didRegisterNRObserver=_didRegisterNRObserver - In the implementation block
@property (assign) unsigned rootDomainConnect;                                                     //@synthesize rootDomainConnect=_rootDomainConnect - In the implementation block
@property (nonatomic,retain) SKUIApplicationController * storeApplicationController;               //@synthesize storeApplicationController=_storeApplicationController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> inactiveDeviceTimerSource;              //@synthesize inactiveDeviceTimerSource=_inactiveDeviceTimerSource - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * discoveryAssetPullRequests;                     //@synthesize discoveryAssetPullRequests=_discoveryAssetPullRequests - In the implementation block
@property (nonatomic,retain) BKSApplicationStateMonitor * appStateMonitor;                         //@synthesize appStateMonitor=_appStateMonitor - In the implementation block
@property (nonatomic,retain) COSSetupController * setupController;                                 //@synthesize setupController=_setupController - In the implementation block
@property (nonatomic,retain) PBBridgeCompanionController * bridgeController;                       //@synthesize bridgeController=_bridgeController - In the implementation block
@property (nonatomic,readonly) NRDevice * activeWatch;                                             //@synthesize activeWatch=_activeWatch - In the implementation block
@property (nonatomic,readonly) NRDevice * displayDevice; 
@property (nonatomic,readonly) NPSDomainAccessor * activeWatchBridgeDomainAccessor;                //@synthesize activeWatchBridgeDomainAccessor=_activeWatchBridgeDomainAccessor - In the implementation block
@property (nonatomic,readonly) BOOL isInSetupFlow; 
@property (assign,nonatomic) BOOL isActivated;                                                     //@synthesize isActivated=_isActivated - In the implementation block
@property (assign,nonatomic) BOOL isResetting;                                                     //@synthesize isResetting=_isResetting - In the implementation block
@property (assign,nonatomic) BOOL isUpdatingGizmoInSetupFlow;                                      //@synthesize isUpdatingGizmoInSetupFlow=_isUpdatingGizmoInSetupFlow - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                                    //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) COSPreferencesRootController * settingsController;                  //@synthesize settingsController=_settingsController - In the implementation block
@property (nonatomic,readonly) PSSplitViewController * settingsSplitViewController;                //@synthesize settingsSplitViewController=_settingsSplitViewController - In the implementation block
@property (assign,nonatomic) BOOL syncTrapEnabled;                                                 //@synthesize syncTrapEnabled=_syncTrapEnabled - In the implementation block
@property (assign,nonatomic) BOOL syncTrapCompleted;                                               //@synthesize syncTrapCompleted=_syncTrapCompleted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasUpdateAvailable;
+(BOOL)_shouldUseAlertControllerForLegacyAlerts;
-(void)resetSetupFlowAnimated:(BOOL)arg1 forEvent:(unsigned long long)arg2 ;
-(void)dismissSetupFlowComplete:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)radarReporterDidFinish;
-(PBBridgeCompanionController *)bridgeController;
-(void)nanoRegistryStatusChanged:(id)arg1 ;
-(void)_registerNRObserver;
-(void)presentUnpairingViewControllerAnimated:(BOOL)arg1 ;
-(void)tappedStartInternal;
-(void)tappedStart;
-(void)tappedSubmitRadar;
-(BOOL)didRegisterNRObserver;
-(void)setDidRegisterNRObserver:(BOOL)arg1 ;
-(void)discoveredAdvertisingWatch:(id)arg1 ;
-(void)presentSetupFlowAnimated:(BOOL)arg1 ;
-(NRDevice *)displayDevice;
-(void)presentNewPairingFlowIfPossible;
-(BOOL)isInSetupFlow;
-(BOOL)_forceComplexTopLevel;
-(void)setSyncTrapEnabled:(BOOL)arg1 ;
-(void)setSyncTrapCompleted:(BOOL)arg1 ;
-(void)setIsUpdatingGizmoInSetupFlow:(BOOL)arg1 ;
-(void)setIsActivated:(BOOL)arg1 ;
-(BOOL)isUpdatingGizmoInSetupFlow;
-(void)enteredCompatibilityState:(id)arg1 ;
-(void)popToTopLevelSettingsAnimated:(BOOL)arg1 ;
-(void)_networkingStartNotification:(id)arg1 ;
-(void)_networkingStopNotification:(id)arg1 ;
-(void)deviceBecameInactive:(id)arg1 ;
-(void)versionOrCapabilitiesChanged:(id)arg1 ;
-(void)updateActiveWatch:(id)arg1 ;
-(id)urlForActivity:(id)arg1 ;
-(void)_refreshShortCuts;
-(void)_prepareAppearances;
-(void)_registerForPowerNotifications;
-(void)reloadAppearance:(id)arg1 ;
-(void)updateForRemoteActivity:(id)arg1 ;
-(void)devicePaired:(id)arg1 ;
-(void)deviceUnpaired:(id)arg1 ;
-(void)pairingFailed:(id)arg1 ;
-(void)initialPairingFailed:(id)arg1 ;
-(void)resetSetupFlowInternalSettings;
-(void)messageSendFailed:(id)arg1 ;
-(void)loadSettingsController;
-(id)_tabBarItems;
-(id)oneTimeJumpURL;
-(void)processURL:(id)arg1 ;
-(void)markGalleryTabAsVisited;
-(void)presentSetupFlowWithMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_showSettingsUI;
-(BOOL)_ingestWatchFaceFileIfNeeded:(id)arg1 ;
-(void)pullPairedWatchAssets;
-(void)_loadStoreApplicationWithLaunchOptions:(id)arg1 ;
-(void)_cancelBackgroundAssertionTimeout;
-(void)_extendBackgroundAssertion;
-(void)clearControllersForSuspendedState;
-(void)generateURL;
-(id)keyValueDictionaryForURL:(id)arg1 ;
-(void)popToRootOfSettingsSelectGeneral:(BOOL)arg1 performWithoutDeferringTransitions:(BOOL)arg2 ;
-(void)startScanningForNearbyDevices;
-(void)markGalleryTabAsVisitedIfOnGalleryTab;
-(void)presentGetConnectedAlertIfNeeded;
-(void)retriggerNRAlertIfNeeded;
-(void)systemDidWake:(id)arg1 ;
-(void)checkIfNRRetriggerConditions;
-(void)presentGetConnectedAlertIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_deregisterForPowerNotifications;
-(SKUIApplicationController *)storeApplicationController;
-(id)_rootControllerForSplitViewController:(id)arg1 ;
-(NPSDomainAccessor *)activeWatchBridgeDomainAccessor;
-(id)bridgeSettingsTabBarItem;
-(void)refreshUpdateBadgeWithTab:(id)arg1 ;
-(void)refreshTabBar;
-(void)dismissSetupFlowAnimated:(BOOL)arg1 refreshTabs:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)syncTrapEnabled;
-(void)resetPairedUI;
-(void)resetSetupFlowAnimated:(BOOL)arg1 forEvent:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setRadarReporterNav:(UINavigationController *)arg1 ;
-(void)setIsShowingRadarReporter:(BOOL)arg1 ;
-(UINavigationController *)radarReporterNav;
-(void)refreshActiveWatchFromNanoRegistry;
-(void)clearBridgeSettingsTabBarItemBadge;
-(PSSplitViewController *)settingsSplitViewController;
-(id)getLaunchedByValueForURL:(id)arg1 ;
-(id)currentSpecifierIDPath;
-(void)_setOffsetForController:(id)arg1 fromObjectPair:(id)arg2 ;
-(void)_performURLHandlingForRootListController:(id)arg1 controller:(id)arg2 dictionary:(id)arg3 items:(id)arg4 controllerNeedsPush:(BOOL)arg5 ;
-(void)popToRootOfSettingsSelectGeneral:(BOOL)arg1 ;
-(void)_clearControllersForSuspendedState:(id)arg1 ;
-(void)updateActiveWatchBridgeDomainAccessor;
-(void)updateActiveWatchCompatibilityState;
-(void)refreshUpdateBadge;
-(id)_getStartedController;
-(void)expireTaskAssertion:(id)arg1 ;
-(void)dismissSetupFlowAnimated:(BOOL)arg1 ;
-(void)tappedStartForMode:(unsigned long long)arg1 ;
-(void)presentUnpairingControllerAnimated:(BOOL)arg1 ;
-(void)_allowInteractionsWithSettingsControllers:(BOOL)arg1 ;
-(NSMutableDictionary *)discoveryAssetPullRequests;
-(void)_testScrollTest:(id)arg1 onScrollView:(id)arg2 withIterations:(int)arg3 andOffset:(int)arg4 ;
-(void)_prepareForDevicePickerTest;
-(void)_startWelcomeTest:(id)arg1 ;
-(void)_startTopLevelScrollTestComplex:(BOOL)arg1 options:(id)arg2 ;
-(void)_starDevicePickerRotationTestWithOptions:(id)arg1 ;
-(void)connectionDidBecomeActive;
-(void)connectionDidBecomeInactive;
-(id)_appSuspendStateDescription;
-(void)disagreeToTerms;
-(id)_splitViewControllerForRootController:(id)arg1 ;
-(void)resetFlowForCameraExpiry;
-(void)pingWatch;
-(void)successfullyBeganUnpairingWatch;
-(void)_debug_forcePullAssets;
-(void)presentApplePayLocallyStoredValueOfflineWarningIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)syncTrapCompleted;
-(BOOL)isShowingRadarReporter;
-(unsigned long long)backgroundTaskID;
-(void)setBackgroundTaskID:(unsigned long long)arg1 ;
-(NSTimer *)taskCompletionTimeout;
-(void)setTaskCompletionTimeout:(NSTimer *)arg1 ;
-(UIAlertController *)transportReachabilityAlert;
-(void)setTransportReachabilityAlert:(UIAlertController *)arg1 ;
-(UIViewController *)selectedController;
-(void)setSelectedController:(UIViewController *)arg1 ;
-(COSGetStartedViewController *)getStartedViewController;
-(void)setGetStartedViewController:(COSGetStartedViewController *)arg1 ;
-(BOOL)launchedByNanoRegistry;
-(void)setLaunchedByNanoRegistry:(BOOL)arg1 ;
-(BOOL)firstLaunch;
-(void)setFirstLaunch:(BOOL)arg1 ;
-(id)setupFlowPresentationCompletion;
-(void)setSetupFlowPresentationCompletion:(id)arg1 ;
-(COSUnpairingViewController *)unpairingVC;
-(void)setUnpairingVC:(COSUnpairingViewController *)arg1 ;
-(void)setStoreApplicationController:(SKUIApplicationController *)arg1 ;
-(NSObject*<OS_dispatch_source>)inactiveDeviceTimerSource;
-(void)setInactiveDeviceTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setDiscoveryAssetPullRequests:(NSMutableDictionary *)arg1 ;
-(void)setBridgeController:(PBBridgeCompanionController *)arg1 ;
-(BOOL)isResetting;
-(void)setIsResetting:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(UIWindow *)window;
-(void)startedTest:(id)arg1 ;
-(void)finishedTest:(id)arg1 ;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2 ;
-(BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3 ;
-(BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 didUpdateUserActivity:(id)arg2 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)applicationWillSuspendForEventsOnly;
-(void)applicationDidResumeForEventsOnly;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isLocked;
-(id)navigationController;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)testPrep:(id)arg1 options:(id)arg2 ;
-(void)setBackgrounded:(BOOL)arg1 ;
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(BOOL)backgrounded;
-(COSSetupController *)setupController;
-(void)sizeCategoryDidChange:(id)arg1 ;
-(void)splitViewControllerDidPopToRootController:(id)arg1 ;
-(void)application:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 JSContext:(id)arg3 ;
-(void)application:(id)arg1 didReselectTabBarItem:(id)arg2 ;
-(void)applicationDidChangeClientContext:(id)arg1 ;
-(BOOL)isActivated;
-(void)remoteDidBecomeAvailable;
-(void)remoteDidFailActivation:(id)arg1 ;
-(void)transportBecameReachable;
-(void)transportBecameUnreachable;
-(void)didHandlePerformanceResults;
-(void)remoteDidFailActivation:(id)arg1 userActionable:(BOOL)arg2 ;
-(NRDevice *)activeWatch;
-(void)setIsLocked:(BOOL)arg1 ;
-(void)setSetupController:(COSSetupController *)arg1 ;
-(void)deviceBecameActive:(id)arg1 ;
-(unsigned)rootDomainConnect;
-(void)setRootDomainConnect:(unsigned)arg1 ;
-(BKSApplicationStateMonitor *)appStateMonitor;
-(void)setAppStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(void)processURL:(id)arg1 animated:(BOOL)arg2 fromSearch:(BOOL)arg3 ;
-(COSPreferencesRootController *)settingsController;
-(void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3 ;
@end

