/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:36 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationController.h>

@interface SBDismissOverlaysAnimationController : SBUIAnimationController {

	unsigned long long _dismissOptions;

}

@property (nonatomic,readonly) unsigned long long dismissOptions;              //@synthesize dismissOptions=_dismissOptions - In the implementation block
+(unsigned long long)_overlayToDismissForOptions:(unsigned long long)arg1 ;
+(BOOL)willDismissOverlaysForDismissOptions:(unsigned long long)arg1 ;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(id)initWithTransitionContextProvider:(id)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)dismissOptions;
-(id)animationSettings;
-(void)_startAnimation;
@end

