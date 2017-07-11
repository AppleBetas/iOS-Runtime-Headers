/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:51 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKModuleView.h>

@protocol NTKTimeTravelModuleViewTapClient;
@class UIView, UILabel, NSDate, NSDateComponentsFormatter, NSCalendar, CALayer;

@interface NTKTimeTravelModuleView : NTKModuleView {

	UIView* _backgroundView;
	UILabel* _timeScrubDifferenceLabel;
	UILabel* _timeScrubNowLabel;
	NSDate* _date;
	NSDateComponentsFormatter* _offsetDateFormatter;
	BOOL _is24HourMode;
	BOOL _shouldUseNowText;
	NSCalendar* _cal;
	CALayer* _borderLayer;
	double _nowLabelCenterY;
	id<NTKTimeTravelModuleViewTapClient> _tapDelegate;

}

@property (assign,nonatomic,__weak) id<NTKTimeTravelModuleViewTapClient> tapDelegate;              //@synthesize tapDelegate=_tapDelegate - In the implementation block
+(double)cornerRadius;
+(id)timeTravelColor;
+(double)_actualCornerRadius;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTapDelegate:(id<NTKTimeTravelModuleViewTapClient>)arg1 ;
-(id<NTKTimeTravelModuleViewTapClient>)tapDelegate;
-(void)_layoutContentView;
-(void)scrubToDate:(id)arg1 ;
-(void)_setupBorder;
-(id)_formatDateStringForIntervalBetweenReferenceDate:(id)arg1 andOverrideDate:(id)arg2 ;
-(id)initWithMaximumWidth:(double)arg1 ;
-(void)prepareToAppear;
@end

