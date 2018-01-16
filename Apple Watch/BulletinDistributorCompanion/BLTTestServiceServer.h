/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:57:28 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/BLTTTestServiceServerExportedInterface.h>

@class NSMutableArray, NSXPCListener, NSString;

@interface BLTTestServiceServer : NSObject <NSXPCListenerDelegate, BLTTTestServiceServerExportedInterface> {

	NSMutableArray* _clientConnections;
	NSXPCListener* _listener;

}

@property (nonatomic,retain) NSMutableArray * clientConnections;              //@synthesize clientConnections=_clientConnections - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedTestServer;
-(id)init;
-(void)resume;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)addBulletin:(id)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(BOOL)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)sendSectionInfoWithSectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendAllSectionInfoWithSpool:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)spoolSectionInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)clearSectionInfoSentCacheWithCompletion:(/*^block*/id)arg1 ;
-(void)getStandaloneTestModeEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)disableStandaloneTestModeWithCompletion:(/*^block*/id)arg1 ;
-(void)willAlertForSectionID:(id)arg1 subtype:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)settingOverridesWithCompletion:(/*^block*/id)arg1 ;
-(void)originalSettingsWithCompletion:(/*^block*/id)arg1 ;
-(void)overriddenSettingsWithCompletion:(/*^block*/id)arg1 ;
-(void)_removeClientConnection:(id)arg1 ;
-(void)setClientConnections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)clientConnections;
@end

