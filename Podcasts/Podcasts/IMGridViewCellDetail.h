/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/IMGridViewCell.h>

@class UIImageView, UILabel;

@interface IMGridViewCellDetail : IMGridViewCell {

	UIImageView* _currentlyPlayingIcon;
	UILabel* _detailText;

}

@property (nonatomic,retain) UILabel * detailText;                              //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,readonly) UIImageView * currentlyPlayingIcon;              //@synthesize currentlyPlayingIcon=_currentlyPlayingIcon - In the implementation block
@property (assign,nonatomic) BOOL isCurrentlyPlaying; 
-(void)setEnlargedSelectedState:(BOOL)arg1 ;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(id)nowPlayingListItemIcon;
-(id)nowPlayingListItemIconSelected;
-(UIImageView *)currentlyPlayingIcon;
-(CGRect)detailRectForBounds:(CGRect)arg1 ;
-(void)setIsCurrentlyPlaying:(BOOL)arg1 ;
-(BOOL)isCurrentlyPlaying;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)prepareForReuse;
-(UILabel *)detailText;
-(void)setDetailText:(UILabel *)arg1 ;
@end

