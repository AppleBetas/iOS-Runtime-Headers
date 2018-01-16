/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MZKeyValueStoreDeserializeOperationDelegate;
@class IMKeyValueStoreTransaction, NSDictionary, NSObject, IMKeyValueStoreController, NSMutableArray, NSError;

@interface IMKeyValueStoreDeserializer : NSObject {

	IMKeyValueStoreTransaction* _transaction;
	NSDictionary* _serverResponse;
	NSObject*<MZKeyValueStoreDeserializeOperationDelegate> _delegate;
	long long _status;
	unsigned long long _retrySeconds;
	BOOL _isDirty;
	IMKeyValueStoreController* _keyValueStoreController;
	NSMutableArray* _pendingDeserializations;

}

@property (retain) NSMutableArray * pendingDeserializations;                                               //@synthesize pendingDeserializations=_pendingDeserializations - In the implementation block
@property (nonatomic,retain) IMKeyValueStoreTransaction * transaction;                                     //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) IMKeyValueStoreController * keyValueStoreController;                          //@synthesize keyValueStoreController=_keyValueStoreController - In the implementation block
@property (nonatomic,retain) NSDictionary * serverResponse;                                                //@synthesize serverResponse=_serverResponse - In the implementation block
@property (assign,nonatomic) NSObject*<MZKeyValueStoreDeserializeOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long status;                                                             //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL unsupportedClient; 
@property (nonatomic,readonly) BOOL authenticationError; 
@property (nonatomic,readonly) BOOL validationError; 
@property (nonatomic,readonly) BOOL genericError; 
@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) BOOL versionMismatch; 
@property (nonatomic,readonly) BOOL hasBackoff; 
@property (nonatomic,readonly) unsigned long long retrySeconds;                                            //@synthesize retrySeconds=_retrySeconds - In the implementation block
@property (nonatomic,readonly) NSError * requestError; 
-(id)initWithTransaction:(id)arg1 response:(id)arg2 ;
-(BOOL)versionMismatch;
-(void)deserialize;
-(BOOL)hasBackoff;
-(BOOL)unsupportedClient;
-(BOOL)validationError;
-(BOOL)authenticationError;
-(void)setPendingDeserializations:(NSMutableArray *)arg1 ;
-(void)finishedDeserializationForKey:(id)arg1 ;
-(void)_delegateOperationDidFinish;
-(NSMutableArray *)pendingDeserializations;
-(IMKeyValueStoreController *)keyValueStoreController;
-(void)setKeyValueStoreController:(IMKeyValueStoreController *)arg1 ;
-(void)setServerResponse:(NSDictionary *)arg1 ;
-(void)setDelegate:(NSObject*<MZKeyValueStoreDeserializeOperationDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<MZKeyValueStoreDeserializeOperationDelegate>)delegate;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(IMKeyValueStoreTransaction *)transaction;
-(void)setTransaction:(IMKeyValueStoreTransaction *)arg1 ;
-(BOOL)genericError;
-(NSError *)requestError;
-(BOOL)success;
-(NSDictionary *)serverResponse;
-(unsigned long long)retrySeconds;
@end

