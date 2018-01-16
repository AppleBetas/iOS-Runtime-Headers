/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUISettings.h>

@class SBBounceSettings, SBLockScreenPasscodeSettings, SBLockScreenMesaSettings, SBHorizontalScrollFailureRecognizerSettings, SBDashBoardScrollModifierSettings, SBAnimationSettings, NSString;

@interface SBLockScreenSettings : SBUISettings {

	BOOL _showNowPlaying;
	BOOL _showContinuityIcon;
	BOOL _showUserPicture;
	BOOL _showLogoutButton;
	BOOL _showThermalTrap;
	BOOL _showBlockedUI;
	BOOL _showResetRestore;
	BOOL _showEmergencyDialer;
	BOOL _showRegionsDebugView;
	BOOL _alwaysPutPluginsBelowScrollView;
	BOOL _killsInsecureDrawingApps;
	int _continuityIconType;
	SBBounceSettings* _verticalBounceSettings;
	SBBounceSettings* _horizontalBounceSettings;
	SBLockScreenPasscodeSettings* _passcodeSettings;
	SBLockScreenMesaSettings* _mesaSettings;
	SBHorizontalScrollFailureRecognizerSettings* _horizontalScrollFailureRecognizerSettings;
	SBDashBoardScrollModifierSettings* _dashBoardScrollModifierSettings;
	SBAnimationSettings* _unlockToPhoneWallpaperOutSettings;
	SBAnimationSettings* _unlockToPhoneWallpaperInSettings;
	SBAnimationSettings* _unlockWallpaperOutSettings;
	SBAnimationSettings* _unlockWallpaperInSettings;
	double _mainToCameraViewSlideCompletionPercentage;
	double _mainToTodayViewSlideCompletionPercentage;
	double _unlockSlideForIdleTimerDisabledPercentage;
	double _unlockSlideForIdleTimerDisabledPercentageIPad;
	double _notificationScrollForIdleTimerDisabledOffset;
	double _notificationScrollForIdleTimerDisabledOffsetIPad;
	double _appGrabberSlideUpVelocityThreshold;
	double _unlockSwipeWallpaperAlpha;
	NSString* _lockScreenCode;

}

