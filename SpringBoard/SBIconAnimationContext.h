/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SBIconAnimationContext : NSObject {

	double _delay;
	double _fraction;
	/*^block*/id _completion;
	NSString* _identifier;

}

@property (assign,nonatomic) double delay;                              //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) double fraction;                           //@synthesize fraction=_fraction - In the implementation block
@property (nonatomic,copy) id completion;                               //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)initWithNotificationIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(NSString *)identifier;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setFraction:(double)arg1 ;
-(double)fraction;
@end

