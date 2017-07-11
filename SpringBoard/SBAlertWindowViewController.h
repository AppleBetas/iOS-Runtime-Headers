/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>

@protocol SBAlertWindowViewControllerDelegate;
@class UIScreen, UIView, SBAlert, UIViewController, NSMutableSet;

@interface SBAlertWindowViewController : UIViewController {

	UIScreen* _screen;
	id<SBAlertWindowViewControllerDelegate> _alertWindowViewControllerDelegate;
	UIView* _contentView;
	SBAlert* _activeAlert;
	UIViewController* _activeViewController;
	NSMutableSet* _childAlerts;

}

@property (assign,nonatomic,__weak) id<SBAlertWindowViewControllerDelegate> alertWindowViewControllerDelegate;              //@synthesize alertWindowViewControllerDelegate=_alertWindowViewControllerDelegate - In the implementation block
@property (nonatomic,retain) SBAlert * activeAlert;                                                                         //@synthesize activeAlert=_activeAlert - In the implementation block
@property (nonatomic,retain) UIViewController * activeViewController;                                                       //@synthesize activeViewController=_activeViewController - In the implementation block
-(SBAlert *)activeAlert;
-(void)setAlertWindowViewControllerDelegate:(id<SBAlertWindowViewControllerDelegate>)arg1 ;
-(long long)stackedAlertCount;
-(id)stackedViewForAlert:(id)arg1 ;
-(BOOL)alertWindow:(id)arg1 canAnimateInAlert:(id)arg2 ;
-(void)addAlertController:(id)arg1 ;
-(void)noteAlertWindow:(id)arg1 didDisplayAlert:(id)arg2 ;
-(void)removeAlertController:(id)arg1 ;
-(void)addView:(id)arg1 toBeObscuredByAlert:(id)arg2 ;
-(id)stackedAlertsIncludingActiveAlert:(BOOL)arg1 ;
-(void)performEndAppearanceToController:(id)arg1 withTransitionBlock:(/*^block*/id)arg2 ;
-(void)setActiveAlert:(SBAlert *)arg1 ;
-(id<SBAlertWindowViewControllerDelegate>)alertWindowViewControllerDelegate;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithScreen:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)wantsFullScreenLayout;
-(void)window:(id)arg1 willAnimateFromContentFrame:(CGRect)arg2 toContentFrame:(CGRect)arg3 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)setActiveViewController:(UIViewController *)arg1 ;
-(UIViewController *)activeViewController;
@end

