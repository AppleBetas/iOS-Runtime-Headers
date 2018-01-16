/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 14, 2017 at 5:17:22 PM Greenwich Mean Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class PKActivityTableCell, PKTableHeaderView, UIColor, PKPaymentVerificationController, NSString;

@interface PKPaymentSetupVerificationCompletionViewController : PKPaymentSetupTableViewController <UITextFieldDelegate> {

	PKActivityTableCell* _verificationCodeCell;
	BOOL _verificationCodeAccepted;
	BOOL _resignedResponder;
	PKTableHeaderView* _tableHeader;
	UIColor* _editableTextFieldColor;
	long long _mode;
	PKPaymentVerificationController* _verificationController;

}

@property (nonatomic,readonly) PKPaymentVerificationController * verificationController;              //@synthesize verificationController=_verificationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(PKPaymentVerificationController *)verificationController;
-(id)initWithVerificationController:(id)arg1 mode:(long long)arg2 ;
-(void)_showAddToWatchOfferForPass:(id)arg1 ;
-(void)next:(id)arg1 ;
-(void)_showValidatedUI;
-(void)_terminateFlow;
-(void)_submitVerificationCode;
-(void)_showCompletedUIForPass:(id)arg1 ;
-(void)_disableUI;
-(void)_showActivationError:(id)arg1 ;
-(void)_enableUI;
@end

