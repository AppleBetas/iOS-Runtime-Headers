/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:56:08 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKImage, NSString, NSNumber, NSData, NSDate, PKNFCPayload, PKColor, NSSet, PKPaymentApplication, NSArray, PKFelicaTransitAppletState, NSDecimalNumber;

@interface NPKPassDescription : NSObject <NSSecureCoding, NSCopying> {

	BOOL _hasStoredValue;
	BOOL _privateLabel;
	BOOL _cobranded;
	BOOL _deletePending;
	BOOL _hasUserSelectableContactlessPaymentApplications;
	PKImage* _logoImage;
	PKImage* _backgroundImage;
	NSString* _uniqueID;
	NSNumber* _groupID;
	NSString* _passTypeIdentifier;
	NSData* _manifestHash;
	long long _style;
	NSDate* _relevantDate;
	NSDate* _ingestionDate;
	PKNFCPayload* _nfcPayload;
	NSData* _completeHash;
	unsigned long long _settings;
	NSString* _logoText;
	PKColor* _backgroundColor;
	PKColor* _foregroundColor;
	PKColor* _labelColor;
	NSString* _localizedDescription;
	NSSet* _devicePaymentApplications;
	PKPaymentApplication* _devicePrimaryPaymentApplication;
	PKPaymentApplication* _devicePrimaryContactlessPaymentApplication;
	PKPaymentApplication* _devicePrimaryInAppPaymentApplication;
	PKPaymentApplication* _preferredPaymentApplication;
	long long _effectivePaymentApplicationState;
	NSArray* _availableActions;
	NSString* _organizationName;
	PKFelicaTransitAppletState* _felicaTransitAppletState;
	NSArray* _frontFieldBuckets;
	NSArray* _backFieldBuckets;
	NSDecimalNumber* _lastAddValueAmount;
	NSDate* _pendingAddValueDate;
	NSData* _logoImageEncoded;
	NSData* _backgroundImageEncoded;

}

