/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:01 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIActionsViewElement;

@interface SKUITrackViewElement : SKUIViewElement {

	char _enabled;
	BOOL _selected;

}

@property (getter=isSelected,nonatomic,readonly) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) SKUIActionsViewElement * swipeActions; 
-(BOOL)isEnabled;
-(BOOL)isSelected;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(SKUIActionsViewElement *)swipeActions;
@end

