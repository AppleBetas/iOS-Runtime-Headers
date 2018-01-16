/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/IMAttachmentResolving.h>

@protocol IMAttachmentResolving;
@class NSString;

@interface IMDataSourceAttachmentResolver : NSObject <IMAttachmentResolving> {

	id<IMAttachmentResolving> _dataSource;

}

@property (assign,nonatomic) id<IMAttachmentResolving> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canResolveAttachmentInfo:(id)arg1 ;
-(BOOL)supportsAttachmentResolvingOption:(int)arg1 ;
-(void)resolveAttachmentInfo:(id)arg1 context:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setDataSource:(id<IMAttachmentResolving>)arg1 ;
-(void)dealloc;
-(id<IMAttachmentResolving>)dataSource;
@end

