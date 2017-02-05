/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 2:44:28 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NRDevice;

@interface COSPairingController : PSListController {

	BOOL _allowsMarkAsMissing;
	NRDevice* _device;

}

@property (nonatomic,retain) NRDevice * device;                     //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) BOOL allowsMarkAsMissing;              //@synthesize allowsMarkAsMissing=_allowsMarkAsMissing - In the implementation block
-(void)nanoRegistryStatusChanged:(id)arg1 ;
-(void)jumpToFindMyApp;
-(void)confirmUnpairingMissing;
-(void)confirmUnpairing;
-(void)confirmedUnpairMissing;
-(void)confirmedUnpairAndMarkAsMissing:(BOOL)arg1 ;
-(void)confirmedUnpair;
-(void)enableDisableUnpairButton:(unsigned long long)arg1 ;
-(BOOL)allowsMarkAsMissing;
-(void)setAllowsMarkAsMissing:(BOOL)arg1 ;
-(void)_applicationResumed:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setSpecifier:(id)arg1 ;
-(NRDevice *)device;
-(void)setDevice:(NRDevice *)arg1 ;
-(id)specifiers;
@end

