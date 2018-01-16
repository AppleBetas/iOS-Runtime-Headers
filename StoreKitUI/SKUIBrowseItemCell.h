/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:49 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView, UIImageView, UIImage, NSString;

@interface SKUIBrowseItemCell : UICollectionViewCell {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _borderView;
	UIView* _topBorderView;
	UIImageView* _decorationImageView;
	UIImage* _decorationImage;
	BOOL _showTopBorder;
	BOOL _hasBlueBackgroundWhenSelected;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) UIImage * decorationImage;                       //@synthesize decorationImage=_decorationImage - In the implementation block
@property (assign,nonatomic) BOOL showTopBorder;                              //@synthesize showTopBorder=_showTopBorder - In the implementation block
@property (assign,nonatomic) BOOL hasBlueBackgroundWhenSelected;              //@synthesize hasBlueBackgroundWhenSelected=_hasBlueBackgroundWhenSelected - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)_reloadHighlightState;
-(void)setDecorationImage:(UIImage *)arg1 ;
-(void)setShowTopBorder:(BOOL)arg1 ;
-(UIImage *)decorationImage;
-(BOOL)showTopBorder;
-(BOOL)hasBlueBackgroundWhenSelected;
-(void)setHasBlueBackgroundWhenSelected:(BOOL)arg1 ;
@end

