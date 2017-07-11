/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/IMCloudSyncTransactionProcessing.h>

@class NSArray, NSMutableDictionary, NSString;

@interface IMCloudSyncKeyValueStoreProcessor : NSObject <IMCloudSyncTransactionProcessing> {

	/*^block*/id _retryBlock;
	/*^block*/id _completionBlock;
	NSArray* _keys;
	NSMutableDictionary* _values;
	NSMutableDictionary* _versions;

}

@property (nonatomic,copy) id retryBlock;                                 //@synthesize retryBlock=_retryBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                            //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSArray * keys;                              //@synthesize keys=_keys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * values;                //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * versions;              //@synthesize versions=_versions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)versionForGetTransaction:(id)arg1 key:(id)arg2 ;
-(id)dataForSetTransaction:(id)arg1 key:(id)arg2 version:(id*)arg3 ;
-(void)transaction:(id)arg1 mergeData:(id)arg2 forKey:(id)arg3 version:(id)arg4 mismatch:(BOOL)arg5 finishedBlock:(/*^block*/id)arg6 ;
-(void)transactionDidFinish:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)setRetryBlock:(id)arg1 ;
-(id)retryBlock;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSMutableDictionary *)values;
-(void)setValues:(NSMutableDictionary *)arg1 ;
-(NSArray *)keys;
-(void)setKeys:(NSArray *)arg1 ;
-(NSMutableDictionary *)versions;
-(void)setVersions:(NSMutableDictionary *)arg1 ;
@end

