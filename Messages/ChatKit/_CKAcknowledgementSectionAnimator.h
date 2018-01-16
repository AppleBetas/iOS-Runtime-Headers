/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:23 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UICollectionViewLayoutAttributes, CNAvatarView, UILabel, UIImageView, UIView, CKEntity;

@interface _CKAcknowledgementSectionAnimator : NSObject {

	UICollectionViewLayoutAttributes* _avatarViewAttr;
	CNAvatarView* _avatarView;
	UILabel* _voteCountLabel;
	UICollectionViewLayoutAttributes* _voteCountViewAttr;
	UIImageView* _ackIconView;
	UICollectionViewLayoutAttributes* _ackIconViewAttr;
	UIView* _containerView;
	unsigned long long _ackVoteCount;
	CKEntity* _entityToShow;
	long long _acknowledgmentType;

}

@property (nonatomic,retain) UICollectionViewLayoutAttributes * avatarViewAttr;                 //@synthesize avatarViewAttr=_avatarViewAttr - In the implementation block
@property (nonatomic,retain) CNAvatarView * avatarView;                                         //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UILabel * voteCountLabel;                                          //@synthesize voteCountLabel=_voteCountLabel - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * voteCountViewAttr;              //@synthesize voteCountViewAttr=_voteCountViewAttr - In the implementation block
@property (nonatomic,retain) UIImageView * ackIconView;                                         //@synthesize ackIconView=_ackIconView - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * ackIconViewAttr;                //@synthesize ackIconViewAttr=_ackIconViewAttr - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                            //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) unsigned long long ackVoteCount;                                   //@synthesize ackVoteCount=_ackVoteCount - In the implementation block
@property (nonatomic,retain) CKEntity * entityToShow;                                           //@synthesize entityToShow=_entityToShow - In the implementation block
@property (assign,nonatomic) long long acknowledgmentType;                                      //@synthesize acknowledgmentType=_acknowledgmentType - In the implementation block
-(void)dealloc;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(CNAvatarView *)avatarView;
-(void)setVoteCountLabel:(UILabel *)arg1 ;
-(UILabel *)voteCountLabel;
-(void)setAcknowledgmentType:(long long)arg1 ;
-(void)setAckVoteCount:(unsigned long long)arg1 ;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(unsigned long long)ackVoteCount;
-(long long)acknowledgmentType;
-(UIImageView *)ackIconView;
-(UICollectionViewLayoutAttributes *)ackIconViewAttr;
-(void)setAckIconView:(UIImageView *)arg1 ;
-(UICollectionViewLayoutAttributes *)voteCountViewAttr;
-(void)_updateAckIconViewDelayTime:(double)arg1 ;
-(void)_updateAvatarViewDelayTime:(double)arg1 ;
-(void)_updateVoteCountViewDelayTime:(double)arg1 ;
-(UICollectionViewLayoutAttributes *)avatarViewAttr;
-(CKEntity *)entityToShow;
-(void)animateInAckIconView:(double)arg1 ;
-(void)insertAvatarDelayTime:(double)arg1 ;
-(void)setAvatarViewAttr:(UICollectionViewLayoutAttributes *)arg1 ;
-(void)setVoteCountViewAttr:(UICollectionViewLayoutAttributes *)arg1 ;
-(void)setAckIconViewAttr:(UICollectionViewLayoutAttributes *)arg1 ;
-(void)setEntityToShow:(CKEntity *)arg1 ;
@end

