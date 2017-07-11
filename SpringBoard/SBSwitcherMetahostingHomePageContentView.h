/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherWallpaperPageContentView.h>
#import <SpringBoard/FBSceneHostManagerObserver.h>

@class SBOrientationTransformWrapperView, UIView, SBWindowSelfHostWrapper, SBAppSwitcherSettings, NSMutableSet, NSString;

@interface SBSwitcherMetahostingHomePageContentView : SBSwitcherWallpaperPageContentView <FBSceneHostManagerObserver> {

	SBOrientationTransformWrapperView* _portraitContentWrapper;
	SBOrientationTransformWrapperView* _rotatingContentWrapper;
	UIView* _darkeningView;
	SBWindowSelfHostWrapper* _iconsWindowHostWrapper;
	UIView* _externalHomeScreenSnapshotView;
	SBWindowSelfHostWrapper* _statusBarWindowHostWrapper;
	UIView* _fakeStatusBar;
	SBAppSwitcherSettings* _settings;
	BOOL _presenting;
	BOOL _interactive;
	BOOL _usesSnapshots;
	UIView* _snapshotView;
	NSMutableSet* _snapshotPreventionReasons;
	unsigned long long _snapshotGenerationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_usesSnapshots;
-(void)viewPresenting:(id)arg1 withInteraction:(BOOL)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4 ;
-(void)viewDismissing:(id)arg1 withInteraction:(BOOL)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4 ;
-(void)updateTransitionProgress:(double)arg1 ;
-(void)interactionDidEnd:(BOOL)arg1 ;
-(void)transitionDidEnd:(BOOL)arg1 forPresentation:(BOOL)arg2 ;
-(void)_createFakeStatusBar;
-(void)_handleWillDismissSpotlight:(id)arg1 ;
-(void)_handleDidDismissSpotlight:(id)arg1 ;
-(void)_handleWillBeginSignificantAnimation:(id)arg1 ;
-(void)_handleDidEndSignificantAnimation:(id)arg1 ;
-(long long)_targetWallpaperStyle;
-(double)_darkeningFactor;
-(void)_transitionWallpaperWithProgress:(double)arg1 presenting:(BOOL)arg2 ;
-(void)_addDisableSnapshotReason:(id)arg1 ;
-(void)_removeDisableSnapshotReason:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setOrientation:(long long)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)sceneHostManager:(id)arg1 willActivateRequester:(id)arg2 ;
@end

