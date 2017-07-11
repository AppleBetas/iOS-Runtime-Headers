/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:36 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class FBApplicationInfo;

@interface SBFairPlayFamilyLeaveAlertItem : SBAlertItem {

	FBApplicationInfo* _appInfo;

}

@property (nonatomic,retain) FBApplicationInfo * appInfo;              //@synthesize appInfo=_appInfo - In the implementation block
-(void)setAppInfo:(FBApplicationInfo *)arg1 ;
-(BOOL)dismissOnLock;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(FBApplicationInfo *)appInfo;
-(id)initWithAppInfo:(id)arg1 ;
@end

