/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:57:14 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, BBSettingsGateway, NSString, NSDateComponents;

@interface PBBGatewayManager : NSObject {

	BOOL _isScheduled;
	NSArray* _bbSections;
	BBSettingsGateway* _settingsGateway;
	NSString* _allowedGroupName;
	unsigned long long _privilegedSenderType;
	NSDateComponents* _dndFromComponents;
	NSDateComponents* _dndToComponents;

}

@property (nonatomic,retain) BBSettingsGateway * settingsGateway;                    //@synthesize settingsGateway=_settingsGateway - In the implementation block
@property (nonatomic,readonly) NSString * allowedGroupName;                          //@synthesize allowedGroupName=_allowedGroupName - In the implementation block
@property (nonatomic,readonly) unsigned long long privilegedSenderType;              //@synthesize privilegedSenderType=_privilegedSenderType - In the implementation block
@property (nonatomic,readonly) BOOL isScheduled;                                     //@synthesize isScheduled=_isScheduled - In the implementation block
@property (nonatomic,readonly) NSDateComponents * dndFromComponents;                 //@synthesize dndFromComponents=_dndFromComponents - In the implementation block
@property (nonatomic,readonly) NSDateComponents * dndToComponents;                   //@synthesize dndToComponents=_dndToComponents - In the implementation block
@property (nonatomic,retain) NSArray * bbSections;                                   //@synthesize bbSections=_bbSections - In the implementation block
+(id)sharedManager;
-(BOOL)isScheduled;
-(id)init;
-(void)dealloc;
-(BOOL)repeatedCalls;
-(void)loadBBSections;
-(void)loadDNDState;
-(NSArray *)bbSections;
-(void)setBbSections:(NSArray *)arg1 ;
-(NSString *)allowedGroupName;
-(unsigned long long)privilegedSenderType;
-(NSDateComponents *)dndFromComponents;
-(NSDateComponents *)dndToComponents;
-(void)setSettingsGateway:(BBSettingsGateway *)arg1 ;
-(BBSettingsGateway *)settingsGateway;
@end

