/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:36 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBSwitcherAppSuggestionBottomBannerViewDelegate.h>
#import <SpringBoard/SBAppSwitcherPageViewDelegate.h>

@protocol OS_dispatch_queue, SBSwitcherAppSuggestionViewControllerDelegate;
@class SBBestAppSuggestion, SBSwitcherAppSuggestionBottomBannerView, SBDeckSwitcherPageView, UITapGestureRecognizer, UIPanGestureRecognizer, NSObject, NSString;

@interface SBSwitcherAppSuggestionViewController : UIViewController <SBSwitcherAppSuggestionBottomBannerViewDelegate, SBAppSwitcherPageViewDelegate> {

	SBBestAppSuggestion* _bestAppSuggestion;
	BOOL _showSuggestions;
	SBSwitcherAppSuggestionBottomBannerView* _currentBottomBanner;
	SBDeckSwitcherPageView* _slideUpPageView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	BOOL _inInteractivePresentationOrAnimation;
	BOOL _presentingOrDismissingBanner;
	double _progressPresented;
	BOOL _fullyPresented;
	NSObject*<OS_dispatch_queue> _setSuggestionQueue;
	BOOL _suggestionQueueSuspended;
	id<SBSwitcherAppSuggestionViewControllerDelegate> _delegate;

}

@property (assign,setter=_setSuggestionQueueSuspended:,getter=_isSuggestionQueueSuspended,nonatomic) BOOL suggestionQueueSuspended;              //@synthesize suggestionQueueSuspended=_suggestionQueueSuspended - In the implementation block
@property (nonatomic,retain) SBBestAppSuggestion * bestAppSuggestion;                                                                            //@synthesize bestAppSuggestion=_bestAppSuggestion - In the implementation block
@property (assign,nonatomic) BOOL showSuggestions;                                                                                               //@synthesize showSuggestions=_showSuggestions - In the implementation block
@property (assign,nonatomic,__weak) id<SBSwitcherAppSuggestionViewControllerDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)resizingPolicyForPageView:(id)arg1 ;
-(CGAffineTransform)contentViewTransformForPageView:(id)arg1 ;
-(void)touchesBeganInBottomBannerView:(id)arg1 ;
-(void)setBestAppSuggestion:(SBBestAppSuggestion *)arg1 ;
-(id)dismissingSuggestionPageView;
-(void)setShowSuggestions:(BOOL)arg1 ;
-(void)_setSuggestionQueueSuspended:(BOOL)arg1 ;
-(void)_removeContainerForSlideUp;
-(void)_updateBottomBanner;
-(void)_handleBannerTap:(id)arg1 ;
-(void)_handleBannerPan:(id)arg1 ;
-(CGRect)_idleOnscreenRectForBottomBanner;
-(CGRect)_presentedRectForBottomBanner;
-(CGRect)_offscreenRectForContentView;
-(CGRect)_presentedRectForContentView;
-(CGRect)_offscreenRectForBottomBanner;
-(unsigned long long)_bottomBannerStyle;
-(void)_insertAndAnimateInBottomBannerForSuggestion:(id)arg1 ;
-(void)_animateOutAndRemoveCurrentBottomBanner;
-(void)_beginInteractivePresentationOrAnimation;
-(void)_insertContainerForSlideUp;
-(void)_endInteractivePresentationOrAnimation;
-(id)_newDynamicAnimationForTargetValue:(double)arg1 withStartValue:(double)arg2 withInitialVelocity:(double)arg3 ;
-(void)_beganPanGesture;
-(void)_updatedPanGestureWithProgress:(double)arg1 ;
-(void)_finishPresentationOrDismissalForProgress:(double)arg1 velocity:(double)arg2 ;
-(BOOL)showSuggestions;
-(BOOL)_isSuggestionQueueSuspended;
-(void)setDelegate:(id<SBSwitcherAppSuggestionViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBSwitcherAppSuggestionViewControllerDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(SBBestAppSuggestion *)bestAppSuggestion;
@end

