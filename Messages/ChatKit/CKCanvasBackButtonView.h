/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:28 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UILabel, UIView;

@interface CKCanvasBackButtonView : UIControl {

	BOOL _shouldShowTitlePaddingView;
	UIImageView* _backButtonView;
	UILabel* _titleLabel;
	UIView* _titlePaddingView;

}

@property (nonatomic,retain) UIImageView * backButtonView;                 //@synthesize backButtonView=_backButtonView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * titlePaddingView;                    //@synthesize titlePaddingView=_titlePaddingView - In the implementation block
@property (assign,nonatomic) BOOL shouldShowTitlePaddingView;              //@synthesize shouldShowTitlePaddingView=_shouldShowTitlePaddingView - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(void)sizeToFit;
-(UIImageView *)backButtonView;
-(void)setBackButtonTitle:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 showPaddingTitleView:(BOOL)arg2 ;
-(void)setBackButtonView:(UIImageView *)arg1 ;
-(void)setShouldShowTitlePaddingView:(BOOL)arg1 ;
-(void)_setVisuallyHighlighted:(BOOL)arg1 ;
-(UIView *)titlePaddingView;
-(void)setTitlePaddingView:(UIView *)arg1 ;
-(BOOL)shouldShowTitlePaddingView;
-(CGSize)_titlePaddingViewSizeForTitle;
@end

