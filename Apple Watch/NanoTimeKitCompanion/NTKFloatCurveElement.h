/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:53 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMediaTimingFunction;

@interface NTKFloatCurveElement : NSObject {

	double _floatValue;
	double _fraction;
	long long _curve;
	CAMediaTimingFunction* _timingFunction;

}

@property (assign,nonatomic) double floatValue;                                   //@synthesize floatValue=_floatValue - In the implementation block
@property (assign,nonatomic) double fraction;                                     //@synthesize fraction=_fraction - In the implementation block
@property (assign,nonatomic) long long curve;                                     //@synthesize curve=_curve - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
-(CAMediaTimingFunction *)timingFunction;
-(void)setCurve:(long long)arg1 ;
-(double)floatValue;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(long long)curve;
-(void)setFloatValue:(double)arg1 ;
-(void)setFraction:(double)arg1 ;
-(id)initWithFloatValue:(double)arg1 fraction:(double)arg2 ;
-(double)fraction;
@end

