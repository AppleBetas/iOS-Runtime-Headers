/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString, NSArray;

@interface SBExternalCarrierDefaults : BSAbstractDefaultDomain

@property (nonatomic,readonly) BOOL canReinitiateActivation; 
@property (nonatomic,readonly) NSString * customerServicePhoneNumber; 
@property (nonatomic,readonly) BOOL shouldHideAllVoicemailUI; 
@property (nonatomic,readonly) NSArray * disabledApplicationIDs; 
@property (nonatomic,readonly) NSString * carrierName; 
@property (nonatomic,readonly) BOOL showClass0SMSFromField; 
@property (nonatomic,readonly) NSString * homeCountryCode; 
@property (nonatomic,readonly) NSArray * ussdFilterStrings; 
@property (nonatomic,readonly) NSArray * ussdFilterSometimesStrings; 
-(void)setCustomerServicePhoneNumber:(NSString *)arg1 ;
-(NSString *)customerServicePhoneNumber;
-(void)setShouldHideAllVoicemailUI:(BOOL)arg1 ;
-(BOOL)shouldHideAllVoicemailUI;
-(void)setCarrierName:(NSString *)arg1 ;
-(NSString *)carrierName;
-(void)setCanReinitiateActivation:(BOOL)arg1 ;
-(BOOL)canReinitiateActivation;
-(void)setUssdFilterSometimesStrings:(NSArray *)arg1 ;
-(NSArray *)ussdFilterSometimesStrings;
-(void)setUssdFilterStrings:(NSArray *)arg1 ;
-(NSArray *)ussdFilterStrings;
-(void)setHomeCountryCode:(NSString *)arg1 ;
-(NSString *)homeCountryCode;
-(void)setShowClass0SMSFromField:(BOOL)arg1 ;
-(BOOL)showClass0SMSFromField;
-(void)setDisabledApplicationIDs:(NSArray *)arg1 ;
-(NSArray *)disabledApplicationIDs;
-(id)init;
-(void)_bindAndRegisterDefaults;
@end

