/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBCornerAnimatingImageView, UIView, UIImage;

@interface SBSwitcherSnapshotImageView : UIView {

	SBCornerAnimatingImageView* _imageView;
	UIView* _scalingView;
	double _cornerRadius;
	BOOL _usesNonuniformScaling;
	BOOL _hasOpaqueContents;

}

@property (nonatomic,readonly) UIImage * image; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) BOOL usesNonuniformScaling;              //@synthesize usesNonuniformScaling=_usesNonuniformScaling - In the implementation block
@property (assign,nonatomic) BOOL hasOpaqueContents;                  //@synthesize hasOpaqueContents=_hasOpaqueContents - In the implementation block
-(void)setUsesNonuniformScaling:(BOOL)arg1 ;
-(void)setHasOpaqueContents:(BOOL)arg1 ;
-(CGAffineTransform)scalingTransform;
-(BOOL)usesNonuniformScaling;
-(double)_transformHorizontalScale;
-(double)_transformVerticalScale;
-(double)_transformScale;
-(BOOL)hasOpaqueContents;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)layoutSubviews;
-(id)initWithImage:(id)arg1 ;
-(UIImage *)image;
-(void)_updateCornerRadius;
@end

