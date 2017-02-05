/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:04 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIClientContext, UIImage, SKUIITunesPassConfiguration, NSOperationQueue;

@interface SKUIRedeemConfiguration : NSObject {

	long long _category;
	SKUIClientContext* _clientContext;
	UIImage* _inputImage;
	SKUIITunesPassConfiguration* _itunesPassConfiguration;
	UIImage* _landingImage;
	NSOperationQueue* _operationQueue;
	UIImage* _successImage;

}

@property (nonatomic,readonly) long long category;                                                 //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) SKUIClientContext * clientContext;                                  //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                                  //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) UIImage * inputImage;                                               //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,readonly) UIImage * landingImage;                                             //@synthesize landingImage=_landingImage - In the implementation block
@property (nonatomic,readonly) UIImage * successImage;                                             //@synthesize successImage=_successImage - In the implementation block
@property (nonatomic,readonly) SKUIITunesPassConfiguration * ITunesPassConfiguration;              //@synthesize itunesPassConfiguration=_itunesPassConfiguration - In the implementation block
-(long long)category;
-(NSOperationQueue *)operationQueue;
-(SKUIClientContext *)clientContext;
-(void)loadConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithOperationQueue:(id)arg1 category:(long long)arg2 clientContext:(id)arg3 ;
-(SKUIITunesPassConfiguration *)ITunesPassConfiguration;
-(UIImage *)landingImage;
-(UIImage *)successImage;
-(void)_loadConfigurationWithURLBagDictionary:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_setLandingImage:(id)arg1 ;
-(void)_setSuccessImage:(id)arg1 ;
-(void)_setInputImage:(id)arg1 ;
-(void)_loadDefaultImages;
-(id)_redeemPreflightRequestBodyData;
-(void)_didLoadWithResponseDictionary:(id)arg1 ;
-(UIImage *)inputImage;
@end

