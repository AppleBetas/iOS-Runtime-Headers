/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:54 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUISettingDescription.h>

@class NSString, NSOperationQueue, UIImage;

@interface SKUIProfileSettingDescription : SKUISettingDescription {

	NSString* _handle;
	NSString* _name;
	NSOperationQueue* _operationQueue;
	UIImage* _photo;

}

@property (nonatomic,readonly) NSString * handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) UIImage * photo;                //@synthesize photo=_photo - In the implementation block
+(Class)_viewClassForSettingDescription:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(NSString *)name;
-(id)initWithViewElement:(id)arg1 parent:(id)arg2 ;
-(void)_fetchAccountInfo;
-(void)_fetchProfilePhoto;
-(NSString *)handle;
-(UIImage *)photo;
@end

