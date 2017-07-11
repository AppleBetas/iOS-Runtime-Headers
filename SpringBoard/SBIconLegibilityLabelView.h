/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:36 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UILegibilityView.h>
#import <SpringBoard/SBIconLabelView.h>

@class SBIconLabelImageParameters, UIImage;

@interface SBIconLegibilityLabelView : _UILegibilityView <SBIconLabelView> {

	SBIconLabelImageParameters* _imageParameters;

}

@property (nonatomic,retain) SBIconLabelImageParameters * imageParameters;              //@synthesize imageParameters=_imageParameters - In the implementation block
@property (nonatomic,retain) UIImage * image; 
-(void)updateIconLabelWithSettings:(id)arg1 imageParameters:(id)arg2 ;
-(void)_checkInImages;
-(SBIconLabelImageParameters *)imageParameters;
-(void)setImageParameters:(SBIconLabelImageParameters *)arg1 ;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
@end

