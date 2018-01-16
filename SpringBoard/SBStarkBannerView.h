/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBStarkBannerItemObserver.h>
#import <libobjc.A.dylib/SBDateLabelDelegate.h>
#import <SpringBoard/SBUIBannerView.h>

@protocol SBStarkSessionConfiguring, NCNotificationDateLabel;
@class SBUIBannerContext, SBStarkBannerItem, UIImageView, UILabel, SBUIStarkBannerViewButton, NSString;

@interface SBStarkBannerView : UIView <SBStarkBannerItemObserver, SBDateLabelDelegate, SBUIBannerView> {

	id<SBStarkSessionConfiguring> _configuration;
	SBUIBannerContext* _context;
	SBStarkBannerItem* _bannerItem;
	UIImageView* _categoryImageView;
	UILabel* _titleLabel;
	double _titleAscender;
	UILabel* _subTitleLabel;
	double _subTitleAscender;
	SBUIStarkBannerViewButton* _okButton;
	SBUIStarkBannerViewButton* _actionButton;
	UIEdgeInsets _contentInsets;
	UILabel*<NCNotificationDateLabel> _relevanceDateLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bannerContext;
-(BOOL)shouldBorrowScreen;
-(void)starkBannerItemDidReloadDisplayProperties:(id)arg1 ;
-(id)_defaultRelevanceDateFont;
-(void)_setRelevanceDate:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 ;
-(BOOL)_shouldShowOKButton;
-(void)_layoutForButton:(id)arg1 contentFrame:(CGRect)arg2 ;
-(UIEdgeInsets)_categoryImageInsets;
-(UIEdgeInsets)_contentInsetsForActionType:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(id)_titleFont;
-(void)dateLabelDidChange:(id)arg1 ;
-(BOOL)_hasSubtitle;
@end

