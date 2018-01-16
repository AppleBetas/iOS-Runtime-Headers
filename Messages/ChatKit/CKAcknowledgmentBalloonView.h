/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:22 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKBalloonView.h>

@class CKAcknowledgmentGlyphView;

@interface CKAcknowledgmentBalloonView : CKBalloonView {

	unsigned long long _stackCount;
	long long _coloredPart;
	CKAcknowledgmentGlyphView* _glyphView;

}

@property (assign,nonatomic) unsigned long long stackCount;                      //@synthesize stackCount=_stackCount - In the implementation block
@property (assign,nonatomic) long long coloredPart;                              //@synthesize coloredPart=_coloredPart - In the implementation block
@property (nonatomic,retain) CKAcknowledgmentGlyphView * glyphView;              //@synthesize glyphView=_glyphView - In the implementation block
-(void)prepareForReuse;
-(CKAcknowledgmentGlyphView *)glyphView;
-(unsigned long long)stackCount;
-(long long)coloredPart;
-(void)setGlyphView:(CKAcknowledgmentGlyphView *)arg1 ;
-(void)setColoredPart:(long long)arg1 ;
-(void)setStackCount:(unsigned long long)arg1 ;
-(void)configureForAggregateAcknowledgmentChatItem:(id)arg1 ;
@end

