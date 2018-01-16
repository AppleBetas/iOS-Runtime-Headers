/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:56:29 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoResourceGrabber.framework/NanoResourceGrabber
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface NanoResourceGrabber : NSObject {

	BOOL _connectionMayBeValid;
	NSXPCConnection* _nrgdConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _iconCacheQueue;

}

@property (nonatomic,retain) NSXPCConnection * nrgdConnection;                         //@synthesize nrgdConnection=_nrgdConnection - In the implementation block
@property (assign) BOOL connectionMayBeValid;                                          //@synthesize connectionMayBeValid=_connectionMayBeValid - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> iconCacheQueue;              //@synthesize iconCacheQueue=_iconCacheQueue - In the implementation block
+(id)sharedInstance;
+(id)_iconVariant:(int)arg1 fromURL:(id)arg2 ;
+(BOOL)isFirstParty:(id)arg1 ;
+(id)liIconVariants;
+(id)firstPartyBundleIDs;
+(id)nrgIconVariants;
+(id)iconDataForBundleID:(id)arg1 variant:(int)arg2 proxy:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)connectionMayBeValid;
-(void)setConnectionMayBeValid:(BOOL)arg1 ;
-(NSXPCConnection *)nrgdConnection;
-(void)setNrgdConnection:(NSXPCConnection *)arg1 ;
-(id)connectToService;
-(void)getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 outIconImage:(id*)arg3 updateBlock:(/*^block*/id)arg4 timeout:(double)arg5 ;
-(void)getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 outIconImage:(id*)arg3 queue:(id)arg4 updateBlock:(/*^block*/id)arg5 timeout:(double)arg6 ;
-(void)_getLocalIconForBundleID:(id)arg1 iconVariant:(int)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 outIconImage:(id*)arg3 updateBlock:(/*^block*/id)arg4 ;
-(id)_getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 ;
-(void)_setCachedIcon:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3 ;
-(void)_getLocalIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(/*^block*/id)arg3 ;
-(void)getRemoteIconForBundleIDBypassingCache:(id)arg1 iconVariant:(int)arg2 block:(/*^block*/id)arg3 timeout:(double)arg4 ;
-(void)getIconForBundleID:(id)arg1 iconVariant:(int)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 timeout:(double)arg5 ;
-(void)getRemoteIconForBundleID:(id)arg1 iconVariant:(int)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 timeout:(double)arg5 ;
-(void)getRemoteIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(/*^block*/id)arg3 timeout:(double)arg4 ;
-(id)grabIconForBundleID:(id)arg1 iconVariant:(int)arg2 updateBlock:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)iconCacheQueue;
-(void)setIconCacheQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)getIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(/*^block*/id)arg3 timeout:(double)arg4 ;
@end

