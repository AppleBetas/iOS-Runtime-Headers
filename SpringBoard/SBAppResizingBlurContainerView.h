/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SBWallpaperEffectView, UIView, _UIBackdropView;

@interface SBAppResizingBlurContainerView : UIView {

	SBWallpaperEffectView* _wallpaperEffectView;
	UIView* _appSnapshotView;
	_UIBackdropView* _blurView;

}

@property (nonatomic,retain) SBWallpaperEffectView * wallpaperEffectView;              //@synthesize wallpaperEffectView=_wallpaperEffectView - In the implementation block
@property (nonatomic,retain) UIView * appSnapshotView;                                 //@synthesize appSnapshotView=_appSnapshotView - In the implementation block
@property (nonatomic,retain) _UIBackdropView * blurView;                               //@synthesize blurView=_blurView - In the implementation block
-(SBWallpaperEffectView *)wallpaperEffectView;
-(void)setWallpaperEffectView:(SBWallpaperEffectView *)arg1 ;
-(void)setAppSnapshotView:(UIView *)arg1 ;
-(UIView *)appSnapshotView;
-(void)layoutSubviews;
-(_UIBackdropView *)blurView;
-(void)setBlurView:(_UIBackdropView *)arg1 ;
@end

