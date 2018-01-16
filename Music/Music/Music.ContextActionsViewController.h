/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:22:59 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <UIKit/UIInterfaceActionHandlerInvocationDelegate.h>

@class NSArray, UIGestureRecognizer, _TtC5Music35ContextActionPresentationController;

@interface Music.ContextActionsViewController : UIViewController <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate, UIAdaptivePresentationControllerDelegate, UIInterfaceActionHandlerInvocationDelegate> {

	 configuration;
	 loadedModel;
	 constraints;
	 isOrbPresentation;
	 stackView;
	 backgroundView;
	 actionGroupViews;
	 scrollableActionGroupView;
	 gestureRecognizerInitialLocation;
	 gestureRecognizerHysterisHandler;
	 _hasAppliedSystemRecognizer;
	 systemProvidedGestureRecognzier;
	 transitionPresentationController;

}

@property (assign,nonatomic) BOOL isOrbPresentation; 
@property (copy,nonatomic) NSArray * actionGroupViews; 
@property (retain,nonatomic) UIGestureRecognizer * systemProvidedGestureRecognzier; 
@property (retain,nonatomic) _TtC5Music35ContextActionPresentationController * transitionPresentationController; 
+(id)requestedPropertiesFor:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(void)interfaceAction:(id)arg1 invokeActionHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reloadViewsConfiguration;
-(BOOL)isOrbPresentation;
-(void)setIsOrbPresentation:(BOOL)arg1 ;
-(NSArray *)actionGroupViews;
-(void)setActionGroupViews:(NSArray *)arg1 ;
-(UIGestureRecognizer *)systemProvidedGestureRecognzier;
-(void)setSystemProvidedGestureRecognzier:(UIGestureRecognizer *)arg1 ;
-(_TtC5Music35ContextActionPresentationController *)transitionPresentationController;
-(void)setTransitionPresentationController:(_TtC5Music35ContextActionPresentationController *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
@end

