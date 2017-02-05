/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:55 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@protocol SKUIEntityProviding, IKEntityValueProviding;
@class NSMutableArray, NSString, NSSet, NSArray;

@interface SKUIViewElement : IKViewElement {

	id<SKUIEntityProviding> _entityProvider;
	id<IKEntityValueProviding> _entityValueProvider;
	NSMutableArray* _flattenedChildren;
	BOOL _hasValidEntityProvider;
	long long _pinStyle;
	id<IKEntityValueProviding> _explicitEntityValueProvider;

}

@property (nonatomic,copy,readonly) NSString * indexBarEntryID; 
@property (getter=isDynamicContainer,nonatomic,readonly) BOOL dynamicContainer; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) id<SKUIEntityProviding> entityProvider; 
@property (nonatomic,readonly) id<SKUIEntityProviding> explicitEntityProvider; 
@property (nonatomic,retain) id<IKEntityValueProviding> entityValueProvider;                      //@synthesize entityValueProvider=_entityValueProvider - In the implementation block
@property (nonatomic,retain) id<IKEntityValueProviding> explicitEntityValueProvider;              //@synthesize explicitEntityValueProvider=_explicitEntityValueProvider - In the implementation block
@property (nonatomic,readonly) NSSet * entityValueProperties; 
@property (nonatomic,readonly) NSArray * flattenedChildren; 
@property (nonatomic,retain,readonly) NSString * itmlID; 
@property (nonatomic,readonly) long long pageComponentType; 
@property (nonatomic,readonly) NSSet * personalizationLibraryItems; 
@property (nonatomic,readonly) long long pinStyle;                                                //@synthesize pinStyle=_pinStyle - In the implementation block
@property (nonatomic,readonly) BOOL rendersWithParallax; 
@property (nonatomic,readonly) BOOL rendersWithPerspective; 
@property (nonatomic,readonly) id<NSCopying> uniquingMapKey; 
-(void)dealloc;
-(BOOL)isEnabled;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(id)firstChildForElementType:(unsigned long long)arg1 ;
-(BOOL)rendersWithParallax;
-(BOOL)rendersWithPerspective;
-(id<SKUIEntityProviding>)entityProvider;
-(void)setEntityValueProvider:(id<IKEntityValueProviding>)arg1 ;
-(NSString *)indexBarEntryID;
-(id)firstDescendentWithIndexBarEntryID:(id)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(void)entityValueProviderDidChange;
-(id<NSCopying>)uniquingMapKey;
-(id<IKEntityValueProviding>)entityValueProvider;
-(NSSet *)entityValueProperties;
-(void)_unregisterForNotificationsForEntityProvider:(id)arg1 ;
-(BOOL)isDynamicContainer;
-(id)persistenceKey;
-(NSArray *)flattenedChildren;
-(void)_entityProviderDidInvalidateNotification:(id)arg1 ;
-(void)_registerForNotificationsForEntityProvider:(id)arg1 ;
-(id)elementWithIdentifier:(id)arg1 ;
-(BOOL)isDescendentFromViewElement:(id)arg1 ;
-(NSSet *)personalizationLibraryItems;
-(long long)pinStyle;
-(id<SKUIEntityProviding>)explicitEntityProvider;
-(BOOL)handlesBackgroundColorDirectly;
-(id)featureWithName:(id)arg1 ;
-(id)ancestorElementMatchingPredicate:(/*^block*/id)arg1 ;
-(id<IKEntityValueProviding>)explicitEntityValueProvider;
-(void)_entityValueProviderDidChange;
-(BOOL)canMoveWithinCollection;
-(id)ancestorElementOfType:(unsigned long long)arg1 ;
-(BOOL)descendsFromElementWithType:(unsigned long long)arg1 ;
-(void)enumerateViewElementsWithDictionary:(id)arg1 factory:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setExplicitEntityValueProvider:(id<IKEntityValueProviding>)arg1 ;
@end

