/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 2:44:28 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSManualPairingViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSString;

@interface COSSecurePairingViewController : COSManualPairingViewController <UITableViewDelegate, UITableViewDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)headerClass;
-(BOOL)updateDiscoveredDevices;
-(id)didSelectRowAtIndexPath:(id)arg1 ;
-(id)cellNameForRow:(long long)arg1 ;
-(void)endDiscovery;
-(void)beginDiscovery;
@end

