/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:57 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUISettingsGroupControllerDelegate.h>

@protocol SKUISettingsGroupsDescriptionDelegate;
@class NSMapTable, SKUISettingsObjectStore, SKUISettingsContext, SKUIClientContext, NSString;

@interface SKUISettingsGroupsDescription : NSObject <SKUISettingsGroupControllerDelegate> {

	NSMapTable* _controllers;
	SKUISettingsObjectStore* _groupDescriptions;
	SKUISettingsContext* _settingsContext;
	SKUIClientContext* _clientContext;
	id<SKUISettingsGroupsDescriptionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) SKUIClientContext * clientContext;                               //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISettingsGroupsDescriptionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<SKUISettingsGroupsDescriptionDelegate>)arg1 ;
-(void)reloadData;
-(id<SKUISettingsGroupsDescriptionDelegate>)delegate;
-(void)_presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)_dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dispatchUpdate:(id)arg1 ;
-(void)_updatedEditsValid;
-(void)deleteSettingsGroupDescription:(id)arg1 ;
-(void)hideSettingsGroupDescription:(id)arg1 ;
-(unsigned long long)indexOfSettingsGroupDescription:(id)arg1 ;
-(void)revealSettingsGroupDescription:(id)arg1 ;
-(BOOL)hasEditableSettingDescriptions;
-(void)recycle;
-(void)requestLayoutForWidth:(double)arg1 context:(id)arg2 ;
-(id)owningViewControllerForSettingsGroupController:(id)arg1 ;
-(unsigned long long)numberOfGroups;
-(id)settingDescriptionAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfSettingsInGroupAtIndex:(unsigned long long)arg1 ;
-(id)footerDescriptionForGroupAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldShowHeaderForGroupAtIndex:(unsigned long long)arg1 ;
-(id)headerDescriptionForGroupAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldShowFooterForGroupAtIndex:(unsigned long long)arg1 ;
-(id)createEditTransaction;
-(id)initWithDelegate:(id)arg1 settingsContext:(id)arg2 ;
-(void)addSettingsGroupWithViewElement:(id)arg1 ;
-(void)settingsGroupController:(id)arg1 reloadSettingDescription:(id)arg2 ;
-(id)settingsGroupController:(id)arg1 viewForSettingDescription:(id)arg2 ;
-(void)_addSettingsGroupWithViewElement:(id)arg1 controller:(id)arg2 ;
-(id)_gatherEditableSettings;
-(void)_dispatchUpdateForSettingsGroupDescription:(id)arg1 atIndex:(unsigned long long)arg2 withUpdateType:(long long)arg3 ;
-(id)_controllerForGroupElement:(id)arg1 ;
-(void)deleteSettingAtIndexPath:(id)arg1 ;
-(id)viewElementForSettingAtIndexPath:(id)arg1 ;
@end

