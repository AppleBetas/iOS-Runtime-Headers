/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:55 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@protocol SKUIScrollingTabBarPaletteDelegate;
@class UIView, SKUIScrollingTabBarBackgroundView;

@interface SKUIScrollingTabBarPalette : UIView {

	BOOL _attached;
	BOOL _tabBarBackgroundExtendsBehindPalette;
	UIView* _contentView;
	double _paletteHeight;
	id<SKUIScrollingTabBarPaletteDelegate> _delegate;
	SKUIScrollingTabBarBackgroundView* _backgroundView;

}

@property (assign,setter=_setDelegate:,getter=_delegate,nonatomic,__weak) id<SKUIScrollingTabBarPaletteDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setAttached:,getter=isAttached,nonatomic) BOOL attached;                                                      //@synthesize attached=_attached - In the implementation block
@property (getter=_backgroundView,nonatomic,readonly) SKUIScrollingTabBarBackgroundView * backgroundView;                               //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                                                    //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) double paletteHeight;                                                                                    //@synthesize paletteHeight=_paletteHeight - In the implementation block
@property (assign,nonatomic) BOOL tabBarBackgroundExtendsBehindPalette;                                                                 //@synthesize tabBarBackgroundExtendsBehindPalette=_tabBarBackgroundExtendsBehindPalette - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_delegate;
-(id)_backgroundView;
-(void)_setDelegate:(id)arg1 ;
-(BOOL)isAttached;
-(void)setTabBarBackgroundExtendsBehindPalette:(BOOL)arg1 ;
-(void)_setAttached:(BOOL)arg1 ;
-(double)paletteHeight;
-(BOOL)tabBarBackgroundExtendsBehindPalette;
@end

