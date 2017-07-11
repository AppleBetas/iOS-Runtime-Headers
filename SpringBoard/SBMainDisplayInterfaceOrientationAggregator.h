/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSInvalidatable;
@class NSArray;

@interface SBMainDisplayInterfaceOrientationAggregator : NSObject {

	id<BSInvalidatable> _stateCaptureHandle;

}

@property (nonatomic,readonly) long long activeInterfaceOrientation; 
@property (nonatomic,retain,readonly) NSArray * interfaceOrientationSources; 
-(long long)_layoutOrientation;
-(void)_sortSources:(id)arg1 ;
-(NSArray *)interfaceOrientationSources;
-(id)_highestSourceAtOrBelow:(double)arg1 amongSources:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(long long)activeInterfaceOrientation;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

