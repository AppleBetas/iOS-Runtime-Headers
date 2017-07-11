/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:25 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMessagePartChatItem.h>

@class CKMediaObject, NSString;

@interface CKAttachmentMessagePartChatItem : CKMessagePartChatItem {

	CKMediaObject* _mediaObject;

}

@property (nonatomic,retain) CKMediaObject * mediaObject;                 //@synthesize mediaObject=_mediaObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * transferGUID; 
-(id)description;
-(BOOL)canCopy;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(Class)balloonViewClass;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(unsigned long long)balloonCorners;
-(id)composition;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(CKMediaObject *)mediaObject;
-(BOOL)canForward;
-(id)pasteboardItems;
-(BOOL)canExport;
-(NSString *)transferGUID;
-(BOOL)stickersSnapToPoint;
@end

