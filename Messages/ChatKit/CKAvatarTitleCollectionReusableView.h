/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:22 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UILabel, NSMutableArray;

@interface CKAvatarTitleCollectionReusableView : UICollectionReusableView {

	long long _style;
	UILabel* _titleLabel;
	NSMutableArray* _pendingTitles;

}

@property (nonatomic,retain) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingTitles;              //@synthesize pendingTitles=_pendingTitles - In the implementation block
@property (assign,nonatomic) long long style;                             //@synthesize style=_style - In the implementation block
+(id)reuseIdentifier;
+(id)supplementaryViewKind;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSMutableArray *)pendingTitles;
-(void)setPendingTitles:(NSMutableArray *)arg1 ;
-(void)_animateFromQueue;
-(void)setTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)configureWithTitle:(id)arg1 ;
@end

