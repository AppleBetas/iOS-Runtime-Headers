/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:22 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ChatKit/ChatKit-Structs.h>
@interface CKConversationListCellLayout : NSObject {

	BOOL _invalid;
	BOOL _shouldShowChevron;
	double _summaryLabelCapFrameYOrigin;
	CGRect _tableBounds;
	CGRect _summaryFrame;
	CGRect _dateFrame;
	CGRect _senderFrame;
	CGRect _chevronFrame;
	CGRect _unreadFrame;

}

@property (assign,nonatomic) BOOL invalid;                                    //@synthesize invalid=_invalid - In the implementation block
@property (assign,nonatomic) BOOL shouldShowChevron;                          //@synthesize shouldShowChevron=_shouldShowChevron - In the implementation block
@property (assign,nonatomic) CGRect tableBounds;                              //@synthesize tableBounds=_tableBounds - In the implementation block
@property (assign,nonatomic) CGRect summaryFrame;                             //@synthesize summaryFrame=_summaryFrame - In the implementation block
@property (assign,nonatomic) CGRect dateFrame;                                //@synthesize dateFrame=_dateFrame - In the implementation block
@property (assign,nonatomic) CGRect senderFrame;                              //@synthesize senderFrame=_senderFrame - In the implementation block
@property (assign,nonatomic) CGRect chevronFrame;                             //@synthesize chevronFrame=_chevronFrame - In the implementation block
@property (assign,nonatomic) CGRect unreadFrame;                              //@synthesize unreadFrame=_unreadFrame - In the implementation block
@property (assign,nonatomic) double summaryLabelCapFrameYOrigin;              //@synthesize summaryLabelCapFrameYOrigin=_summaryLabelCapFrameYOrigin - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)invalidate;
-(CGRect)chevronFrame;
-(void)setChevronFrame:(CGRect)arg1 ;
-(BOOL)shouldShowChevron;
-(void)setSummaryLabelCapFrameYOrigin:(double)arg1 ;
-(void)setSummaryFrame:(CGRect)arg1 ;
-(void)setSenderFrame:(CGRect)arg1 ;
-(void)setDateFrame:(CGRect)arg1 ;
-(void)setUnreadFrame:(CGRect)arg1 ;
-(void)setInvalid:(BOOL)arg1 ;
-(BOOL)invalid;
-(CGRect)senderFrame;
-(CGRect)dateFrame;
-(CGRect)summaryFrame;
-(double)summaryLabelCapFrameYOrigin;
-(CGRect)unreadFrame;
-(void)setShouldShowChevron:(BOOL)arg1 ;
-(void)setTableBounds:(CGRect)arg1 ;
-(CGRect)tableBounds;
@end

