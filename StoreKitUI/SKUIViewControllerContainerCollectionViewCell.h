/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:56 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class SKUIViewControllerContainerView, NSIndexPath, UIViewController, UIView;

@interface SKUIViewControllerContainerCollectionViewCell : UICollectionViewCell {

	SKUIViewControllerContainerView* _viewControllerContainerView;
	BOOL _managesViewControllerContainerViewLayout;
	double _maximumContentWidth;
	NSIndexPath* _indexPath;

}

@property (assign,nonatomic) double maximumContentWidth;                                 //@synthesize maximumContentWidth=_maximumContentWidth - In the implementation block
@property (nonatomic,retain) UIViewController * viewController; 
@property (nonatomic,readonly) UIView * viewControllerContainerView; 
@property (assign,nonatomic) BOOL managesViewControllerContainerViewLayout;              //@synthesize managesViewControllerContainerViewLayout=_managesViewControllerContainerViewLayout - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                  //@synthesize indexPath=_indexPath - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSIndexPath *)indexPath;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setMaximumContentWidth:(double)arg1 ;
-(double)maximumContentWidth;
-(void)setManagesViewControllerContainerViewLayout:(BOOL)arg1 ;
-(UIView *)viewControllerContainerView;
-(BOOL)managesViewControllerContainerViewLayout;
@end

