/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:51 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSPredicate, NSArray;

@interface SKUIPredicateListViewElement : SKUIViewElement {

	NSPredicate* _compoundEntityValuePredicate;

}

@property (nonatomic,copy,readonly) NSArray * predicateViewElements; 
@property (nonatomic,readonly) NSPredicate * compoundEntityValuePredicate; 
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)_enumeratePredicateViewElementsUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)predicateViewElements;
-(NSPredicate *)compoundEntityValuePredicate;
@end

