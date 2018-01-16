/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class MTEpisode, MTEpisodeHeaderView, UIView, UITextView;

@interface MTEpisodeDescriptionViewController : UIViewController {

	MTEpisode* _episode;
	MTEpisodeHeaderView* _headerView;
	UIView* _separator;
	UITextView* _descriptionView;

}

@property (nonatomic,retain) MTEpisodeHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * separator;                            //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UITextView * descriptionView;                  //@synthesize descriptionView=_descriptionView - In the implementation block
@property (nonatomic,retain) MTEpisode * episode;                           //@synthesize episode=_episode - In the implementation block
-(MTEpisode *)episode;
-(void)setEpisode:(MTEpisode *)arg1 ;
-(void)updateWithPlayerItem:(id)arg1 ;
-(void)_updateDescriptionTextForEpisode:(id)arg1 ;
-(void)_updateDescriptionTextForPlayerItem:(id)arg1 ;
-(id)initWithEpisode:(id)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(MTEpisodeHeaderView *)headerView;
-(void)setHeaderView:(MTEpisodeHeaderView *)arg1 ;
-(void)setSeparator:(UIView *)arg1 ;
-(UIView *)separator;
-(id)initWithPlayerItem:(id)arg1 ;
-(void)dismissViewController;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)updateFonts;
-(UITextView *)descriptionView;
-(void)setDescriptionView:(UITextView *)arg1 ;
@end

