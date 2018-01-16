/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSURL, NSDictionary, NSString;

@interface Music.PersonalMixSendFeedbackRequestOperation : MPAsyncOperation {

	 baseURL;
	 storeBagDictionary;
	 playlistGlobalID;
	 songStoreAdamID;
	 choices;
	 responseHandler;
	 operationQueue;

}

@property (readonly,nonatomic) NSURL * baseURL; 
@property (readonly,nonatomic) NSDictionary * storeBagDictionary; 
@property (copy,nonatomic) NSString * playlistGlobalID; 
@property (assign,nonatomic) long long songStoreAdamID; 
@property (copy,nonatomic) id responseHandler; 
-(long long)songStoreAdamID;
-(void)setSongStoreAdamID:(long long)arg1 ;
-(id)initWithBaseURL:(id)arg1 storeBagDictionary:(id)arg2 ;
-(void)setPlaylistGlobalID:(NSString *)arg1 ;
-(id)init;
-(NSURL *)baseURL;
-(NSString *)playlistGlobalID;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)execute;
-(NSDictionary *)storeBagDictionary;
@end

