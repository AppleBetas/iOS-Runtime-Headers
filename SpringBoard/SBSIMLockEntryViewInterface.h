/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSIMLockEntryViewInterface <NSObject>
@required
-(void)setupSuccess;
-(void)setupFailureState;
-(id)initWithFrame:(CGRect)arg1 languageCode:(id)arg2;
-(id)localizedStringWithKey:(id)arg1;
-(void)setupCurrentLockAttemptState;
-(void)setupUnlockAttemptState;
-(id)label;
-(id)titleText;

@end

