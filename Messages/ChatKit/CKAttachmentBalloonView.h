/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:19 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>

@protocol CKAttachmentView;
@class UIView;

@interface CKAttachmentBalloonView : CKColoredBalloonView {

	UIView*<CKAttachmentView> _attachmentView;

}

@property (nonatomic,retain) UIView*<CKAttachmentView> attachmentView;              //@synthesize attachmentView=_attachmentView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)description;
-(UIEdgeInsets)alignmentRectInsets;
-(void)prepareForReuse;
-(void)prepareForDisplay;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(void)setMediaObject:(id)arg1 ;
-(void)configureForComposition:(id)arg1 ;
-(UIView*<CKAttachmentView>)attachmentView;
-(void)setAttachmentView:(UIView*<CKAttachmentView>)arg1 ;
-(void)transferUpdated:(id)arg1 ;
-(void)configureForMessagePart:(id)arg1 ;
@end

