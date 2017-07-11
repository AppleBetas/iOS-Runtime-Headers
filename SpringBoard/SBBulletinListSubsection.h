/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SBBulletinListSubsection : NSObject {

	BOOL _showsInLockScreen;
	BOOL _showsMessagePreview;
	NSString* _subsectionID;

}

@property (nonatomic,copy,readonly) NSString * subsectionID;              //@synthesize subsectionID=_subsectionID - In the implementation block
@property (assign,nonatomic) BOOL showsInLockScreen;                      //@synthesize showsInLockScreen=_showsInLockScreen - In the implementation block
@property (assign,nonatomic) BOOL showsMessagePreview;                    //@synthesize showsMessagePreview=_showsMessagePreview - In the implementation block
-(id)initWithBulletinListSection:(id)arg1 subsectionID:(id)arg2 ;
-(NSString *)subsectionID;
-(void)setShowsInLockScreen:(BOOL)arg1 ;
-(void)setShowsMessagePreview:(BOOL)arg1 ;
-(BOOL)showsMessagePreview;
-(BOOL)showsInLockScreen;
@end

