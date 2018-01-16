/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:55:20 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoComplicationSettings.framework/NanoComplicationSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoComplicationSettings/NanoComplicationSettings-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NCSComplication : NSObject <NSCopying> {

	BOOL _cannotBeDisabled;
	BOOL _active;
	NSString* _name;
	NSString* _appBundleIdentifier;
	NSString* _complicationBundleIdentifier;
	NSString* _sockPuppetIdentifier;
	unsigned long long _installState;

}

@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;                       //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * complicationBundleIdentifier;              //@synthesize complicationBundleIdentifier=_complicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sockPuppetIdentifier;                      //@synthesize sockPuppetIdentifier=_sockPuppetIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * complicationIdentifier; 
@property (assign,nonatomic) BOOL cannotBeDisabled;                              //@synthesize cannotBeDisabled=_cannotBeDisabled - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                        //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) unsigned long long installState;                    //@synthesize installState=_installState - In the implementation block
@property (nonatomic,readonly) BOOL isInstalled; 
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isActive;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isInstalled;
-(NSString *)appBundleIdentifier;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sockPuppetIdentifier;
-(BOOL)cannotBeDisabled;
-(void)setCannotBeDisabled:(BOOL)arg1 ;
-(void)setSockPuppetIdentifier:(NSString *)arg1 ;
-(unsigned long long)installState;
-(void)setInstallState:(unsigned long long)arg1 ;
-(NSString *)complicationIdentifier;
-(NSString *)complicationBundleIdentifier;
-(void)setComplicationBundleIdentifier:(NSString *)arg1 ;
@end

