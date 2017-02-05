/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 2:44:28 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSLocaleSelector.h>

@class COSInternationalController, NPSDomainAccessor, NPSManager;

@interface COSLocaleSelector : PSLocaleSelector {

	COSInternationalController* _internationalController;
	NPSDomainAccessor* _gizmoGlobalDomain;
	NPSManager* _syncManager;

}

@property (nonatomic,retain) COSInternationalController * internationalController;              //@synthesize internationalController=_internationalController - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * gizmoGlobalDomain;                             //@synthesize gizmoGlobalDomain=_gizmoGlobalDomain - In the implementation block
@property (nonatomic,retain) NPSManager * syncManager;                                          //@synthesize syncManager=_syncManager - In the implementation block
-(NPSDomainAccessor *)gizmoGlobalDomain;
-(void)setGizmoGlobalDomain:(NPSDomainAccessor *)arg1 ;
-(id)initWithInternationalController:(id)arg1 ;
-(COSInternationalController *)internationalController;
-(void)setInternationalController:(COSInternationalController *)arg1 ;
-(void)postLocaleChangedNotification;
-(void)setLocaleFromCalendarID:(id)arg1 ;
-(void)setLocale:(id)arg1 ;
-(id)currentLocale;
-(void)setLocaleOnly:(id)arg1 ;
-(void)resetTimeFormat;
-(void)setLocaleFromLanguageIdentifier:(id)arg1 ;
-(void)setLocaleFromRegionCode:(id)arg1 ;
-(id)availableLocaleIdentifiers;
-(void)updateLocale:(id)arg1 ;
-(NPSManager *)syncManager;
-(void)setSyncManager:(NPSManager *)arg1 ;
@end

