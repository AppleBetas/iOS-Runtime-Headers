/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 14, 2017 at 5:17:20 PM Greenwich Mean Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>

@class PKPaymentSetupProduct;

@interface PKPaymentReaderModeDetailsViewController : PKPaymentSetupProvisioningFieldsViewController {

	BOOL _termsAccepted;
	PKPaymentSetupProduct* _product;

}

@property (nonatomic,readonly) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)footerView;
-(PKPaymentSetupProduct *)product;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(id)visibleFieldIdentifiers;
-(void)handleNextButtonTapped:(id)arg1 ;
-(id)defaultFields;
-(void)_showTerms;
-(void)_registerLocalDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)_pushReaderModeProvisioning;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 product:(id)arg4 ;
@end

