/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:48:11 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSOptinViewController.h>
#import <Bridge/COSUnifiedFYIOptinController.h>

@class NSString;

@interface COSFMIPOptinViewController : COSOptinViewController <COSUnifiedFYIOptinController>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)wantsUnifiedFYI;
+(BOOL)controllerNeedsToRun;
-(void)applyConfirmedOptin:(BOOL)arg1 ;
-(id)detailString;
-(void)selectedOptinChoice:(id)arg1 ;
-(id)suggestedButtonString;
-(id)alternateButtonString;
-(id)aboutButtonString;
-(id)detailTitleString;
-(void)selectedAboutDetail:(id)arg1 ;
-(id)titleString;
-(id)imageResource;
@end

