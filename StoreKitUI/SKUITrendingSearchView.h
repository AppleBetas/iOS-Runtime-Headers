/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:53 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, NSArray, UIStackView;

@interface SKUITrendingSearchView : UIView {

	UIView* _trendingTitleView;
	NSArray* _trendingSearchViews;
	UIStackView* _trendingSearchesStackView;
	UIStackView* _titleStackView;
	NSArray* _verticalMarginRelatedConstraints;

}

@property (assign,nonatomic,__weak) UIStackView * trendingSearchesStackView;              //@synthesize trendingSearchesStackView=_trendingSearchesStackView - In the implementation block
@property (assign,nonatomic,__weak) UIStackView * titleStackView;                         //@synthesize titleStackView=_titleStackView - In the implementation block
@property (nonatomic,retain) NSArray * verticalMarginRelatedConstraints;                  //@synthesize verticalMarginRelatedConstraints=_verticalMarginRelatedConstraints - In the implementation block
@property (nonatomic,copy) UIView * trendingTitleView;                                    //@synthesize trendingTitleView=_trendingTitleView - In the implementation block
@property (nonatomic,copy) NSArray * trendingSearchViews;                                 //@synthesize trendingSearchViews=_trendingSearchViews - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutMarginsDidChange;
-(void)updateConstraints;
-(void)commonInitWithFrame:(CGRect)arg1 ;
-(UIStackView *)titleStackView;
-(UIStackView *)trendingSearchesStackView;
-(NSArray *)verticalMarginRelatedConstraints;
-(void)setTrendingTitleView:(UIView *)arg1 ;
-(void)setTrendingSearchViews:(NSArray *)arg1 ;
-(UIView *)trendingTitleView;
-(NSArray *)trendingSearchViews;
-(void)setTrendingSearchesStackView:(UIStackView *)arg1 ;
-(void)setTitleStackView:(UIStackView *)arg1 ;
-(void)setVerticalMarginRelatedConstraints:(NSArray *)arg1 ;
@end

