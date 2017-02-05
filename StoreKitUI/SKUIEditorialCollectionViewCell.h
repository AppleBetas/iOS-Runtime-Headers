/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:55 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICollectionViewCell.h>
#import <libobjc.A.dylib/SKUICellLayoutParentView.h>

@class SKUIEditorialCellLayout, NSString;

@interface SKUIEditorialCollectionViewCell : SKUICollectionViewCell <SKUICellLayoutParentView> {

	SKUIEditorialCellLayout* _layout;
	BOOL _layoutNeedsLayout;

}

@property (nonatomic,readonly) SKUIEditorialCellLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(void)prepareForReuse;
-(SKUIEditorialCellLayout *)layout;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setCellLayoutNeedsLayout;
@end

