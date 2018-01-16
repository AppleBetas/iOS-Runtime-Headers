/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:03 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface SKUIDeveloperInfo : NSObject <NSCopying> {

	NSArray* _addressLines;
	NSString* _administrativeArea;
	NSString* _businessRegistrationIdentifier;
	NSString* _country;
	NSString* _ecommerceRegistrationIdentifier;
	NSString* _emailAddress;
	NSString* _isoCountryCode;
	NSString* _locality;
	NSString* _phoneNumber;
	NSString* _tradeName;
	NSString* _tradeRepresentativeName;
	NSString* _postalCode;

}

@property (nonatomic,copy) NSString * businessRegistrationIdentifier;               //@synthesize businessRegistrationIdentifier=_businessRegistrationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * ECommerceRegistrationIdentifier;              //@synthesize ecommerceRegistrationIdentifier=_ecommerceRegistrationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                                 //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                                  //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * tradeName;                                    //@synthesize tradeName=_tradeName - In the implementation block
@property (nonatomic,copy) NSString * tradeRepresentativeName;                      //@synthesize tradeRepresentativeName=_tradeRepresentativeName - In the implementation block
@property (nonatomic,copy) NSArray * addressLines;                                  //@synthesize addressLines=_addressLines - In the implementation block
@property (nonatomic,copy) NSString * administrativeArea;                           //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,copy) NSString * country;                                      //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSString * ISOCountryCode;                               //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,copy) NSString * locality;                                     //@synthesize locality=_locality - In the implementation block
@property (nonatomic,copy) NSString * postalCode;                                   //@synthesize postalCode=_postalCode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)phoneNumber;
-(NSString *)country;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)administrativeArea;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(NSString *)locality;
-(void)setLocality:(NSString *)arg1 ;
-(NSString *)tradeName;
-(NSString *)tradeRepresentativeName;
-(id)formattedAddressString;
-(NSString *)emailAddress;
-(NSString *)ECommerceRegistrationIdentifier;
-(NSString *)businessRegistrationIdentifier;
-(id)initWithDeveloperDictionary:(id)arg1 ;
-(void)setTradeName:(NSString *)arg1 ;
-(void)setISOCountryCode:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(void)setAddressLines:(NSArray *)arg1 ;
-(void)setBusinessRegistrationIdentifier:(NSString *)arg1 ;
-(void)setECommerceRegistrationIdentifier:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setTradeRepresentativeName:(NSString *)arg1 ;
-(NSArray *)addressLines;
-(NSString *)ISOCountryCode;
-(NSString *)postalCode;
@end

