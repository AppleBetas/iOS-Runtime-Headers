/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIControl.h>

@class MTTouchInsetsButton, UILabel, UIFont, UIColor;

@interface MTCountInfoButton : UIControl {

	unsigned long long _index;
	unsigned long long _count;
	MTTouchInsetsButton* _button;
	UILabel* _label;

}

@property (nonatomic,retain) MTTouchInsetsButton * button;              //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UILabel * label;                           //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long index;                  //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) unsigned long long count;                  //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
-(void)setIndex:(unsigned long long)arg1 forCount:(unsigned long long)arg2 ;
-(id)_createLabelTextForCurrentState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MTTouchInsetsButton *)button;
-(unsigned long long)count;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(UIFont *)font;
-(UIColor *)textColor;
-(void)setCount:(unsigned long long)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(unsigned long long)index;
-(CGSize)labelSize;
-(void)setButton:(MTTouchInsetsButton *)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(CGSize)buttonSize;
-(void)_updateLabelText;
@end

