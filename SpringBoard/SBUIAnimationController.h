/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:36 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBTransaction.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>
#import <SpringBoard/SBViewControllerTransitionContextDelegate.h>
#import <SpringBoard/SBUIAnimationStepping.h>
#import <SpringBoard/SBUIAnimationControllerCoordinating.h>

@protocol SBUIAnimationControllerTransitionContextProvider;
@class BSBlockTransaction, NSSet, NSMutableSet, SBAnimationStepper, UIWindow, UIView, SBViewControllerTransitionContext, BSTransaction, SBWorkspaceApplication, BSAnimationSettings, NSString;

@interface SBUIAnimationController : SBTransaction <UIViewControllerInteractiveTransitioning, SBViewControllerTransitionContextDelegate, SBUIAnimationStepping, SBUIAnimationControllerCoordinating> {

	id<SBUIAnimationControllerTransitionContextProvider> _transitionContextProvider;
	BSBlockTransaction* _animationTransaction;
	BSBlockTransaction* _notifyObserversTransaction;
	BSBlockTransaction* _cleanupTransaction;
	NSSet* _progressDependencies;
	NSSet* _waitForActivationDependencies;
	NSMutableSet* _coordinatingChildRelationships;
	NSMutableSet* _steppedCoordinatingChildAnimations;
	SBAnimationStepper* _stepper;
	UIWindow* _transitionWindow;
	UIView* _transitionContainer;
	int _animationState;
	BOOL _didPostBeginAnimationNotification;
	BOOL _didNotifyObserversOfCompletion;
	BOOL _needsCATransactionActivate;
	SBViewControllerTransitionContext* _transition;
	/*^block*/id _animationTransactionCompletion;

}

