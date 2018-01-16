/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:57:28 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTBulletinSendQueueDelegate;
@interface BLTBulletinSendQueuePassthrough : NSObject {

	id<BLTBulletinSendQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BLTBulletinSendQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<BLTBulletinSendQueueDelegate>)arg1 ;
-(id<BLTBulletinSendQueueDelegate>)delegate;
-(void)sendNow;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 isTrafficRestricted:(BOOL)arg4 attachmentURL:(id)arg5 attachmentKey:(id)arg6 didSend:(/*^block*/id)arg7 ;
-(void)handleFileURL:(id)arg1 ;
-(void)queuePending;
-(void)_sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 isTrafficRestricted:(BOOL)arg4 attachmentURL:(id)arg5 attachmentKey:(id)arg6 didSend:(/*^block*/id)arg7 didQueue:(/*^block*/id)arg8 ;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(/*^block*/id)arg3 didQueue:(/*^block*/id)arg4 ;
@end

