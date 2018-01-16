/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:24 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UILabel;

@interface CKAcknowledgmentVoteCountCollectionReusableView : UICollectionReusableView {

	UILabel* _countLabel;

}

@property (nonatomic,retain) UILabel * countLabel;              //@synthesize countLabel=_countLabel - In the implementation block
+(id)reuseIdentifier;
+(id)supplementaryViewKind;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)configureWithAcknowledgmentTally:(id)arg1 ;
-(UILabel *)countLabel;
-(void)setCountLabel:(UILabel *)arg1 ;
@end

