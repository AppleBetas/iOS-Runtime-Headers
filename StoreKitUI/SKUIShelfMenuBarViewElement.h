/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:54 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIShelfViewElement.h>
#import <libobjc.A.dylib/_SKUIMenuBarViewElementConfigurationReloadDelegate.h>
#import <libobjc.A.dylib/SKUIMenuBarViewElement.h>

@class NSArray, SKUIMenuBarViewElementConfiguration, NSString;

@interface SKUIShelfMenuBarViewElement : SKUIShelfViewElement <_SKUIMenuBarViewElementConfigurationReloadDelegate, SKUIMenuBarViewElement> {

	NSArray* _focusedViewElements;
	NSArray* _regularViewElements;
	SKUIMenuBarViewElementConfiguration* _configuration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIMenuBarViewElementConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)supportedFeatures;
-(void)setConfiguration:(SKUIMenuBarViewElementConfiguration *)arg1 ;
-(SKUIMenuBarViewElementConfiguration *)configuration;
-(unsigned long long)elementType;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)_menuBarViewElementConfigurationRequestsReload:(id)arg1 ;
-(void)_reloadMenuItems;
-(id)regularViewElementForMenuItemAtIndex:(unsigned long long)arg1 ;
-(id)focusedViewElementForMenuItemAtIndex:(unsigned long long)arg1 ;
@end

