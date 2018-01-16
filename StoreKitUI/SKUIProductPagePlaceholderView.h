/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:58 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIColor;

@interface SKUIProductPagePlaceholderView : UIView {

	UIImageView* _imageView;
	UILabel* _label;
	UIColor* _textColor;

}

@property (nonatomic,retain) UIColor * textColor;              //@synthesize textColor=_textColor - In the implementation block
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(id)initWithPlaceholderString:(id)arg1 isPad:(BOOL)arg2 ;
@end