@property (assign) BOOL showNowPlaying;                                                                                  //@synthesize showNowPlaying=_showNowPlaying - In the implementation block
@property (assign) BOOL showContinuityIcon;                                                                              //@synthesize showContinuityIcon=_showContinuityIcon - In the implementation block
@property (assign) int continuityIconType;                                                                               //@synthesize continuityIconType=_continuityIconType - In the implementation block
@property (assign) BOOL showUserPicture;                                                                                 //@synthesize showUserPicture=_showUserPicture - In the implementation block
@property (assign) BOOL showLogoutButton;                                                                                //@synthesize showLogoutButton=_showLogoutButton - In the implementation block
@property (assign) BOOL showThermalTrap;                                                                                 //@synthesize showThermalTrap=_showThermalTrap - In the implementation block
@property (assign) BOOL showBlockedUI;                                                                                   //@synthesize showBlockedUI=_showBlockedUI - In the implementation block
@property (assign) BOOL showResetRestore;                                                                                //@synthesize showResetRestore=_showResetRestore - In the implementation block
@property (assign) BOOL showEmergencyDialer;                                                                             //@synthesize showEmergencyDialer=_showEmergencyDialer - In the implementation block
@property (assign) BOOL showRegionsDebugView;                                                                            //@synthesize showRegionsDebugView=_showRegionsDebugView - In the implementation block
@property (retain) SBBounceSettings * verticalBounceSettings;                                                            //@synthesize verticalBounceSettings=_verticalBounceSettings - In the implementation block
@property (retain) SBBounceSettings * horizontalBounceSettings;                                                          //@synthesize horizontalBounceSettings=_horizontalBounceSettings - In the implementation block
@property (retain) SBLockScreenPasscodeSettings * passcodeSettings;                                                      //@synthesize passcodeSettings=_passcodeSettings - In the implementation block
@property (retain) SBLockScreenMesaSettings * mesaSettings;                                                              //@synthesize mesaSettings=_mesaSettings - In the implementation block
@property (retain) SBHorizontalScrollFailureRecognizerSettings * horizontalScrollFailureRecognizerSettings;              //@synthesize horizontalScrollFailureRecognizerSettings=_horizontalScrollFailureRecognizerSettings - In the implementation block
@property (retain) SBDashBoardScrollModifierSettings * dashBoardScrollModifierSettings;                                  //@synthesize dashBoardScrollModifierSettings=_dashBoardScrollModifierSettings - In the implementation block
@property (retain) SBAnimationSettings * unlockToPhoneWallpaperOutSettings;                                              //@synthesize unlockToPhoneWallpaperOutSettings=_unlockToPhoneWallpaperOutSettings - In the implementation block
@property (retain) SBAnimationSettings * unlockToPhoneWallpaperInSettings;                                               //@synthesize unlockToPhoneWallpaperInSettings=_unlockToPhoneWallpaperInSettings - In the implementation block
@property (retain) SBAnimationSettings * unlockWallpaperOutSettings;                                                     //@synthesize unlockWallpaperOutSettings=_unlockWallpaperOutSettings - In the implementation block
@property (retain) SBAnimationSettings * unlockWallpaperInSettings;                                                      //@synthesize unlockWallpaperInSettings=_unlockWallpaperInSettings - In the implementation block
@property (assign) double mainToCameraViewSlideCompletionPercentage;                                                     //@synthesize mainToCameraViewSlideCompletionPercentage=_mainToCameraViewSlideCompletionPercentage - In the implementation block
@property (assign) double mainToTodayViewSlideCompletionPercentage;                                                      //@synthesize mainToTodayViewSlideCompletionPercentage=_mainToTodayViewSlideCompletionPercentage - In the implementation block
@property (assign) double unlockSlideForIdleTimerDisabledPercentage;                                                     //@synthesize unlockSlideForIdleTimerDisabledPercentage=_unlockSlideForIdleTimerDisabledPercentage - In the implementation block
@property (assign) double unlockSlideForIdleTimerDisabledPercentageIPad;                                                 //@synthesize unlockSlideForIdleTimerDisabledPercentageIPad=_unlockSlideForIdleTimerDisabledPercentageIPad - In the implementation block
@property (assign) double notificationScrollForIdleTimerDisabledOffset;                                                  //@synthesize notificationScrollForIdleTimerDisabledOffset=_notificationScrollForIdleTimerDisabledOffset - In the implementation block
@property (assign) double notificationScrollForIdleTimerDisabledOffsetIPad;                                              //@synthesize notificationScrollForIdleTimerDisabledOffsetIPad=_notificationScrollForIdleTimerDisabledOffsetIPad - In the implementation block
@property (assign) double appGrabberSlideUpVelocityThreshold;                                                            //@synthesize appGrabberSlideUpVelocityThreshold=_appGrabberSlideUpVelocityThreshold - In the implementation block
@property (assign) double unlockSwipeWallpaperAlpha;                                                                     //@synthesize unlockSwipeWallpaperAlpha=_unlockSwipeWallpaperAlpha - In the implementation block
@property (assign) BOOL alwaysPutPluginsBelowScrollView;                                                                 //@synthesize alwaysPutPluginsBelowScrollView=_alwaysPutPluginsBelowScrollView - In the implementation block
@property (assign) BOOL killsInsecureDrawingApps;                                                                        //@synthesize killsInsecureDrawingApps=_killsInsecureDrawingApps - In the implementation block
@property (nonatomic,copy) NSString * lockScreenCode;                                                                    //@synthesize lockScreenCode=_lockScreenCode - In the implementation block
+(void)_restartSpringBoard;
+(id)settingsControllerModule;
-(SBHorizontalScrollFailureRecognizerSettings *)horizontalScrollFailureRecognizerSettings;
-(SBAnimationSettings *)unlockToPhoneWallpaperOutSettings;
-(SBAnimationSettings *)unlockToPhoneWallpaperInSettings;
-(BOOL)showContinuityIcon;
-(int)continuityIconType;
-(double)appGrabberSlideUpVelocityThreshold;
-(void)setLockScreenCode:(NSString *)arg1 ;
-(BOOL)showNowPlaying;
-(void)setShowNowPlaying:(BOOL)arg1 ;
-(void)setShowContinuityIcon:(BOOL)arg1 ;
-(void)setContinuityIconType:(int)arg1 ;
-(BOOL)showUserPicture;
-(void)setShowUserPicture:(BOOL)arg1 ;
-(BOOL)showLogoutButton;
-(void)setShowLogoutButton:(BOOL)arg1 ;
-(BOOL)showThermalTrap;
-(void)setShowThermalTrap:(BOOL)arg1 ;
-(BOOL)showBlockedUI;
-(void)setShowBlockedUI:(BOOL)arg1 ;
-(BOOL)showResetRestore;
-(void)setShowResetRestore:(BOOL)arg1 ;
-(BOOL)showEmergencyDialer;
-(void)setShowEmergencyDialer:(BOOL)arg1 ;
-(BOOL)showRegionsDebugView;
-(void)setShowRegionsDebugView:(BOOL)arg1 ;
-(SBBounceSettings *)verticalBounceSettings;
-(void)setVerticalBounceSettings:(SBBounceSettings *)arg1 ;
-(SBBounceSettings *)horizontalBounceSettings;
-(void)setHorizontalBounceSettings:(SBBounceSettings *)arg1 ;
-(SBLockScreenPasscodeSettings *)passcodeSettings;
-(void)setPasscodeSettings:(SBLockScreenPasscodeSettings *)arg1 ;
-(SBLockScreenMesaSettings *)mesaSettings;
-(void)setMesaSettings:(SBLockScreenMesaSettings *)arg1 ;
-(void)setHorizontalScrollFailureRecognizerSettings:(SBHorizontalScrollFailureRecognizerSettings *)arg1 ;
-(SBDashBoardScrollModifierSettings *)dashBoardScrollModifierSettings;
-(void)setDashBoardScrollModifierSettings:(SBDashBoardScrollModifierSettings *)arg1 ;
-(void)setUnlockToPhoneWallpaperOutSettings:(SBAnimationSettings *)arg1 ;
-(void)setUnlockToPhoneWallpaperInSettings:(SBAnimationSettings *)arg1 ;
-(SBAnimationSettings *)unlockWallpaperOutSettings;
-(void)setUnlockWallpaperOutSettings:(SBAnimationSettings *)arg1 ;
-(SBAnimationSettings *)unlockWallpaperInSettings;
-(void)setUnlockWallpaperInSettings:(SBAnimationSettings *)arg1 ;
-(double)mainToCameraViewSlideCompletionPercentage;
-(void)setMainToCameraViewSlideCompletionPercentage:(double)arg1 ;
-(double)mainToTodayViewSlideCompletionPercentage;
-(void)setMainToTodayViewSlideCompletionPercentage:(double)arg1 ;
-(double)unlockSlideForIdleTimerDisabledPercentage;
-(void)setUnlockSlideForIdleTimerDisabledPercentage:(double)arg1 ;
-(double)unlockSlideForIdleTimerDisabledPercentageIPad;
-(void)setUnlockSlideForIdleTimerDisabledPercentageIPad:(double)arg1 ;
-(double)notificationScrollForIdleTimerDisabledOffset;
-(void)setNotificationScrollForIdleTimerDisabledOffset:(double)arg1 ;
-(double)notificationScrollForIdleTimerDisabledOffsetIPad;
-(void)setNotificationScrollForIdleTimerDisabledOffsetIPad:(double)arg1 ;
-(void)setAppGrabberSlideUpVelocityThreshold:(double)arg1 ;
-(double)unlockSwipeWallpaperAlpha;
-(void)setUnlockSwipeWallpaperAlpha:(double)arg1 ;
-(BOOL)alwaysPutPluginsBelowScrollView;
-(void)setAlwaysPutPluginsBelowScrollView:(BOOL)arg1 ;
-(BOOL)killsInsecureDrawingApps;
-(void)setKillsInsecureDrawingApps:(BOOL)arg1 ;
-(NSString *)lockScreenCode;
-(void)setDefaultValues;
@end

