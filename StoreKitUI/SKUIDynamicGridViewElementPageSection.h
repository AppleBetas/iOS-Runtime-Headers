/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:57 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUIGridViewElementPageSectionConfigurationDataSource.h>
#import <libobjc.A.dylib/SKUICollectionDOMFeatureTargetting.h>

@protocol SKUIEntityProviding;
@class SKUIViewElementLayoutContext, SKUIGridViewElementPageSectionConfiguration, SKUIDynamicPageSectionIndexMapper, CPLRUDictionary, SKUIViewElement, SKUIViewElementTextLayoutCache, _SKUIDynamicGridSizeCacheKey, SKUIMutableIntegerValue, NSMutableDictionary, SKUIGridComponent, NSString;

@interface SKUIDynamicGridViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIGridViewElementPageSectionConfigurationDataSource, SKUICollectionDOMFeatureTargetting> {

	SKUIViewElementLayoutContext* _cellLayoutContext;
	SKUIGridViewElementPageSectionConfiguration* _configuration;
	SKUIDynamicPageSectionIndexMapper* _dynamicPageSectionIndexMapper;
	BOOL _editing;
	id<SKUIEntityProviding> _entityProvider;
	CPLRUDictionary* _globalIndexToEntityValueProviderValueCache;
	CPLRUDictionary* _globalIndexToTemplateViewElementCache;
	SKUIViewElement* _independentlySizedViewElement;
	SKUIViewElementTextLayoutCache* _labelLayoutCache;
	long long _minimumEntityCountForSections;
	_SKUIDynamicGridSizeCacheKey* _reusableSizeCacheKey;
	SKUIMutableIntegerValue* _reusableGlobalIndexIntegerValue;
	unsigned long long* _sectionHeaderGlobalIndices;
	unsigned long long _numberOfSections;
	BOOL _showsSectionHeaders;
	NSMutableDictionary* _sizeCacheKeyToCachedCellSize;
	NSMutableDictionary* _templateViewElementsCache;
	BOOL _usesSizingEntityValueProvider;
	struct {
		unsigned respondsToSectionEntityValueProviderAtIndex : 1;
	}  _entityProviderFlags;

}

@property (nonatomic,readonly) SKUIGridComponent * pageComponent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
-(void)dealloc;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setContext:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 ;
-(void)_reloadViewElementProperties;
-(long long)applyUpdateType:(long long)arg1 ;
-(id)backgroundColorForIndexPath:(id)arg1 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(void)deselectItemsAnimated:(BOOL)arg1 ;
-(void)invalidateCachedLayoutInformation;
-(id)relevantEntityProviders;
-(void)willAppearInContext:(id)arg1 ;
-(void)collectionViewDidConfirmButtonElement:(id)arg1 withClickInfo:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2 ;
-(long long)numberOfCells;
-(BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3 ;
-(void)reloadVisibleCellsWithReason:(long long)arg1 ;
-(void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2 ;
-(UIEdgeInsets)pinningContentInsetForItemAtIndexPath:(id)arg1 ;
-(long long)pinningStyleForItemAtIndexPath:(id)arg1 ;
-(id)indexPathsForPinningItems;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(long long)arg2 ;
-(void)_enumerateVisibleCellsUsingBlock:(/*^block*/id)arg1 ;
-(void)_invalidateCellSizeCache;
-(void)_resetLayoutProperties;
-(id)_viewElementAtGlobalIndex:(long long)arg1 ;
-(id)_dynamicGridViewElement;
-(long long)_entityGlobalIndexForGlobalIndex:(long long)arg1 returningSection:(out long long*)arg2 ;
-(id)_templateViewElementsForType:(id)arg1 mode:(id)arg2 ;
-(void)_reloadEntityProperties;
-(void)_updateStyleProperties;
-(void)_reloadVisibleCellsAnimated:(BOOL)arg1 ;
-(id)_entityValueProviderForGlobalIndex:(long long)arg1 sectionIndex:(long long*)arg2 ;
-(id)_sectionTemplateViewElementForEntityValueProvider:(id)arg1 ;
-(long long)_globalIndexForEntityGlobalIndex:(long long)arg1 ;
-(BOOL)_updateShowsSectionHeaders;
-(id)_itemTemplateViewElementForEntityValueProvider:(id)arg1 ;
-(id)gridViewElementPageSectionConfiguration:(id)arg1 viewElementForIndexPath:(id)arg2 ;
-(void)gridViewElementPageSectionConfiguration:(id)arg1 configurePosition:(inout long long*)arg2 forItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)sectionContentInset;
@end

