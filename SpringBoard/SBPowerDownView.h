/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertView.h>
#import <libobjc.A.dylib/_UIActionSliderDelegate.h>
#import <SpringBoard/SBPowerDownViewInterface.h>

@protocol SBPowerDownViewDelegate;
@class NSTimer, UIView, SBShapeView, _UIActionSlider, UIButton, UILabel, SBAppStatusBarSettingsAssertion, NSString;

@interface SBPowerDownView : SBAlertView <_UIActionSliderDelegate, SBPowerDownViewInterface> {

	NSTimer* _autoDismissTimer;
	UIView* _backdropView;
	SBShapeView* _darkeningUnderlayView;
	UIView* _darkeningOverlayView;
	_UIActionSlider* _actionSlider;
	UIButton* _cancelButton;
	UILabel* _cancelLabel;
	BOOL _hiddenLockScreenForeground;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	BOOL _canAlterScreenBrightness;
	id<SBPowerDownViewDelegate> _delegate;

}

@property (assign,nonatomic) BOOL canAlterScreenBrightness;                            //@synthesize canAlterScreenBrightness=_canAlterScreenBrightness - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBPowerDownViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)layoutForInterfaceOrientation:(long long)arg1 ;
-(id)_lockScreenView;
-(void)_cancelAutoDismissTimer;
-(void)_updateSliderExclusionPath;
-(void)_resetAutoDismissTimer;
-(void)_resetScreenBrightness;
-(void)setCanAlterScreenBrightness:(BOOL)arg1 ;
-(BOOL)canAlterScreenBrightness;
-(void)_animatePowerDown;
-(void)_notifyDelegateCancelled;
-(void)_notifyDelegatePowerDown;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SBPowerDownViewDelegate>)arg1 ;
-(void)dealloc;
-(id<SBPowerDownViewDelegate>)delegate;
-(void)animateIn;
-(void)dismiss;
-(void)_idleTimerFired;
-(void)animateOut;
-(void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2 ;
-(void)actionSliderDidCompleteSlide:(id)arg1 ;
-(void)actionSliderDidCancelSlide:(id)arg1 ;
-(void)actionSliderDidBeginSlide:(id)arg1 ;
-(void)_cancelButtonTapped;
@end

