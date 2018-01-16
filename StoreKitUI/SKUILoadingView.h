/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:05 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class SKUIColorScheme, UILabel, UIActivityIndicatorView, NSString;

@interface SKUILoadingView : UIView {

	SKUIColorScheme* _colorScheme;
	UILabel* _label;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,copy) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,copy) NSString * loadingText; 
+(id)defaultLoadingTextWithClientContext:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(NSString *)loadingText;
-(void)setLoadingText:(NSString *)arg1 ;
@end

