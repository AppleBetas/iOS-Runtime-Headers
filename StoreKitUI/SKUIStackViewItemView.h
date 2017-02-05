/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:54 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIImage;

@interface SKUIStackViewItemView : UIView {

	UIColor* _borderColor;
	UIImage* _image;
	BOOL _shouldFlipImageHorizontal;
	BOOL _shouldFlipImageVertical;

}

@property (nonatomic,copy) UIColor * borderColor;                         //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,retain) UIImage * image;                             //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL shouldFlipImageHorizontal;              //@synthesize shouldFlipImageHorizontal=_shouldFlipImageHorizontal - In the implementation block
@property (assign,nonatomic) BOOL shouldFlipImageVertical;                //@synthesize shouldFlipImageVertical=_shouldFlipImageVertical - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(void)setShouldFlipImageHorizontal:(BOOL)arg1 ;
-(void)setShouldFlipImageVertical:(BOOL)arg1 ;
-(BOOL)shouldFlipImageHorizontal;
-(BOOL)shouldFlipImageVertical;
@end

