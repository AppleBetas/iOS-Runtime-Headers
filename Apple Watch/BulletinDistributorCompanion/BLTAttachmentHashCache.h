/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:57:27 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface BLTAttachmentHashCache : NSObject {

	NSMutableDictionary* _cacheBySectionID;

}
-(id)init;
-(id)_hashAttachment:(id)arg1 forSectionID:(id)arg2 matchID:(id)arg3 ;
-(void)cacheAttachment:(id)arg1 forSectionID:(id)arg2 matchID:(id)arg3 ;
-(void)removeAttachmentForSectionID:(id)arg1 matchID:(id)arg2 ;
-(BOOL)isAttachmentCached:(id)arg1 forSectionID:(id)arg2 matchID:(id)arg3 ;
-(BOOL)hasAttachmentForSectionID:(id)arg1 matchID:(id)arg2 ;
@end

