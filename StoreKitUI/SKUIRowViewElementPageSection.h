/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:01 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class SKUIViewElementLayoutContext, SKUIRowComponent, NSString;

@interface SKUIRowViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {

	SKUIViewElementLayoutContext* _cellLayoutContext;

}

@property (nonatomic,readonly) SKUIRowComponent * pageComponent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 ;
-(id)backgroundColorForIndexPath:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2 ;
-(long long)numberOfCells;
-(void)prefetchResourcesWithReason:(long long)arg1 ;
-(BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(Class)_cellClassForViewElement:(id)arg1 ;
-(id)_firstChildForColumn:(id)arg1 ;
-(id)_reuseIdentifierForViewElement:(id)arg1 ;
-(UIEdgeInsets)_contentInsetForIndexPath:(id)arg1 ;
-(double)_interiorColumnSpacing;
-(double)_singleColumnWidth;
-(void)_enumerateViewElementsUsingBlock:(/*^block*/id)arg1 ;
-(void)_requestLayoutForCells;
-(Class)_cellClassForCardViewElement:(id)arg1 ;
-(Class)_cellClassForLockupViewElement:(id)arg1 ;
-(id)_reuseIdentifierForCardViewElement:(id)arg1 ;
-(id)_reuseIdentifierForLockupViewElement:(id)arg1 ;
-(UIEdgeInsets)sectionContentInset;
@end

