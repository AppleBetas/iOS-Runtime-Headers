/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:56:09 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NPKPaymentWebServiceTargetDevice.h>
#import <libobjc.A.dylib/PKPaymentWebServiceTargetDeviceProtocol.h>
#import <libobjc.A.dylib/PKPaymentWebServiceArchiver.h>

@class PKPaymentDevice, NSString;

@interface NPKPaymentWebServiceWatchTargetDevice : NPKPaymentWebServiceTargetDevice <PKPaymentWebServiceTargetDeviceProtocol, PKPaymentWebServiceArchiver> {

	PKPaymentDevice* _paymentDevice;

}

@property (nonatomic,retain) PKPaymentDevice * paymentDevice;              //@synthesize paymentDevice=_paymentDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)deviceRegion;
-(void)noteProvisioningDidBegin;
-(void)noteProvisioningDidEnd;
-(void)archiveContext:(id)arg1 ;
-(void)archiveBackgroundContext:(id)arg1 ;
-(void)paymentWebServiceDidUpdateConfiguration:(id)arg1 ;
-(void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2 ;
-(void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3 ;
-(id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2 ;
-(int)paymentSupportedInCurrentRegionForWebService:(id)arg1 ;
-(id)bridgedClientInfo;
-(void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(/*^block*/id)arg2 ;
-(BOOL)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2 ;
-(BOOL)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2 ;
-(void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(/*^block*/id)arg2 ;
-(void)downloadAllPaymentPassesForPaymentWebService:(id)arg1 ;
-(id)deviceName;
-(PKPaymentDevice *)paymentDevice;
-(void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 ;
-(void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessary:(/*^block*/id)arg2 ;
-(void)setPaymentDevice:(PKPaymentDevice *)arg1 ;
-(void)noteProvisioningUserInterfaceDidAppear;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)deviceDescriptionForPaymentWebService:(id)arg1 ;
-(BOOL)felicaSecureElementIsAvailable;
-(BOOL)supportsAutomaticPassPresentation;
-(id)secureElementIdentifiers;
@end

