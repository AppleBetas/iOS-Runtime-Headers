/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherWallpaperPageContentView.h>

@class SBDisplayItem, SBOrientationTransformWrapperView, FBSceneHostManager, UIView, SBFakeStatusBarView, SBRemoteAlertAdapter;

@interface SBAppSwitcherRemoteAlertCellView : SBSwitcherWallpaperPageContentView {

	SBDisplayItem* _displayItem;
	SBOrientationTransformWrapperView* _portraitContentWrapper;
	SBOrientationTransformWrapperView* _rotatingContentWrapper;
	FBSceneHostManager* _contextHostManager;
	UIView* _alertContentViewWrapper;
	SBFakeStatusBarView* _fakeStatusBar;
	UIView* _contentView;
	SBRemoteAlertAdapter* _remoteAlert;
	BOOL _remoteAlertHasCustomWallpaperStyle;
	BOOL _remoteAlertRemoteTunnelingWasActive;
	long long _remoteAlertWallpaperStyle;

}

@property (assign,nonatomic) BOOL remoteAlertHasCustomWallpaperStyle;               //@synthesize remoteAlertHasCustomWallpaperStyle=_remoteAlertHasCustomWallpaperStyle - In the implementation block
@property (assign,nonatomic) long long remoteAlertWallpaperStyle;                   //@synthesize remoteAlertWallpaperStyle=_remoteAlertWallpaperStyle - In the implementation block
@property (assign,nonatomic) BOOL remoteAlertRemoteTunnelingWasActive;              //@synthesize remoteAlertRemoteTunnelingWasActive=_remoteAlertRemoteTunnelingWasActive - In the implementation block
@property (nonatomic,copy,readonly) SBDisplayItem * displayItem;                    //@synthesize displayItem=_displayItem - In the implementation block
-(void)prepareToBecomeVisibleIfNecessary;
-(void)viewPresenting:(id)arg1 withInteraction:(BOOL)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4 ;
-(void)viewDismissing:(id)arg1 withInteraction:(BOOL)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4 ;
-(SBDisplayItem *)displayItem;
-(void)_updateHosting;
-(void)setRemoteAlertHasCustomWallpaperStyle:(BOOL)arg1 ;
-(void)setRemoteAlertWallpaperStyle:(long long)arg1 ;
-(void)setRemoteAlertRemoteTunnelingWasActive:(BOOL)arg1 ;
-(BOOL)remoteAlertHasCustomWallpaperStyle;
-(long long)remoteAlertWallpaperStyle;
-(BOOL)remoteAlertRemoteTunnelingWasActive;
-(id)initWithFrame:(CGRect)arg1 remoteAlert:(id)arg2 displayItem:(id)arg3 ;
-(void)installAlertInViewController:(id)arg1 ;
-(void)hostAlertWithManager:(id)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_updateBackgroundStyle;
-(void)_addStatusBar;
-(void)setAlert:(id)arg1 ;
@end

