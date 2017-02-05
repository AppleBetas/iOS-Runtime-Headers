/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 2:44:28 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSSetupPageViewController.h>

@class UIButton, COSWatchView, UIScrollView, UILabel;

@interface COSOptinViewController : COSSetupPageViewController {

	BOOL _fyiMode;
	UIButton* _suggestedChoiceButton;
	UIButton* _alternateChoiceButton;
	UIButton* _moreOptionsButton;
	UIButton* _aboutButton;
	COSWatchView* _watchView;
	UIScrollView* _scroller;
	UILabel* _detailTitleLabel;
	UILabel* _detailLabel;

}

@property (nonatomic,retain) UIScrollView * scroller;                         //@synthesize scroller=_scroller - In the implementation block
@property (nonatomic,retain) UILabel * detailTitleLabel;                      //@synthesize detailTitleLabel=_detailTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                           //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) UIButton * suggestedChoiceButton;              //@synthesize suggestedChoiceButton=_suggestedChoiceButton - In the implementation block
@property (nonatomic,readonly) UIButton * alternateChoiceButton;              //@synthesize alternateChoiceButton=_alternateChoiceButton - In the implementation block
@property (nonatomic,readonly) UIButton * moreOptionsButton;                  //@synthesize moreOptionsButton=_moreOptionsButton - In the implementation block
@property (nonatomic,readonly) UIButton * aboutButton;                        //@synthesize aboutButton=_aboutButton - In the implementation block
@property (nonatomic,readonly) COSWatchView * watchView;                      //@synthesize watchView=_watchView - In the implementation block
@property (assign,nonatomic) BOOL fyiMode;                                    //@synthesize fyiMode=_fyiMode - In the implementation block
@property (nonatomic,readonly) double sidePadding; 
-(id)holdActivityIdentifier;
-(void)didEstablishHold;
-(void)finishedActivating;
-(UIButton *)suggestedChoiceButton;
-(void)showOptinConfirmationAlert:(id)arg1 optinChoice:(BOOL)arg2 ;
-(void)applyConfirmedOptin:(BOOL)arg1 ;
-(id)detailString;
-(void)selectedOptinChoice:(id)arg1 ;
-(id)suggestedButtonString;
-(id)alternateButtonString;
-(id)aboutButtonString;
-(id)detailTitleString;
-(void)selectedAboutDetail:(id)arg1 ;
-(BOOL)legacyButtonStyles;
-(id)moreOptionsButtonString;
-(void)selectedMoreOptions:(id)arg1 ;
-(void)setFyiMode:(BOOL)arg1 ;
-(BOOL)fyiMode;
-(double)sidePadding;
-(UIButton *)alternateChoiceButton;
-(UIButton *)moreOptionsButton;
-(UIButton *)aboutButton;
-(id)init;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)updateLayout;
-(UIScrollView *)scroller;
-(id)titleString;
-(id)imageResource;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(BOOL)holdBeforeDisplaying;
-(COSWatchView *)watchView;
-(UILabel *)detailTitleLabel;
-(void)setDetailTitleLabel:(UILabel *)arg1 ;
-(void)setScroller:(UIScrollView *)arg1 ;
@end