@property (nonatomic,retain) SBViewControllerTransitionContext * transition;                                              //@synthesize transition=_transition - In the implementation block
@property (nonatomic,retain) id<SBUIAnimationControllerTransitionContextProvider> transitionContextProvider;              //@synthesize transitionContextProvider=_transitionContextProvider - In the implementation block
@property (nonatomic,copy) id animationTransactionCompletion;                                                             //@synthesize animationTransactionCompletion=_animationTransactionCompletion - In the implementation block
@property (nonatomic,readonly) BSTransaction * animationTransaction;                                                      //@synthesize animationTransaction=_animationTransaction - In the implementation block
@property (nonatomic,readonly) BSTransaction * notifyObserversTransaction;                                                //@synthesize notifyObserversTransaction=_notifyObserversTransaction - In the implementation block
@property (nonatomic,readonly) BSTransaction * cleanupTransaction;                                                        //@synthesize cleanupTransaction=_cleanupTransaction - In the implementation block
@property (assign,nonatomic) BOOL needsCATransactionActivate;                                                             //@synthesize needsCATransactionActivate=_needsCATransactionActivate - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                                                                    //@synthesize transitionContainer=_transitionContainer - In the implementation block
@property (nonatomic,copy,readonly) NSSet * activatingApps; 
@property (nonatomic,copy,readonly) NSSet * deactivatingApps; 
@property (nonatomic,readonly) SBWorkspaceApplication * activatingApp; 
@property (nonatomic,readonly) SBWorkspaceApplication * deactivatingApp; 
@property (nonatomic,readonly) BOOL transitionSupportsCancelling; 
@property (nonatomic,readonly) BOOL transitionSupportsRestarting; 
@property (nonatomic,readonly) BOOL transitionWasCancelled; 
@property (nonatomic,readonly) BOOL transitionWasRestarted; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (nonatomic,readonly) id<SBViewControllerTransitionCoordinator> transitionCoordinator; 
@property (nonatomic,readonly) BSAnimationSettings * animationSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
@property (getter=isStepped,nonatomic,readonly) BOOL stepped; 
@property (assign,nonatomic) double stepPercentage; 
-(BOOL)transitionWasRestarted;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(NSSet *)activatingApps;
-(void)_noteAnimationDidFinish;
-(void)_cleanupAnimation;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(id)_animationProgressDependencies;
-(BOOL)_shouldDismissBanner;
-(void)_prepareAnimation;
-(id)_getTransitionWindow;
-(double)stepPercentage;
-(void)setStepPercentage:(double)arg1 ;
-(void)finishSteppingForwardToEnd;
-(void)finishSteppingBackwardToStart;
-(BOOL)isStepped;
-(id)_transitionAnimator;
-(void)enableSteppingWithAnimationSettings:(id)arg1 ;
-(void)_noteAnimationDidFail;
-(void)addCoordinatingChildTransaction:(id)arg1 withSchedulingPolicy:(unsigned long long)arg2 ;
-(id)_viewsForAnimationStepping;
-(SBWorkspaceApplication *)activatingApp;
-(SBWorkspaceApplication *)deactivatingApp;
-(NSSet *)deactivatingApps;
-(id<SBUIAnimationControllerTransitionContextProvider>)transitionContextProvider;
-(void)restartTransition;
-(void)_applicationDependencyStateChanged;
-(int)_animationState;
-(void)_noteAnimationDidRevealApplication;
-(void)_willSetupStartDependencies;
-(BOOL)isReasonableMomentToInterrupt;
-(BOOL)waitingToStart;
-(BOOL)transitionSupportsCancelling;
-(BOOL)__animationShouldStart;
-(void)setAnimationTransactionCompletion:(id)arg1 ;
-(void)__startAnimation;
-(void)__reportAnimationCompletion;
-(void)__cleanupAnimation;
-(void)_enumerateCoordinatingAnimationsWithSchedulingPolicy:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)transitionSupportsRestarting;
-(void)_setAnimationState:(int)arg1 ;
-(void)_abortAnimation;
-(id)coordinatingAnimationControllers;
-(void)_enumerateCoordinatingChildRelationshipsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_willAnimate;
-(id)__alertItemsController;
-(id)__waitForAppActivationTransactionForApplication:(id)arg1 ;
-(BOOL)__wantsInitialProgressStateChange;
-(void)_willBeginWaitingForStartDependencies;
-(BSTransaction *)animationTransaction;
-(BSTransaction *)notifyObserversTransaction;
-(BSTransaction *)cleanupTransaction;
-(void)_applicationActivationStateDidChange;
-(void)__abortAnimation;
-(void)_notifyObserversOfAnimationCompletion;
-(BOOL)_isNullAnimation;
-(void)_enumerateCoordinatingAnimationsWithBlock:(/*^block*/id)arg1 ;
-(void)__noteAnimationDidTerminate;
-(id)animationTransactionCompletion;
-(void)addSteppedCoordinatingChildAnimation:(id)arg1 ;
-(void)delayCleanupUntilTransactionFinishes:(id)arg1 ;
-(void)stopDelayingCleanupForTransaction:(id)arg1 ;
-(void)delayAnimationUntilTransactionFinishes:(id)arg1 ;
-(void)stopDelayingAnimationForTransaction:(id)arg1 ;
-(void)setTransitionContextProvider:(id<SBUIAnimationControllerTransitionContextProvider>)arg1 ;
-(BOOL)needsCATransactionActivate;
-(void)setNeedsCATransactionActivate:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(UIView *)containerView;
-(BOOL)isInteractive;
-(BOOL)transitionWasCancelled;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BSAnimationSettings *)animationSettings;
-(void)removeObserver:(id)arg1 ;
-(void)transitionDidFinish:(id)arg1 ;
-(void)setTransition:(SBViewControllerTransitionContext *)arg1 ;
-(SBViewControllerTransitionContext *)transition;
-(id<SBViewControllerTransitionCoordinator>)transitionCoordinator;
-(BOOL)animating;
-(void)_setHidden:(BOOL)arg1 ;
-(id)_animationIdentifier;
-(BOOL)_canBeInterrupted;
-(void)_addDebugLogCategory:(id)arg1 ;
-(void)_begin;
-(void)_willComplete;
-(void)cancelTransition;
-(BOOL)isFinishedAnimating;
-(void)_startAnimation;
@end