@property (nonatomic,retain) NSData * logoImageEncoded;                                                      //@synthesize logoImageEncoded=_logoImageEncoded - In the implementation block
@property (nonatomic,retain) NSData * backgroundImageEncoded;                                                //@synthesize backgroundImageEncoded=_backgroundImageEncoded - In the implementation block
@property (nonatomic,retain) NSString * uniqueID;                                                            //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,retain) NSNumber * groupID;                                                             //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,retain) NSString * passTypeIdentifier;                                                  //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,retain) NSData * manifestHash;                                                          //@synthesize manifestHash=_manifestHash - In the implementation block
@property (assign,nonatomic) long long style;                                                                //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSDate * relevantDate;                                                          //@synthesize relevantDate=_relevantDate - In the implementation block
@property (nonatomic,retain) NSDate * ingestionDate;                                                         //@synthesize ingestionDate=_ingestionDate - In the implementation block
@property (nonatomic,retain) PKNFCPayload * nfcPayload;                                                      //@synthesize nfcPayload=_nfcPayload - In the implementation block
@property (assign,nonatomic) BOOL hasStoredValue;                                                            //@synthesize hasStoredValue=_hasStoredValue - In the implementation block
@property (nonatomic,retain) NSData * completeHash;                                                          //@synthesize completeHash=_completeHash - In the implementation block
@property (assign,nonatomic) unsigned long long settings;                                                    //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) NSString * logoText;                                                            //@synthesize logoText=_logoText - In the implementation block
@property (nonatomic,retain) PKImage * logoImage;                                                            //@synthesize logoImage=_logoImage - In the implementation block
@property (nonatomic,retain) PKColor * backgroundColor;                                                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) PKColor * foregroundColor;                                                      //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) PKColor * labelColor;                                                           //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,retain) PKImage * backgroundImage;                                                      //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) NSString * localizedDescription;                                                //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,retain) NSSet * devicePaymentApplications;                                              //@synthesize devicePaymentApplications=_devicePaymentApplications - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * devicePrimaryPaymentApplication;                         //@synthesize devicePrimaryPaymentApplication=_devicePrimaryPaymentApplication - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * devicePrimaryContactlessPaymentApplication;              //@synthesize devicePrimaryContactlessPaymentApplication=_devicePrimaryContactlessPaymentApplication - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * devicePrimaryInAppPaymentApplication;                    //@synthesize devicePrimaryInAppPaymentApplication=_devicePrimaryInAppPaymentApplication - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * preferredPaymentApplication;                             //@synthesize preferredPaymentApplication=_preferredPaymentApplication - In the implementation block
@property (assign,nonatomic) long long effectivePaymentApplicationState;                                     //@synthesize effectivePaymentApplicationState=_effectivePaymentApplicationState - In the implementation block
@property (assign,getter=isPrivateLabel,nonatomic) BOOL privateLabel;                                        //@synthesize privateLabel=_privateLabel - In the implementation block
@property (assign,getter=isCobranded,nonatomic) BOOL cobranded;                                              //@synthesize cobranded=_cobranded - In the implementation block
@property (assign,nonatomic) BOOL deletePending;                                                             //@synthesize deletePending=_deletePending - In the implementation block
@property (assign,nonatomic) BOOL hasUserSelectableContactlessPaymentApplications;                           //@synthesize hasUserSelectableContactlessPaymentApplications=_hasUserSelectableContactlessPaymentApplications - In the implementation block
@property (nonatomic,readonly) long long effectiveContactlessPaymentApplicationState; 
@property (nonatomic,retain) NSArray * availableActions;                                                     //@synthesize availableActions=_availableActions - In the implementation block
@property (nonatomic,retain) NSString * organizationName;                                                    //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,retain) PKFelicaTransitAppletState * felicaTransitAppletState;                          //@synthesize felicaTransitAppletState=_felicaTransitAppletState - In the implementation block
@property (nonatomic,retain) NSArray * frontFieldBuckets;                                                    //@synthesize frontFieldBuckets=_frontFieldBuckets - In the implementation block
@property (nonatomic,retain) NSArray * backFieldBuckets;                                                     //@synthesize backFieldBuckets=_backFieldBuckets - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * lastAddValueAmount;                                           //@synthesize lastAddValueAmount=_lastAddValueAmount - In the implementation block
@property (nonatomic,retain) NSDate * pendingAddValueDate;                                                   //@synthesize pendingAddValueDate=_pendingAddValueDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setCachingEnabled:(BOOL)arg1 ;
+(BOOL)isCachingEnabled;
-(void)setBackgroundColor:(PKColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)settings;
-(NSString *)localizedDescription;
-(long long)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(PKImage *)backgroundImage;
-(void)setStyle:(long long)arg1 ;
-(void)setBackgroundImage:(PKImage *)arg1 ;
-(void)setSettings:(unsigned long long)arg1 ;
-(PKColor *)foregroundColor;
-(void)setForegroundColor:(PKColor *)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(void)setOrganizationName:(NSString *)arg1 ;
-(NSString *)passTypeIdentifier;
-(void)setUniqueID:(NSString *)arg1 ;
-(id)initWithPass:(id)arg1 ;
-(void)setLogoImage:(PKImage *)arg1 ;
-(PKImage *)logoImage;
-(NSNumber *)groupID;
-(void)setGroupID:(NSNumber *)arg1 ;
-(void)setCobranded:(BOOL)arg1 ;
-(void)setDevicePaymentApplications:(NSSet *)arg1 ;
-(void)setDevicePrimaryPaymentApplication:(PKPaymentApplication *)arg1 ;
-(void)setDevicePrimaryContactlessPaymentApplication:(PKPaymentApplication *)arg1 ;
-(void)setDevicePrimaryInAppPaymentApplication:(PKPaymentApplication *)arg1 ;
-(BOOL)isCobranded;
-(void)setAvailableActions:(NSArray *)arg1 ;
-(void)setManifestHash:(NSData *)arg1 ;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(void)setRelevantDate:(NSDate *)arg1 ;
-(void)setHasStoredValue:(BOOL)arg1 ;
-(NSDate *)relevantDate;
-(void)setLabelColor:(PKColor *)arg1 ;
-(void)setLogoText:(NSString *)arg1 ;
-(void)setFrontFieldBuckets:(NSArray *)arg1 ;
-(void)setBackFieldBuckets:(NSArray *)arg1 ;
-(NSString *)organizationName;
-(id)fieldForKey:(id)arg1 ;
-(BOOL)deletePending;
-(PKPaymentApplication *)preferredPaymentApplication;
-(void)setIngestionDate:(NSDate *)arg1 ;
-(void)setPrivateLabel:(BOOL)arg1 ;
-(void)setDeletePending:(BOOL)arg1 ;
-(void)setNfcPayload:(PKNFCPayload *)arg1 ;
-(void)setCompleteHash:(NSData *)arg1 ;
-(void)setPreferredPaymentApplication:(PKPaymentApplication *)arg1 ;
-(void)setEffectivePaymentApplicationState:(long long)arg1 ;
-(void)setHasUserSelectableContactlessPaymentApplications:(BOOL)arg1 ;
-(void)setLogoImageEncoded:(NSData *)arg1 ;
-(void)setBackgroundImageEncoded:(NSData *)arg1 ;
-(void)setFelicaTransitAppletState:(PKFelicaTransitAppletState *)arg1 ;
-(void)setLastAddValueAmount:(NSDecimalNumber *)arg1 ;
-(void)setPendingAddValueDate:(NSDate *)arg1 ;
-(NSDate *)ingestionDate;
-(long long)effectivePaymentApplicationState;
-(BOOL)hasUserSelectableContactlessPaymentApplications;
-(NSData *)logoImageEncoded;
-(NSData *)backgroundImageEncoded;
-(NSData *)completeHash;
-(PKFelicaTransitAppletState *)felicaTransitAppletState;
-(NSDecimalNumber *)lastAddValueAmount;
-(NSDate *)pendingAddValueDate;
-(id)encodeAsData:(id)arg1 ;
-(id)safeUnarchiveObjectOfClass:(Class)arg1 withData:(id)arg2 ;
-(BOOL)supportsInAppPaymentOnNetworks:(id)arg1 capabilities:(unsigned long long)arg2 ;
-(id)_personalizedInAppPaymentApplicationsForNetworks:(id)arg1 ;
-(void)encodeObject:(id)arg1 asDataInCoder:(id)arg2 withKey:(id)arg3 ;
-(BOOL)supportsInAppPaymentOnNetworks:(id)arg1 ;
-(BOOL)isAddValuePending;
-(BOOL)isEnroute;
-(NSString *)logoText;
-(PKNFCPayload *)nfcPayload;
-(NSArray *)frontFieldBuckets;
-(NSArray *)backFieldBuckets;
-(PKPaymentApplication *)devicePrimaryInAppPaymentApplication;
-(PKPaymentApplication *)devicePrimaryPaymentApplication;
-(id)felicaProperties;
-(long long)effectiveContactlessPaymentApplicationState;
-(BOOL)isPrivateLabel;
-(NSArray *)availableActions;
-(PKColor *)labelColor;
-(NSData *)manifestHash;
-(BOOL)hasStoredValue;
-(PKPaymentApplication *)devicePrimaryContactlessPaymentApplication;
-(NSSet *)devicePaymentApplications;
@end

